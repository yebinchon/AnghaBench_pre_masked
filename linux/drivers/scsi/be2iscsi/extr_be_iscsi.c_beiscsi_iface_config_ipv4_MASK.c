
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u8 ;
struct nlattr {int dummy; } ;
struct iscsi_iface_param_info {int param; int * value; } ;
struct beiscsi_hba {int * ipv4_iface; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int FUNC_0 (struct beiscsi_hba*,int ) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int *,int *) ;
 int FUNC_2 (struct beiscsi_hba*,int ,int *) ;
 int FUNC_3 (struct beiscsi_hba*) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*,int ) ;
 int FUNC_5 (int *) ;
 struct beiscsi_hba* FUNC_6 (struct Scsi_Host*) ;
 struct iscsi_iface_param_info* FUNC_7 (struct nlattr*) ;
 struct nlattr* FUNC_8 (void*,int ,int const) ;

__attribute__((used)) static int
FUNC_9(struct Scsi_Host *VAR_7,
     struct iscsi_iface_param_info *VAR_8,
     void *VAR_9, uint32_t VAR_10)
{
 struct beiscsi_hba *VAR_11 = FUNC_6(VAR_7);
 u8 *VAR_12 = ((void*)0), *VAR_13 = ((void*)0), *VAR_14;
 struct nlattr *VAR_15;
 int VAR_16 = -VAR_2;


 switch (VAR_8->param) {
 case 132:
  if (VAR_8->value[0] == VAR_5)
   VAR_16 = FUNC_3(VAR_11);
  else {
   FUNC_5(VAR_11->ipv4_iface);
   VAR_11->ipv4_iface = ((void*)0);
  }
  break;
 case 129:
  VAR_14 = VAR_8->value;
  VAR_16 = FUNC_2(VAR_11, VAR_0, VAR_14);
  break;
 case 130:
  if (VAR_8->value[0] == VAR_3)
   VAR_16 = FUNC_0(VAR_11, VAR_0);
  else if (VAR_8->value[0] == VAR_4)

   VAR_16 = FUNC_1(VAR_11, VAR_0,
         ((void*)0), ((void*)0));
  else
   FUNC_4(VAR_11, VAR_6, VAR_1,
        "BS_%d : Invalid BOOTPROTO: %d\n",
        VAR_8->value[0]);
  break;
 case 131:
  VAR_12 = VAR_8->value;
  VAR_15 = FUNC_8(VAR_9, VAR_10, 128);
  if (VAR_15) {
   VAR_8 = FUNC_7(VAR_15);
   VAR_13 = VAR_8->value;
  }
  VAR_16 = FUNC_1(VAR_11, VAR_0,
        VAR_12, VAR_13);
  break;
 case 128:




  VAR_13 = VAR_8->value;
  VAR_15 = FUNC_8(VAR_9, VAR_10, 131);
  if (VAR_15) {
   VAR_8 = FUNC_7(VAR_15);
   VAR_12 = VAR_8->value;
  }
  VAR_16 = FUNC_1(VAR_11, VAR_0,
        VAR_12, VAR_13);
  break;
 }

 return VAR_16;
}
