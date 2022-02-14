
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_7__ {int ch_id; } ;
struct TYPE_6__ {int ch_id; } ;
struct net_dev_context {TYPE_2__ tx; TYPE_3__* iface; TYPE_1__ rx; } ;
struct TYPE_8__ {int (* request_netinfo ) (TYPE_3__*,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (TYPE_3__*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct net_dev_context* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_4)
{
 struct net_dev_context *VAR_5 = FUNC_6(VAR_4);
 int VAR_6 = 0;

 FUNC_3(&VAR_3);

 if (FUNC_1(VAR_5->iface, VAR_5->rx.ch_id, &VAR_1)) {
  FUNC_5(VAR_4, "most_start_channel() failed\n");
  VAR_6 = -VAR_0;
  goto unlock;
 }

 if (FUNC_1(VAR_5->iface, VAR_5->tx.ch_id, &VAR_1)) {
  FUNC_5(VAR_4, "most_start_channel() failed\n");
  FUNC_2(VAR_5->iface, VAR_5->rx.ch_id, &VAR_1);
  VAR_6 = -VAR_0;
  goto unlock;
 }

 FUNC_7(VAR_4);
 if (FUNC_0(VAR_4->dev_addr))
  FUNC_8(VAR_4);
 else
  FUNC_9(VAR_4);
 FUNC_10(VAR_4);
 if (VAR_5->iface->request_netinfo)
  VAR_5->iface->request_netinfo(VAR_5->iface, VAR_5->tx.ch_id, VAR_2);

unlock:
 FUNC_4(&VAR_3);
 return VAR_6;
}
