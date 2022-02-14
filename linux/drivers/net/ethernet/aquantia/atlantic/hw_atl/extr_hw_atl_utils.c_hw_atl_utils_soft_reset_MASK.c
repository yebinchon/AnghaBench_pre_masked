
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aq_hw_s {int rbl_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aq_hw_s*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (struct aq_hw_s*,int) ;
 int FUNC_3 (struct aq_hw_s*) ;
 int FUNC_4 (struct aq_hw_s*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,struct aq_hw_s*,int,int,int,unsigned int) ;

int FUNC_7(struct aq_hw_s *VAR_8)
{
 int VAR_9;
 u32 VAR_10 = 0;
 u32 VAR_11;

 for (VAR_9 = 0; VAR_9 < 1000; ++VAR_9) {
  u32 VAR_12 = FUNC_0(VAR_8,
      VAR_3);
  VAR_10 = FUNC_0(VAR_8,
      VAR_2);
  if (VAR_12 != 0x06000000 || VAR_10 != 0)
   break;
 }

 if (VAR_9 == 1000) {
  FUNC_1("Neither RBL nor FLB firmware started\n");
  return -VAR_0;
 }

 VAR_8->rbl_enabled = (VAR_10 != 0);




 if (!FUNC_5(VAR_1,
        FUNC_0(VAR_8,
         VAR_4))) {
  int VAR_13 = 0;

  FUNC_2(VAR_8, VAR_6);
  VAR_13 = FUNC_6(VAR_7,
      VAR_8, VAR_11,
      (VAR_11 & VAR_5) ==
       VAR_6,
      10, 10000U);
  if (VAR_13)
   return VAR_13;
 }

 if (VAR_8->rbl_enabled)
  return FUNC_4(VAR_8);
 else
  return FUNC_3(VAR_8);
}
