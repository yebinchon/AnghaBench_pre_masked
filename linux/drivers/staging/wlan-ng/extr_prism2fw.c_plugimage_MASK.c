
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct s3plugrec {scalar_t__ addr; int len; int itemcode; } ;
struct pda {int nrec; TYPE_1__** rec; } ;
struct imgchunk {scalar_t__ addr; scalar_t__ len; int * data; } ;
struct TYPE_2__ {int data; int len; int code; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int,scalar_t__,int,int,scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct imgchunk *VAR_1, unsigned int VAR_2,
       struct s3plugrec *VAR_3, unsigned int VAR_4,
       struct pda *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13;
 u32 VAR_14;
 u8 *VAR_15;


 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_10 = VAR_3[VAR_7].addr;
  VAR_11 = VAR_3[VAR_7].addr + VAR_3[VAR_7].len;

  if (VAR_3[VAR_7].itemcode != 0xffffffffUL) {
   for (VAR_8 = 0; VAR_8 < VAR_5->nrec; VAR_8++) {
    if (VAR_3[VAR_7].itemcode ==
        FUNC_0(VAR_5->rec[VAR_8]->code))
     break;
   }
  } else {
   VAR_8 = -1;
  }
  if (VAR_8 >= VAR_5->nrec && VAR_8 != -1) {
   FUNC_5("warning: Failed to find PDR for plugrec 0x%04x.\n",
    VAR_3[VAR_7].itemcode);
   continue;
  }


  if (VAR_8 != -1 && VAR_3[VAR_7].len < FUNC_0(VAR_5->rec[VAR_8]->len)) {
   FUNC_4("error: Plug vs. PDR len mismatch for plugrec 0x%04x, abort plugging.\n",
          VAR_3[VAR_7].itemcode);
   VAR_6 = 1;
   continue;
  }





  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   VAR_12 = VAR_1[VAR_9].addr;
   VAR_13 = VAR_1[VAR_9].addr + VAR_1[VAR_9].len;
   if (VAR_10 >= VAR_12 && VAR_11 <= VAR_13)
    break;
  }
  if (VAR_9 >= VAR_2) {
   FUNC_4("error: Failed to find image chunk for plugrec 0x%04x.\n",
          VAR_3[VAR_7].itemcode);
   VAR_6 = 1;
   continue;
  }


  VAR_14 = VAR_10 - VAR_12;
  VAR_15 = VAR_1[VAR_9].data + VAR_14;
  FUNC_3("Plugging item 0x%04x @ 0x%06x, len=%d, cnum=%d coff=0x%06x\n",
    VAR_3[VAR_7].itemcode, VAR_10, VAR_3[VAR_7].len,
    VAR_9, VAR_14);

  if (VAR_8 == -1) {
   FUNC_2(VAR_15, 0, VAR_3[VAR_7].len);
   FUNC_6(VAR_15, VAR_0, VAR_3[VAR_7].len - 1);
  } else {
   FUNC_1(VAR_15, &VAR_5->rec[VAR_8]->data, VAR_3[VAR_7].len);
  }
 }
 return VAR_6;
}
