
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cw1200_common {int hw_refclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cw1200_common*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cw1200_common*,int ,int ) ;
 int FUNC_4 (struct cw1200_common*,int ,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct cw1200_common *VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 FUNC_5("[BH] Device wakeup.\n");


 VAR_6 = FUNC_4(VAR_4, VAR_3,
      FUNC_2(VAR_4->hw_refclk));
 if (FUNC_0(VAR_6))
  return VAR_6;


 VAR_6 = FUNC_3(VAR_4, VAR_0,
   VAR_2);
 if (FUNC_0(VAR_6))
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (FUNC_0(VAR_6))
  return VAR_6;




 if (VAR_5 & VAR_1) {
  FUNC_5("[BH] Device awake.\n");
  return 1;
 }

 return 0;
}
