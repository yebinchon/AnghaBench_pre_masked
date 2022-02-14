
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iscsi_iface_param_info {int param; int * value; } ;
struct beiscsi_hba {int dummy; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct beiscsi_hba*,int ) ;
 struct beiscsi_hba* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_2(struct Scsi_Host *VAR_3,
     struct iscsi_iface_param_info *VAR_4)
{
 struct beiscsi_hba *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = -VAR_1;

 switch (VAR_4->param) {
 case 129:
  VAR_6 = 0;
  if (VAR_4->value[0] != VAR_2)
   VAR_6 = FUNC_0(VAR_5, VAR_0);
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_5,
       *((uint16_t *)VAR_4->value));
  break;
 }
 return VAR_6;
}
