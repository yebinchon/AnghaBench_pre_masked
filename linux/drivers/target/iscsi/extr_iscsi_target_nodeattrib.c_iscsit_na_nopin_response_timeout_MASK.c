
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_node_attrib {int nopin_timeout; scalar_t__ nopin_response_timeout; } ;
struct iscsi_node_acl {struct iscsi_node_attrib node_attrib; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iscsi_node_acl*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

int FUNC_3(
 struct iscsi_node_acl *VAR_3,
 u32 VAR_4)
{
 struct iscsi_node_attrib *VAR_5 = &VAR_3->node_attrib;

 if (VAR_4 > VAR_1) {
  FUNC_2("Requested NopIn Response Timeout %u larger"
   " than maximum %u\n", VAR_4,
    VAR_1);
  return -VAR_0;
 } else if (VAR_4 < VAR_2) {
  FUNC_2("Requested NopIn Response Timeout %u smaller"
   " than minimum %u\n", VAR_4,
    VAR_2);
  return -VAR_0;
 }

 VAR_5->nopin_response_timeout = VAR_4;
 FUNC_1("Set NopIn Response Timeout to %u for"
  " Initiator Node %s\n", VAR_5->nopin_timeout,
  FUNC_0(VAR_3));

 return 0;
}
