
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iscsi_node_attrib {scalar_t__ dataout_timeout_retries; } ;
struct iscsi_node_acl {struct iscsi_node_attrib node_attrib; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct iscsi_node_acl*) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__) ;

int FUNC_3(
 struct iscsi_node_acl *VAR_3,
 u32 VAR_4)
{
 struct iscsi_node_attrib *VAR_5 = &VAR_3->node_attrib;

 if (VAR_4 > VAR_1) {
  FUNC_2("Requested DataOut Timeout Retries %u larger"
   " than maximum %u", VAR_4,
    VAR_1);
  return -VAR_0;
 } else if (VAR_4 < VAR_2) {
  FUNC_2("Requested DataOut Timeout Retries %u smaller"
   " than minimum %u", VAR_4,
    VAR_2);
  return -VAR_0;
 }

 VAR_5->dataout_timeout_retries = VAR_4;
 FUNC_1("Set DataOut Timeout Retries to %u for"
  " Initiator Node %s\n", VAR_5->dataout_timeout_retries,
  FUNC_0(VAR_3));

 return 0;
}
