
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct devlink_port {int dummy; } ;
struct nsim_dev_port {unsigned int port_index; int list; TYPE_2__* ns; struct devlink_port devlink_port; } ;
struct TYPE_5__ {int id_len; int id; } ;
struct nsim_dev {int port_list; TYPE_1__ switch_id; } ;
struct TYPE_6__ {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct devlink_port*,int ,unsigned int,int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct devlink_port*,unsigned int) ;
 int FUNC_4 (struct devlink_port*,int ) ;
 int FUNC_5 (struct devlink_port*) ;
 int FUNC_6 (struct nsim_dev_port*) ;
 struct nsim_dev_port* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 TYPE_2__* FUNC_9 (struct nsim_dev*,struct nsim_dev_port*) ;
 int FUNC_10 (struct nsim_dev_port*) ;
 int FUNC_11 (struct nsim_dev*,struct nsim_dev_port*) ;
 int FUNC_12 (struct nsim_dev*) ;

__attribute__((used)) static int FUNC_13(struct nsim_dev *VAR_3,
          unsigned int VAR_4)
{
 struct nsim_dev_port *VAR_5;
 struct devlink_port *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;
 VAR_5->port_index = VAR_4;

 VAR_6 = &VAR_5->devlink_port;
 FUNC_2(VAR_6, VAR_0,
          VAR_4 + 1, 0, 0,
          VAR_3->switch_id.id,
          VAR_3->switch_id.id_len);
 VAR_7 = FUNC_3(FUNC_12(VAR_3), VAR_6,
        VAR_4);
 if (VAR_7)
  goto err_port_free;

 VAR_7 = FUNC_11(VAR_3, VAR_5);
 if (VAR_7)
  goto err_dl_port_unregister;

 VAR_5->ns = FUNC_9(VAR_3, VAR_5);
 if (FUNC_0(VAR_5->ns)) {
  VAR_7 = FUNC_1(VAR_5->ns);
  goto err_port_debugfs_exit;
 }

 FUNC_4(VAR_6, VAR_5->ns->netdev);
 FUNC_8(&VAR_5->list, &VAR_3->port_list);

 return 0;

err_port_debugfs_exit:
 FUNC_10(VAR_5);
err_dl_port_unregister:
 FUNC_5(VAR_6);
err_port_free:
 FUNC_6(VAR_5);
 return VAR_7;
}
