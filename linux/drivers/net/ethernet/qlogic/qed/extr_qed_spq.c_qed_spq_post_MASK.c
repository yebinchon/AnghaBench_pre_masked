
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int echo; int protocol_id; int cmd_id; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct qed_spq_entry {scalar_t__ comp_mode; TYPE_3__ elem; int list; struct qed_spq_entry* post_ent; int * queue; int priority; } ;
struct qed_spq {int lock; int unlimited_pending; } ;
struct qed_hwfn {TYPE_1__* cdev; struct qed_spq* p_spq; } ;
struct TYPE_4__ {scalar_t__ recov_in_prog; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_3 (struct qed_spq_entry*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_spq_entry*,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_spq_entry*,int *,int) ;
 int FUNC_7 (struct qed_hwfn*,int ) ;
 int FUNC_8 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (struct qed_spq_entry*,int *) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_spq_entry*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct qed_hwfn *VAR_3,
   struct qed_spq_entry *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0;
 struct qed_spq *VAR_7 = VAR_3 ? VAR_3->p_spq : ((void*)0);
 bool VAR_8 = 1;
 bool VAR_9;

 if (!VAR_3)
  return -VAR_0;

 if (!VAR_4) {
  FUNC_0(VAR_3, "Got a NULL pointer\n");
  return -VAR_0;
 }

 if (VAR_3->cdev->recov_in_prog) {
  FUNC_1(VAR_3,
      VAR_1,
      "Recovery is in progress. Skip spq post [cmd %02x protocol %02x]\n",
      VAR_4->elem.hdr.cmd_id, VAR_4->elem.hdr.protocol_id);


  FUNC_10(VAR_4, VAR_5);
  return 0;
 }


 VAR_6 = FUNC_8(VAR_3, VAR_4);

 FUNC_12(&VAR_7->lock);


 if (VAR_6)
  goto spq_post_fail;




 VAR_9 = (VAR_4->comp_mode == VAR_2);


 VAR_6 = FUNC_5(VAR_3, VAR_4, VAR_4->priority);
 if (VAR_6)
  goto spq_post_fail;

 VAR_6 = FUNC_9(VAR_3);
 if (VAR_6) {




  VAR_8 = 0;
  goto spq_post_fail;
 }

 FUNC_13(&VAR_7->lock);

 if (VAR_9) {





  VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_5,
       VAR_4->queue == &VAR_7->unlimited_pending);

  if (VAR_4->queue == &VAR_7->unlimited_pending) {
   struct qed_spq_entry *VAR_10 = VAR_4->post_ent;

   FUNC_3(VAR_4);


   VAR_4 = VAR_10;
  }

  if (VAR_6)
   goto spq_post_fail2;


  FUNC_11(VAR_3, VAR_4);
 }
 return VAR_6;

spq_post_fail2:
 FUNC_12(&VAR_7->lock);
 FUNC_4(&VAR_4->list);
 FUNC_7(VAR_3, VAR_4->elem.hdr.echo);

spq_post_fail:

 if (VAR_8)
  FUNC_2(VAR_3, VAR_4);
 FUNC_13(&VAR_7->lock);

 return VAR_6;
}
