
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iscsi_node_attrib {int random_datain_seq_offsets; } ;
struct iscsi_node_acl {struct iscsi_node_attrib node_attrib; } ;


 int VAR_0 ;
 int FUNC_0 (struct iscsi_node_acl*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int) ;

int FUNC_3(
 struct iscsi_node_acl *VAR_1,
 u32 VAR_2)
{
 struct iscsi_node_attrib *VAR_3 = &VAR_1->node_attrib;

 if (VAR_2 != 0 && VAR_2 != 1) {
  FUNC_2("Requested Random DataIN Sequence Offsets: %u"
   " not 0 or 1\n", VAR_2);
  return -VAR_0;
 }

 VAR_3->random_datain_seq_offsets = VAR_2;
 FUNC_1("Set Random DataIN Sequence Offsets to %u for"
  " Initiator Node %s\n", VAR_3->random_datain_seq_offsets,
  FUNC_0(VAR_1));

 return 0;
}
