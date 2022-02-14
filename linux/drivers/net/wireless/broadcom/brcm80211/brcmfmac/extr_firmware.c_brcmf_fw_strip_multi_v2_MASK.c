
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct nvram_parser {int nvram_len; scalar_t__* nvram; int boardrev_found; } ;
typedef int prefix ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,int,int) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct nvram_parser *VAR_2, u16 VAR_3,
        u16 VAR_4)
{
 char VAR_5[VAR_0];
 size_t VAR_6;
 u32 VAR_7, VAR_8;
 u8 *VAR_9;

 VAR_9 = FUNC_1(VAR_2->nvram_len + 1 + 3 + sizeof(u32), VAR_1);
 if (!VAR_9)
  goto fail;





 FUNC_2(VAR_5, sizeof(VAR_5), "pcie/%d/%d/", VAR_3, VAR_4);
 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = 0;
 VAR_8 = 0;
 while (VAR_7 < VAR_2->nvram_len - VAR_6) {
  if (FUNC_4(&VAR_2->nvram[VAR_7], VAR_5, VAR_6) == 0) {
   VAR_7 += VAR_6;
   if (FUNC_4(&VAR_2->nvram[VAR_7], "boardrev", 8) == 0)
    VAR_2->boardrev_found = 1;
   while (VAR_2->nvram[VAR_7] != 0) {
    VAR_9[VAR_8] = VAR_2->nvram[VAR_7];
    VAR_7++;
    VAR_8++;
   }
   VAR_9[VAR_8] = 0;
   VAR_8++;
  }
  while (VAR_2->nvram[VAR_7] != 0)
   VAR_7++;
  VAR_7++;
 }
 FUNC_0(VAR_2->nvram);
 VAR_2->nvram = VAR_9;
 VAR_2->nvram_len = VAR_8;
 return;
fail:
 FUNC_0(VAR_9);
 VAR_2->nvram_len = 0;
}
