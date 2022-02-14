
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


union oid_res_t {int u; } ;
struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_6__ {int wpa; int mib_sem; } ;
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

 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;





 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *,union oid_res_t*) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int*) ;
 TYPE_1__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_18,
          struct iw_request_info *VAR_19,
          union iwreq_data *VAR_20, char *VAR_21)
{
 islpci_private *VAR_22 = FUNC_4(VAR_18);
 struct iw_param *VAR_23 = &VAR_20->param;
 u32 VAR_24 = 0, VAR_25 = 0, VAR_26 = 0;
 u32 VAR_27 = 0, VAR_28 = 0, VAR_29 = 0;
 u32 VAR_30;
 int VAR_31 = 0;
 union oid_res_t VAR_32;

 if (FUNC_1(VAR_22) < VAR_17)
  return 0;


 FUNC_0(&VAR_22->mib_sem);
 VAR_29 = VAR_30 = VAR_22->wpa;
 FUNC_5(&VAR_22->mib_sem);
 VAR_31 = FUNC_2(VAR_22, VAR_4, 0, ((void*)0), &VAR_32);
 VAR_25 = VAR_32.u;
 VAR_31 = FUNC_2(VAR_22, VAR_8, 0, ((void*)0), &VAR_32);
 VAR_28 = VAR_32.u;
 VAR_31 = FUNC_2(VAR_22, VAR_6, 0, ((void*)0), &VAR_32);
 VAR_27 = VAR_32.u;
 VAR_31 = FUNC_2(VAR_22, VAR_5, 0, ((void*)0), &VAR_32);
 VAR_26 = VAR_32.u;
 VAR_31 = FUNC_2(VAR_22, VAR_7, 0, ((void*)0), &VAR_32);
 VAR_24 = VAR_32.u;

 if (VAR_31 < 0)
  goto out;

 switch (VAR_23->flags & VAR_13) {
 case 134:
 case 135:
 case 132:
  break;

 case 129:

  if (VAR_23->value) {
   VAR_29 = 1;
   VAR_28 = 1;
   VAR_27 = 1;
   VAR_26 = 0x01;
   VAR_24 = VAR_3;
   VAR_25 = VAR_0;
  } else {
   VAR_29 = 0;
   VAR_28 = 0;
   VAR_27 = 0;
   VAR_26 = 0;
   VAR_24 = VAR_2;
  }
  break;

 case 128:
  if (VAR_23->value & VAR_14) {
   VAR_29 = 0;
   VAR_28 = 0;
   VAR_27 = 0;
   VAR_26 = 0;
   VAR_24 = VAR_2;
  } else {
   if (VAR_23->value & VAR_15)
    VAR_29 = 1;
   else if (VAR_23->value & VAR_16)
    VAR_29 = 2;
   VAR_28 = 1;
   VAR_27 = 1;
   VAR_26 = 0x01;
   VAR_24 = VAR_3;
   VAR_25 = VAR_0;
  }
  break;

 case 130:




  VAR_26 = VAR_23->value ? 0 : 0x01;
  break;

 case 131:
  VAR_28 = VAR_23->value ? 1 : 0;
  break;

 case 133:
  VAR_27 = VAR_23->value ? 1 : 0;
  break;

 case 136:
  if (VAR_23->value & VAR_12) {

   if (VAR_29 > 0) {
    VAR_31 = -VAR_9;
    goto out;
   }
   VAR_25 = VAR_1;
  } else if (VAR_23->value & VAR_11) {
   VAR_25 = VAR_0;
  } else {
   VAR_31 = -VAR_9;
   goto out;
  }
  break;

 default:
  return -VAR_10;
 }


 FUNC_0(&VAR_22->mib_sem);
 VAR_22->wpa = VAR_29;
 FUNC_5(&VAR_22->mib_sem);
 FUNC_3(VAR_22, VAR_4, 0, &VAR_25);
 FUNC_3(VAR_22, VAR_8, 0, &VAR_28);
 FUNC_3(VAR_22, VAR_6, 0, &VAR_27);
 FUNC_3(VAR_22, VAR_5, 0, &VAR_26);
 FUNC_3(VAR_22, VAR_7, 0, &VAR_24);

out:
 return VAR_31;
}
