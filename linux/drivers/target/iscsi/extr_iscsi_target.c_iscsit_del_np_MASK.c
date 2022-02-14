
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iscsi_np {int enabled; TYPE_1__* np_transport; int np_sockaddr; int np_list; int * np_thread; int np_thread_lock; int np_thread_state; scalar_t__ np_exports; } ;
struct TYPE_2__ {int name; int (* iscsit_free_np ) (struct iscsi_np*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct iscsi_np*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct iscsi_np*) ;

int FUNC_11(struct iscsi_np *VAR_3)
{
 FUNC_8(&VAR_3->np_thread_lock);
 VAR_3->np_exports--;
 if (VAR_3->np_exports) {
  VAR_3->enabled = 1;
  FUNC_9(&VAR_3->np_thread_lock);
  return 0;
 }
 VAR_3->np_thread_state = VAR_0;
 FUNC_9(&VAR_3->np_thread_lock);

 if (VAR_3->np_thread) {




  FUNC_7(VAR_1, VAR_3->np_thread, 1);
  FUNC_2(VAR_3->np_thread);
  VAR_3->np_thread = ((void*)0);
 }

 VAR_3->np_transport->iscsit_free_np(VAR_3);

 FUNC_4(&VAR_2);
 FUNC_3(&VAR_3->np_list);
 FUNC_5(&VAR_2);

 FUNC_6("CORE[0] - Removed Network Portal: %pISpc on %s\n",
  &VAR_3->np_sockaddr, VAR_3->np_transport->name);

 FUNC_0(VAR_3->np_transport);
 FUNC_1(VAR_3);
 return 0;
}
