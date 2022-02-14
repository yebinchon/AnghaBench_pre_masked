
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct nvram_parser {int nvram_len; scalar_t__* nvram; int boardrev_found; } ;
typedef int pcie_path ;
typedef int pci_path ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,int,int) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct nvram_parser *VAR_2, u16 VAR_3,
        u16 VAR_4)
{

 char VAR_5[] = "=pci/?/?";
 size_t VAR_6;
 char VAR_7[] = "=pcie/?/?";
 size_t VAR_8;

 u32 VAR_9, VAR_10;
 bool VAR_11;
 u8 *VAR_12;
 u8 VAR_13;

 VAR_12 = FUNC_1(VAR_2->nvram_len + 1 + 3 + sizeof(u32), VAR_1);
 if (!VAR_12)
  goto fail;


 if (VAR_2->nvram_len < VAR_0 + 6)
  goto fail;




 FUNC_2(VAR_5, sizeof(VAR_5), "=pci/%d/%d", VAR_3,
   VAR_4);
 VAR_6 = FUNC_3(VAR_5);
 FUNC_2(VAR_7, sizeof(VAR_7), "=pcie/%d/%d", VAR_3,
   VAR_4);
 VAR_8 = FUNC_3(VAR_7);
 VAR_11 = 0;
 VAR_9 = 0;
 while (VAR_9 < VAR_2->nvram_len - VAR_0) {



  if (FUNC_4(&VAR_2->nvram[VAR_9], "devpath", 7) == 0 &&
      (!FUNC_4(&VAR_2->nvram[VAR_9 + 8], VAR_5, VAR_6) ||
       !FUNC_4(&VAR_2->nvram[VAR_9 + 8], VAR_7, VAR_8))) {
   VAR_13 = VAR_2->nvram[VAR_9 + 7] - '0';
   VAR_11 = 1;
   break;
  }
  while (VAR_2->nvram[VAR_9] != 0)
   VAR_9++;
  VAR_9++;
 }
 if (!VAR_11)
  goto fail;


 VAR_9 = 0;
 VAR_10 = 0;
 while (VAR_9 < VAR_2->nvram_len) {
  if ((VAR_2->nvram[VAR_9] - '0' == VAR_13) && (VAR_2->nvram[VAR_9 + 1] == ':')) {
   VAR_9 += 2;
   if (FUNC_4(&VAR_2->nvram[VAR_9], "boardrev", 8) == 0)
    VAR_2->boardrev_found = 1;
   while (VAR_2->nvram[VAR_9] != 0) {
    VAR_12[VAR_10] = VAR_2->nvram[VAR_9];
    VAR_9++;
    VAR_10++;
   }
   VAR_12[VAR_10] = 0;
   VAR_10++;
  }
  while (VAR_2->nvram[VAR_9] != 0)
   VAR_9++;
  VAR_9++;
 }
 FUNC_0(VAR_2->nvram);
 VAR_2->nvram = VAR_12;
 VAR_2->nvram_len = VAR_10;
 return;

fail:
 FUNC_0(VAR_12);
 VAR_2->nvram_len = 0;
}
