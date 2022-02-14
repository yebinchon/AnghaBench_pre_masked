
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnic_wq_buf {TYPE_2__* next; struct vnic_wq_buf* prev; int os_buf; } ;
struct TYPE_4__ {int desc_avail; } ;
struct vnic_wq {TYPE_2__* to_use; TYPE_1__ ring; TYPE_2__* to_clean; } ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ encapsulation; } ;
struct enic {unsigned int loop_tag; scalar_t__ loop_enable; } ;
struct TYPE_6__ {unsigned int gso_size; } ;
struct TYPE_5__ {struct vnic_wq_buf* prev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct vnic_wq*,struct vnic_wq_buf*) ;
 int FUNC_2 (struct enic*,struct vnic_wq*,struct sk_buff*,int,unsigned int,int) ;
 int FUNC_3 (struct enic*,struct vnic_wq*,struct sk_buff*,int,unsigned int,int) ;
 int FUNC_4 (struct enic*,struct vnic_wq*,struct sk_buff*,unsigned int,int,unsigned int,int) ;
 int FUNC_5 (struct enic*,struct vnic_wq*,struct sk_buff*,int,unsigned int,int) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 unsigned int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static inline void FUNC_10(struct enic *VAR_1,
 struct vnic_wq *VAR_2, struct sk_buff *VAR_3)
{
 unsigned int VAR_4 = FUNC_6(VAR_3)->gso_size;
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;
 int VAR_8;

 if (FUNC_8(VAR_3)) {

  VAR_6 = 1;
  VAR_5 = FUNC_7(VAR_3);
 } else if (VAR_1->loop_enable) {
  VAR_5 = VAR_1->loop_tag;
  VAR_7 = 1;
 }

 if (VAR_4)
  VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
         VAR_6, VAR_5,
         VAR_7);
 else if (VAR_3->encapsulation)
  VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_6,
           VAR_5, VAR_7);
 else if (VAR_3->ip_summed == VAR_0)
  VAR_8 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_6,
      VAR_5, VAR_7);
 else
  VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_6,
          VAR_5, VAR_7);
 if (FUNC_9(VAR_8)) {
  struct vnic_wq_buf *VAR_9;

  VAR_9 = VAR_2->to_use->prev;



  while (!VAR_9->os_buf && (VAR_9->next != VAR_2->to_clean)) {
   FUNC_1(VAR_2, VAR_9);
   VAR_2->ring.desc_avail++;
   VAR_9 = VAR_9->prev;
  }
  VAR_2->to_use = VAR_9->next;
  FUNC_0(VAR_3);
 }
}
