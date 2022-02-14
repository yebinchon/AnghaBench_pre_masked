
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int flags; int value; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct TYPE_4__ {TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
typedef int __le16 ;
struct TYPE_3__ {scalar_t__ (* get_rid ) (struct net_device*,int ,int *,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,int ,int *,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*,int ,int *,int,int) ;
 scalar_t__ FUNC_4 (struct net_device*,int ,int *,int,int) ;
 scalar_t__ FUNC_5 (struct net_device*,int ,int *,int,int) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_11,
     struct iw_request_info *VAR_12,
     struct iw_param *VAR_13, char *VAR_14)
{



 struct hostap_interface *VAR_15;
 local_info_t *VAR_16;
 __le16 VAR_17, VAR_18;

 VAR_15 = FUNC_1(VAR_11);
 VAR_16 = VAR_15->local;

 if (VAR_16->func->get_rid(VAR_11, VAR_4, &VAR_17, 2, 1)
     < 0)
  return -VAR_0;

 if (!FUNC_0(VAR_17)) {
  VAR_13->disabled = 1;
  return 0;
 }

 VAR_13->disabled = 0;

 if ((VAR_13->flags & VAR_9) == VAR_8) {
  __le16 VAR_19;
  if (VAR_16->func->get_rid(VAR_11,
      VAR_5,
      &VAR_19, 2, 1) < 0)
   return -VAR_0;

  VAR_13->flags = VAR_8;
  VAR_13->value = FUNC_0(VAR_19) * 1024;
 } else {
  __le16 VAR_20;
  if (VAR_16->func->get_rid(VAR_11, VAR_2,
      &VAR_20, 2, 1) < 0)
   return -VAR_0;

  VAR_13->flags = VAR_7;
  VAR_13->value = FUNC_0(VAR_20) * 1024;
 }

 if (VAR_16->func->get_rid(VAR_11, VAR_3, &VAR_18,
     2, 1) < 0)
  return -VAR_0;

 if (FUNC_0(VAR_18))
  VAR_13->flags |= VAR_6;
 else
  VAR_13->flags |= VAR_10;

 return 0;

}
