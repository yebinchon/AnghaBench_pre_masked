
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dcb_ops; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
struct TYPE_3__ {int (* getdcbx ) (struct hnae3_handle*) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static u8 FUNC_2(struct net_device *VAR_0)
{
 struct hnae3_handle *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->kinfo.dcb_ops->getdcbx)
  return VAR_1->kinfo.dcb_ops->getdcbx(VAR_1);

 return 0;
}
