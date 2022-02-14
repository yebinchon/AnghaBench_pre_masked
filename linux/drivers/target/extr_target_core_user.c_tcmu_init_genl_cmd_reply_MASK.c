
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_nl_cmd {int cmd; int nl_list; int complete; struct tcmu_dev* udev; } ;
struct tcmu_dev {scalar_t__ nl_reply_supported; int name; struct tcmu_nl_cmd curr_nl_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct tcmu_nl_cmd*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(struct tcmu_dev *VAR_7, int VAR_8)
{
 struct tcmu_nl_cmd *VAR_9 = &VAR_7->curr_nl_cmd;

 if (!VAR_3)
  return 0;

 if (VAR_7->nl_reply_supported <= 0)
  return 0;

 FUNC_4(&VAR_6);

 if (VAR_4) {
  FUNC_5(&VAR_6);
  FUNC_6("Failing nl cmd %d on %s. Interface is blocked.\n", VAR_8,
   VAR_7->name);
  return -VAR_0;
 }

 if (VAR_9->cmd != VAR_2) {
  FUNC_5(&VAR_6);
  FUNC_6("netlink cmd %d already executing on %s\n",
    VAR_9->cmd, VAR_7->name);
  return -VAR_1;
 }

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->cmd = VAR_8;
 VAR_9->udev = VAR_7;
 FUNC_1(&VAR_9->complete);
 FUNC_0(&VAR_9->nl_list);

 FUNC_2(&VAR_9->nl_list, &VAR_5);

 FUNC_5(&VAR_6);
 return 0;
}
