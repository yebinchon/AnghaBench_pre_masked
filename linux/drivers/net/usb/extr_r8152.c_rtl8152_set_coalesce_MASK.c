
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* enable ) (struct r8152*) ;int (* disable ) (struct r8152*) ;} ;
struct r8152 {int version; scalar_t__ coalesce; int intf; int control; int napi; int flags; TYPE_1__ rtl_ops; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct r8152* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct r8152*) ;
 int FUNC_12 (struct r8152*) ;
 int FUNC_13 (struct r8152*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_4,
    struct ethtool_coalesce *VAR_5)
{
 struct r8152 *VAR_6 = FUNC_6(VAR_4);
 int VAR_7;

 switch (VAR_6->version) {
 case 130:
 case 129:
 case 128:
  return -VAR_2;
 default:
  break;
 }

 if (VAR_5->rx_coalesce_usecs > VAR_0)
  return -VAR_1;

 VAR_7 = FUNC_14(VAR_6->intf);
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_2(&VAR_6->control);

 if (VAR_6->coalesce != VAR_5->rx_coalesce_usecs) {
  VAR_6->coalesce = VAR_5->rx_coalesce_usecs;

  if (FUNC_8(VAR_4) && FUNC_7(VAR_4)) {
   FUNC_9(VAR_4);
   FUNC_4(&VAR_6->napi);
   VAR_6->rtl_ops.disable(VAR_6);
   VAR_6->rtl_ops.enable(VAR_6);
   FUNC_11(VAR_6);
   FUNC_1(VAR_3, &VAR_6->flags);
   FUNC_0(VAR_4);
   FUNC_5(&VAR_6->napi);
   FUNC_10(VAR_4);
  }
 }

 FUNC_3(&VAR_6->control);

 FUNC_15(VAR_6->intf);

 return VAR_7;
}
