
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ieee_pfc {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dcb_ops; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
struct TYPE_3__ {int (* ieee_getpfc ) (struct hnae3_handle*,struct ieee_pfc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct hnae3_handle*,struct ieee_pfc*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ieee_pfc *VAR_3)
{
 struct hnae3_handle *VAR_4 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_2))
  return -VAR_0;

 if (VAR_4->kinfo.dcb_ops->ieee_getpfc)
  return VAR_4->kinfo.dcb_ops->ieee_getpfc(VAR_4, VAR_3);

 return -VAR_1;
}
