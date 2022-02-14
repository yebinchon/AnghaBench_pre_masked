
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


union oid_res_t {int u; } ;
struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {int mib_sem; int wpa; } ;
typedef TYPE_1__ islpci_private ;






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
 scalar_t__ VAR_11 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,union oid_res_t*) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_12,
       struct iw_request_info *VAR_13,
       union iwreq_data *VAR_14, char *VAR_15)
{
 islpci_private *VAR_16 = FUNC_3(VAR_12);
 struct iw_param *VAR_17 = &VAR_14->param;
 u32 VAR_18 = 0;
 int VAR_19 = 0;
 union oid_res_t VAR_20;

 if (FUNC_1(VAR_16) < VAR_11)
  return 0;


 FUNC_0(&VAR_16->mib_sem);
 VAR_18 = VAR_16->wpa;
 FUNC_4(&VAR_16->mib_sem);

 switch (VAR_17->flags & VAR_7) {
 case 134:
 case 135:
 case 132:



  VAR_19 = -VAR_4;
  break;

 case 128:
  switch (VAR_18) {
  case 1:
   VAR_17->value = VAR_9;
   break;
  case 2:
   VAR_17->value = VAR_10;
   break;
  case 0:
  default:
   VAR_17->value = VAR_8;
   break;
  }
  break;

 case 133:
  VAR_19 = FUNC_2(VAR_16, VAR_2, 0, ((void*)0), &VAR_20);
  if (VAR_19 >= 0)
   VAR_17->value = VAR_20.u > 0 ? 1 : 0;
  break;

 case 136:
  VAR_19 = FUNC_2(VAR_16, VAR_0, 0, ((void*)0), &VAR_20);
  if (VAR_19 >= 0) {
   switch (VAR_20.u) {
   case 138:
    VAR_17->value = VAR_5;
    break;
   case 140:
   case 137:
    VAR_17->value = VAR_6;
    break;
   case 139:
   default:
    VAR_17->value = 0;
    break;
   }
  }
  break;

 case 129:
  VAR_17->value = VAR_18 > 0 ? 1 : 0;
  break;

 case 130:
  VAR_19 = FUNC_2(VAR_16, VAR_1, 0, ((void*)0), &VAR_20);
  if (VAR_19 >= 0)
   VAR_17->value = VAR_20.u > 0 ? 1 : 0;
  break;

 case 131:
  VAR_19 = FUNC_2(VAR_16, VAR_3, 0, ((void*)0), &VAR_20);
  if (VAR_19 >= 0)
   VAR_17->value = VAR_20.u > 0 ? 1 : 0;
  break;

 default:
  return -VAR_4;
 }
 return VAR_19;
}
