
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wwpn_str ;
typedef int wwnn_str ;
typedef size_t uint ;
typedef scalar_t__ u64 ;
struct fc_vport_identifiers {int disable; void* port_name; void* node_name; int symbolic_name; int vport_type; int roles; } ;
struct fc_lport {scalar_t__ wwnn; int host; } ;
struct cnic_fc_npiv_tbl {scalar_t__ count; int * wwpn; int * wwnn; } ;


 int FUNC_0 (struct fc_lport*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,struct fc_vport_identifiers*) ;
 int FUNC_2 (void*,char*,int) ;
 int FUNC_3 (int ,int,char*,size_t,void*,void*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static uint FUNC_5(struct fc_lport *VAR_3,
          struct cnic_fc_npiv_tbl *VAR_4)
{
 struct fc_vport_identifiers VAR_5;
 uint VAR_6, VAR_7 = 0;
 u64 VAR_8 = 0;
 char VAR_9[32];
 char VAR_10[32];

 if (VAR_4->count > VAR_2) {
  FUNC_0(VAR_3, "Exceeded count max of npiv table\n");
  goto done;
 }


 if (FUNC_4(VAR_4->wwnn[0]) == 0 &&
     FUNC_4(VAR_4->wwpn[0]) == 0) {
  FUNC_0(VAR_3, "First NPIV table entries invalid.\n");
  goto done;
 }

 VAR_5.roles = VAR_1;
 VAR_5.vport_type = VAR_0;
 VAR_5.disable = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->count; VAR_6++) {
  VAR_8 = FUNC_4(VAR_4->wwnn[VAR_6]);
  if (VAR_8 == 0) {




   VAR_8 = VAR_3->wwnn;
  }
  VAR_5.node_name = VAR_8;
  VAR_5.port_name = FUNC_4(VAR_4->wwpn[VAR_6]);
  FUNC_3(VAR_5.symbolic_name, sizeof(VAR_5.symbolic_name),
      "NPIV[%u]:%016llx-%016llx",
      VAR_7, VAR_5.port_name, VAR_5.node_name);
  FUNC_2(VAR_5.node_name, VAR_10, sizeof(VAR_10));
  FUNC_2(VAR_5.port_name, VAR_9, sizeof(VAR_9));
  FUNC_0(VAR_3, "Creating vport %s:%s.\n", VAR_10,
      VAR_9);
  if (FUNC_1(VAR_3->host, 0, &VAR_5))
   VAR_7++;
  else
   FUNC_0(VAR_3, "Failed to create vport\n");
 }
done:
 return VAR_7;
}
