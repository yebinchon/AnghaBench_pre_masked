
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct bnx2x*,int ,int) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (struct bnx2x*) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static int FUNC_5(struct bnx2x *VAR_19)
{
 int VAR_20, VAR_21 = FUNC_1(VAR_19);
 u32 VAR_22[2];


 FUNC_2(VAR_19, VAR_21 ? VAR_10 :
        VAR_2, 0x7FF);
 FUNC_2(VAR_19, VAR_21 ? VAR_11 :
        VAR_3, 0x3FFF);
 FUNC_2(VAR_19, VAR_21 ? VAR_15 :
        VAR_7, 0x7FF);
 FUNC_2(VAR_19, VAR_21 ? VAR_16 :
        VAR_8, 0x3FFF);


 FUNC_2(VAR_19, VAR_21 ? VAR_12 :
        VAR_4, 0x0);


 FUNC_2(VAR_19, VAR_21 ? VAR_13 :
        VAR_5, 0x3F);


 VAR_22[0] = 0;
 VAR_22[1] = 0;
 FUNC_3(VAR_19, VAR_17 + VAR_18, VAR_22, 2);


 VAR_20 = FUNC_4(VAR_19);
 if (VAR_20) {
  FUNC_0("Failed to reset PHC drift register\n");
  return -VAR_0;
 }


 FUNC_2(VAR_19, VAR_21 ? VAR_9 :
        VAR_1, 0x10000);
 FUNC_2(VAR_19, VAR_21 ? VAR_14 :
        VAR_6, 0x10000);

 return 0;
}
