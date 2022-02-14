
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct pqi_ctrl_info*) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 int FUNC_2 (struct pqi_ctrl_info*,scalar_t__) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 scalar_t__ FUNC_4 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_2)
{
 if (!FUNC_3(VAR_2))
  return -VAR_0;

 if (FUNC_0(VAR_2) == VAR_1)
  return 0;

 if (FUNC_4(VAR_2)) {
  FUNC_2(VAR_2, VAR_1);
  return 0;
 }

 return FUNC_1(VAR_2);
}
