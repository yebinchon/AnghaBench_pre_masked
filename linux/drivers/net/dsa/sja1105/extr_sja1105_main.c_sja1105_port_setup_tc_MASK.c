
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsa_switch {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;

 int FUNC_0 (struct dsa_switch*,int,void*) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_1, int VAR_2,
     enum tc_setup_type VAR_3,
     void *VAR_4)
{
 switch (VAR_3) {
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_4);
 default:
  return -VAR_0;
 }
}
