
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct iscsit_transport {int (* iscsit_setup_np ) (struct iscsi_np*,struct sockaddr_storage*) ;} ;
struct iscsi_np {int enabled; struct iscsit_transport* np_transport; int np_network_transport; } ;


 int VAR_0 ;
 struct iscsit_transport* FUNC_0 (int ) ;
 int FUNC_1 (struct iscsit_transport*) ;
 int FUNC_2 (struct iscsi_np*,struct sockaddr_storage*) ;

int FUNC_3(
 struct iscsi_np *VAR_1,
 struct sockaddr_storage *VAR_2)
{
 struct iscsit_transport *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1->np_network_transport);
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = VAR_3->iscsit_setup_np(VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_1(VAR_3);
  return VAR_4;
 }

 VAR_1->np_transport = VAR_3;
 VAR_1->enabled = 1;
 return 0;
}
