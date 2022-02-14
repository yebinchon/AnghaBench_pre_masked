
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct o2net_node {int nn_status_list; int nn_status_idr; int nn_sc_wq; int nn_persistent_error; int nn_still_up; int nn_connect_expired; int nn_connect_work; int nn_lock; int nn_timeout; } ;
struct o2net_msg {int dummy; } ;
struct o2net_handshake {int dummy; } ;
struct TYPE_6__ {void* magic; void* connector_id; void* protocol_version; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int,int ) ;
 int VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 struct o2net_node* FUNC_12 (unsigned long) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;

int FUNC_16(void)
{
 unsigned long VAR_13;

 FUNC_14();

 FUNC_11();

 VAR_7 = FUNC_9(sizeof(struct o2net_handshake), VAR_2);
 VAR_8 = FUNC_9(sizeof(struct o2net_msg), VAR_2);
 VAR_9 = FUNC_9(sizeof(struct o2net_msg), VAR_2);
 if (!VAR_7 || !VAR_8 || !VAR_9)
  goto out;

 VAR_7->protocol_version = FUNC_5(VAR_5);
 VAR_7->connector_id = FUNC_5(1);

 VAR_8->magic = FUNC_4(VAR_3);
 VAR_9->magic = FUNC_4(VAR_4);

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_10); VAR_13++) {
  struct o2net_node *VAR_14 = FUNC_12(VAR_13);

  FUNC_3(&VAR_14->nn_timeout, 0);
  FUNC_15(&VAR_14->nn_lock);
  FUNC_1(&VAR_14->nn_connect_work, VAR_11);
  FUNC_1(&VAR_14->nn_connect_expired,
      VAR_6);
  FUNC_1(&VAR_14->nn_still_up, VAR_12);

  VAR_14->nn_persistent_error = -VAR_1;
  FUNC_7(&VAR_14->nn_sc_wq);
  FUNC_6(&VAR_14->nn_status_idr);
  FUNC_2(&VAR_14->nn_status_list);
 }

 return 0;

out:
 FUNC_8(VAR_7);
 FUNC_8(VAR_8);
 FUNC_8(VAR_9);
 FUNC_10();
 FUNC_13();
 return -VAR_0;
}
