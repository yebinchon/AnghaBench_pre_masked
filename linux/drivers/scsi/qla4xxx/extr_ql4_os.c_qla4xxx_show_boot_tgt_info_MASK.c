
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* target_chap_name_length; char* target_secret_length; char* intr_chap_name_length; char* intr_secret_length; int intr_secret; int intr_chap_name; int target_secret; int target_chap_name; } ;
struct TYPE_3__ {int ip_type; int ip_address; } ;
struct ql4_conn_info {int dest_port; TYPE_2__ chap; TYPE_1__ dest_ipaddr; } ;
struct ql4_boot_session_info {struct ql4_conn_info* conn_list; int target_name; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct ql4_boot_session_info *VAR_2, int VAR_3,
      char *VAR_4)
{
 struct ql4_conn_info *VAR_5 = &VAR_2->conn_list[0];
 char *VAR_6 = VAR_4;
 int VAR_7;

 switch (VAR_3) {
 case 132:
  VAR_7 = FUNC_0(VAR_4, "%s\n", (char *)&VAR_2->target_name);
  break;
 case 133:
  if (VAR_2->conn_list[0].dest_ipaddr.ip_type == 0x1)
   VAR_7 = FUNC_0(VAR_4, "%pI4\n",
         &VAR_5->dest_ipaddr.ip_address);
  else
   VAR_7 = FUNC_0(VAR_6, "%pI6\n",
         &VAR_5->dest_ipaddr.ip_address);
  break;
 case 130:
   VAR_7 = FUNC_0(VAR_6, "%d\n", VAR_5->dest_port);
  break;
 case 136:
  VAR_7 = FUNC_0(VAR_6, "%.*s\n",
        VAR_5->chap.target_chap_name_length,
        (char *)&VAR_5->chap.target_chap_name);
  break;
 case 135:
  VAR_7 = FUNC_0(VAR_6, "%.*s\n",
        VAR_5->chap.target_secret_length,
        (char *)&VAR_5->chap.target_secret);
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_6, "%.*s\n",
        VAR_5->chap.intr_chap_name_length,
        (char *)&VAR_5->chap.intr_chap_name);
  break;
 case 128:
  VAR_7 = FUNC_0(VAR_6, "%.*s\n",
        VAR_5->chap.intr_secret_length,
        (char *)&VAR_5->chap.intr_secret);
  break;
 case 134:
  VAR_7 = FUNC_0(VAR_6, "%d\n", VAR_1);
  break;
 case 131:
  VAR_7 = FUNC_0(VAR_6, "0\n");
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }
 return VAR_7;
}
