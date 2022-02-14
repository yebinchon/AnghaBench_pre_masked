
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct hwrm_fw_reset_input {int embedded_proc_type; void* selfrst_status; int member_0; } ;
struct bnxt {int dummy; } ;
typedef int req ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bnxt*,struct hwrm_fw_reset_input*,int ,int,int) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,struct hwrm_fw_reset_input*,int,int ) ;
 struct bnxt* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_12,
          u16 VAR_13)
{
 struct hwrm_fw_reset_input VAR_14 = {0};
 struct bnxt *VAR_15 = FUNC_3(VAR_12);
 int VAR_16;

 FUNC_0(VAR_15, &VAR_14, VAR_11, -1, -1);



 switch (VAR_13) {
 case 130:
 case 132:
 case 131:
  VAR_14.embedded_proc_type = VAR_3;

  VAR_14.selfrst_status = VAR_9;
  break;
 case 136:
 case 135:
  VAR_14.embedded_proc_type = VAR_5;

  VAR_14.selfrst_status = VAR_9;
  break;
 case 129:
 case 128:
  VAR_14.embedded_proc_type =
   VAR_6;
  break;
 case 134:
 case 133:
  VAR_14.embedded_proc_type = VAR_7;
  break;
 case 137:
  VAR_14.embedded_proc_type = VAR_4;
  VAR_14.selfrst_status = VAR_8;
  break;
 case 138:
  VAR_14.embedded_proc_type = VAR_2;
  break;
 default:
  return -VAR_1;
 }

 VAR_16 = FUNC_2(VAR_15, &VAR_14, sizeof(VAR_14), VAR_10);
 if (VAR_16 == -VAR_0)
  FUNC_1(VAR_15);
 return VAR_16;
}
