
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max2175 {int dummy; } ;
typedef enum max2175_csm_mode { ____Placeholder_max2175_csm_mode } max2175_csm_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max2175*,int ) ;
 int FUNC_1 (struct max2175*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct max2175 *VAR_2,
         enum max2175_csm_mode VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2, "csm_action: %d\n", VAR_3);


 VAR_4 = FUNC_0(VAR_2, VAR_0);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_1);
}
