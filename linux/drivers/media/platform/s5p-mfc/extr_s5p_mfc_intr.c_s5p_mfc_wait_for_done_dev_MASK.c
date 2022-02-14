
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int int_type; scalar_t__ int_cond; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;

int FUNC_4(struct s5p_mfc_dev *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_3->queue,
  (VAR_3->int_cond && (VAR_3->int_type == VAR_4
  || VAR_3->int_type == VAR_2)),
  FUNC_2(VAR_1));
 if (VAR_5 == 0) {
  FUNC_1("Interrupt (dev->int_type:%d, command:%d) timed out\n",
       VAR_3->int_type, VAR_4);
  return 1;
 } else if (VAR_5 == -VAR_0) {
  FUNC_1("Interrupted by a signal\n");
  return 1;
 }
 FUNC_0(1, "Finished waiting (dev->int_type:%d, command: %d)\n",
       VAR_3->int_type, VAR_4);
 if (VAR_3->int_type == VAR_2)
  return 1;
 return 0;
}
