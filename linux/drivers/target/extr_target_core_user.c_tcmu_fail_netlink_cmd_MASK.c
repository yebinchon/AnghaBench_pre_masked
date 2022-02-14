
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_nl_cmd {scalar_t__ cmd; int complete; int nl_list; int status; struct tcmu_dev* udev; } ;
struct tcmu_dev {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,int ) ;
 int FUNC_3 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct tcmu_nl_cmd *VAR_4)
{
 struct tcmu_dev *VAR_5 = VAR_4->udev;

 if (!VAR_3) {
  FUNC_3("Could not reset device's netlink interface. Netlink is not blocked.\n");
  return -VAR_0;
 }

 if (VAR_4->cmd != VAR_2) {
  FUNC_2("Aborting nl cmd %d on %s\n", VAR_4->cmd, VAR_5->name);
  VAR_4->status = -VAR_1;
  FUNC_1(&VAR_4->nl_list);
  FUNC_0(&VAR_4->complete);
 }
 return 0;
}
