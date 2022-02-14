
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iscsi_iface_param_info {int param; int * value; } ;
struct beiscsi_hba {int * ipv6_iface; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct beiscsi_hba*,int ,int *,int *) ;
 int FUNC_1 (struct beiscsi_hba*) ;
 int FUNC_2 (int *) ;
 struct beiscsi_hba* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_4(struct Scsi_Host *VAR_3,
     struct iscsi_iface_param_info *VAR_4,
     void *VAR_5, uint32_t VAR_6)
{
 struct beiscsi_hba *VAR_7 = FUNC_3(VAR_3);
 int VAR_8 = -VAR_1;

 switch (VAR_4->param) {
 case 129:
  if (VAR_4->value[0] == VAR_2)
   VAR_8 = FUNC_1(VAR_7);
  else {
   FUNC_2(VAR_7->ipv6_iface);
   VAR_7->ipv6_iface = ((void*)0);
  }
  break;
 case 128:
  VAR_8 = FUNC_0(VAR_7, VAR_0,
        VAR_4->value, ((void*)0));
  break;
 }

 return VAR_8;
}
