
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct iscsi_np {int np_network_transport; int np_exports; TYPE_1__* np_transport; int np_sockaddr; int np_list; int np_thread_state; int np_thread; int np_login_timer; int np_restart_comp; int np_thread_lock; int np_flags; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct iscsi_np* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct iscsi_np*,struct sockaddr_storage*) ;
 struct iscsi_np* FUNC_6 (struct sockaddr_storage*,int) ;
 int FUNC_7 (struct iscsi_np*) ;
 int FUNC_8 (int ,struct iscsi_np*,char*) ;
 struct iscsi_np* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 int FUNC_13 (char*,int *,int ) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ) ;

struct iscsi_np *FUNC_17(
 struct sockaddr_storage *VAR_8,
 int VAR_9)
{
 struct iscsi_np *VAR_10;
 int VAR_11;

 FUNC_11(&VAR_7);




 VAR_10 = FUNC_6(VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_12(&VAR_7);
  return VAR_10;
 }

 VAR_10 = FUNC_9(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  FUNC_12(&VAR_7);
  return FUNC_0(-VAR_0);
 }

 VAR_10->np_flags |= VAR_3;
 VAR_10->np_network_transport = VAR_9;
 FUNC_15(&VAR_10->np_thread_lock);
 FUNC_4(&VAR_10->np_restart_comp);
 FUNC_1(&VAR_10->np_list);

 FUNC_16(&VAR_10->np_login_timer, VAR_5, 0);

 VAR_11 = FUNC_5(VAR_10, VAR_8);
 if (VAR_11 != 0) {
  FUNC_7(VAR_10);
  FUNC_12(&VAR_7);
  return FUNC_0(VAR_11);
 }

 VAR_10->np_thread = FUNC_8(VAR_6, VAR_10, "iscsi_np");
 if (FUNC_2(VAR_10->np_thread)) {
  FUNC_14("Unable to create kthread: iscsi_np\n");
  VAR_11 = FUNC_3(VAR_10->np_thread);
  FUNC_7(VAR_10);
  FUNC_12(&VAR_7);
  return FUNC_0(VAR_11);
 }







 VAR_10->np_exports = 1;
 VAR_10->np_thread_state = VAR_2;

 FUNC_10(&VAR_10->np_list, &VAR_4);
 FUNC_12(&VAR_7);

 FUNC_13("CORE[0] - Added Network Portal: %pISpc on %s\n",
  &VAR_10->np_sockaddr, VAR_10->np_transport->name);

 return VAR_10;
}
