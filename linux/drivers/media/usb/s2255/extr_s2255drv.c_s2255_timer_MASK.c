
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct s2255_fw {int wait_fw; int fw_state; int fw_urb; } ;
struct s2255_dev {struct s2255_fw* fw_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct s2255_dev* VAR_2 ;
 struct s2255_dev* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct s2255_dev *VAR_5 = FUNC_1(VAR_5, VAR_4, VAR_3);
 struct s2255_fw *VAR_6 = VAR_5->fw_data;
 if (FUNC_3(VAR_6->fw_urb, VAR_0) < 0) {
  FUNC_2("s2255: can't submit urb\n");
  FUNC_0(&VAR_6->fw_state, VAR_1);

  FUNC_4(&VAR_6->wait_fw);
  return;
 }
}
