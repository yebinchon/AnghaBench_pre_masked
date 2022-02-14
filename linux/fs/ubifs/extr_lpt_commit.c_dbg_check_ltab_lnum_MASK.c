
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int leb_size; int lpt_first; TYPE_1__* ltab; } ;
struct TYPE_2__ {int free; int dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,int,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ubifs_info*,int) ;
 int FUNC_6 (struct ubifs_info*,void*,int*) ;
 int FUNC_7 (struct ubifs_info*,void*,int) ;
 int FUNC_8 (struct ubifs_info*,void*,int) ;
 int FUNC_9 (struct ubifs_info*,char*,...) ;
 int FUNC_10 (struct ubifs_info*,int,void*,int ,int,int) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(struct ubifs_info *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = VAR_3->leb_size, VAR_7 = 0, VAR_8, VAR_9, VAR_10;
 int VAR_11;
 void *VAR_12, *VAR_13;

 if (!FUNC_2(VAR_3))
  return 0;

 VAR_12 = VAR_13 = FUNC_0(VAR_3->leb_size, VAR_1, VAR_2);
 if (!VAR_12) {
  FUNC_9(VAR_3, "cannot allocate memory for ltab checking");
  return 0;
 }

 FUNC_4("LEB %d", VAR_4);

 VAR_5 = FUNC_10(VAR_3, VAR_4, VAR_12, 0, VAR_3->leb_size, 1);
 if (VAR_5)
  goto out;

 while (1) {
  if (!FUNC_8(VAR_3, VAR_13, VAR_6)) {
   int VAR_14, VAR_15;

   VAR_15 = FUNC_7(VAR_3, VAR_13, VAR_6);
   if (VAR_15) {
    VAR_13 += VAR_15;
    VAR_6 -= VAR_15;
    VAR_7 += VAR_15;
    continue;
   }
   if (!FUNC_1(VAR_13, VAR_6)) {
    FUNC_9(VAR_3, "invalid empty space in LEB %d at %d",
       VAR_4, VAR_3->leb_size - VAR_6);
    VAR_5 = -VAR_0;
   }
   VAR_14 = VAR_4 - VAR_3->lpt_first;
   if (VAR_6 != VAR_3->ltab[VAR_14].free) {
    FUNC_9(VAR_3, "invalid free space in LEB %d (free %d, expected %d)",
       VAR_4, VAR_6, VAR_3->ltab[VAR_14].free);
    VAR_5 = -VAR_0;
   }
   if (VAR_7 != VAR_3->ltab[VAR_14].dirty) {
    FUNC_9(VAR_3, "invalid dirty space in LEB %d (dirty %d, expected %d)",
       VAR_4, VAR_7, VAR_3->ltab[VAR_14].dirty);
    VAR_5 = -VAR_0;
   }
   goto out;
  }
  VAR_8 = FUNC_6(VAR_3, VAR_13, &VAR_9);
  VAR_10 = FUNC_5(VAR_3, VAR_8);
  VAR_11 = FUNC_3(VAR_3, VAR_8, VAR_4, VAR_3->leb_size - VAR_6);
  if (VAR_11 == 1)
   VAR_7 += VAR_10;
  VAR_13 += VAR_10;
  VAR_6 -= VAR_10;
 }

 VAR_5 = 0;
out:
 FUNC_11(VAR_12);
 return VAR_5;
}
