
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int scan_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct pqi_ctrl_info*) ;
 int FUNC_3 (struct pqi_ctrl_info*) ;
 int FUNC_4 (struct pqi_ctrl_info*) ;

__attribute__((used)) static int FUNC_5(struct pqi_ctrl_info *VAR_2)
{
 int VAR_3 = 0;

 if (FUNC_2(VAR_2))
  return -VAR_1;

 if (!FUNC_0(&VAR_2->scan_mutex)) {
  FUNC_3(VAR_2);
  VAR_3 = -VAR_0;
 } else {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3)
   FUNC_3(VAR_2);
  FUNC_1(&VAR_2->scan_mutex);
 }

 return VAR_3;
}
