
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 scalar_t__ FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,char*,char*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct super_block *VAR_4)
{
 __u32 VAR_5;

 VAR_5 = FUNC_8(FUNC_0(VAR_4));






 if (VAR_5 == VAR_2 || FUNC_2(VAR_4))
  VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 != VAR_2 && FUNC_2(VAR_4)) {




  if (FUNC_5(VAR_4) && VAR_5 != VAR_3) {
   FUNC_7(VAR_4, "reiserfs-2507",
      "Error, %s hash detected, "
      "unable to force rupasov hash",
      FUNC_3(VAR_5));
   VAR_5 = VAR_2;
  } else if (FUNC_6(VAR_4) && VAR_5 != VAR_1) {
   FUNC_7(VAR_4, "reiserfs-2508",
      "Error, %s hash detected, "
      "unable to force tea hash",
      FUNC_3(VAR_5));
   VAR_5 = VAR_2;
  } else if (FUNC_4(VAR_4) && VAR_5 != VAR_0) {
   FUNC_7(VAR_4, "reiserfs-2509",
      "Error, %s hash detected, "
      "unable to force r5 hash",
      FUNC_3(VAR_5));
   VAR_5 = VAR_2;
  }
 } else {




  if (FUNC_5(VAR_4)) {
   VAR_5 = VAR_3;
  } else if (FUNC_6(VAR_4)) {
   VAR_5 = VAR_1;
  } else if (FUNC_4(VAR_4)) {
   VAR_5 = VAR_0;
  }
 }





 if (VAR_5 != VAR_2 &&
     !FUNC_9(VAR_4) &&
     VAR_5 != FUNC_8(FUNC_0(VAR_4))) {
  FUNC_10(FUNC_0(VAR_4), VAR_5);
 }
 return VAR_5;
}
