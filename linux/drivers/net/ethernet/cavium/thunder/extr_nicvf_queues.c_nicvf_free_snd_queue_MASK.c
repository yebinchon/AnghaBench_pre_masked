
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sq_hdr_subdesc {size_t rsvd2; int subdesc_cnt; scalar_t__ dont_send; } ;
struct TYPE_4__ {int q_len; int base; } ;
struct snd_queue {size_t head; size_t tail; TYPE_2__ dmem; scalar_t__* xdp_page; scalar_t__* skbuff; int * tso_hdrs; int tso_hdrs_phys; } ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct nicvf {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct snd_queue*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (struct nicvf*,TYPE_2__*) ;
 int FUNC_5 (struct nicvf*,struct snd_queue*,size_t,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct nicvf *VAR_1, struct snd_queue *VAR_2)
{
 struct sk_buff *VAR_3;
 struct page *VAR_4;
 struct sq_hdr_subdesc *VAR_5;
 struct sq_hdr_subdesc *VAR_6;

 if (!VAR_2)
  return;
 if (!VAR_2->dmem.base)
  return;

 if (VAR_2->tso_hdrs) {
  FUNC_2(&VAR_1->pdev->dev,
      VAR_2->dmem.q_len * VAR_0,
      VAR_2->tso_hdrs, VAR_2->tso_hdrs_phys);
  VAR_2->tso_hdrs = ((void*)0);
 }


 FUNC_7();
 while (VAR_2->head != VAR_2->tail) {
  VAR_3 = (struct sk_buff *)VAR_2->skbuff[VAR_2->head];
  if (!VAR_3 || !VAR_2->xdp_page)
   goto next;

  VAR_4 = (struct page *)VAR_2->xdp_page[VAR_2->head];
  if (!VAR_4)
   goto next;
  else
   FUNC_6(VAR_4);

  VAR_5 = (struct sq_hdr_subdesc *)FUNC_0(VAR_2, VAR_2->head);

  if (VAR_5->dont_send) {

   VAR_6 =
    (struct sq_hdr_subdesc *)FUNC_0(VAR_2, VAR_5->rsvd2);
   FUNC_5(VAR_1, VAR_2, VAR_5->rsvd2,
       VAR_6->subdesc_cnt);
  } else {
   FUNC_5(VAR_1, VAR_2, VAR_2->head,
       VAR_5->subdesc_cnt);
  }
  if (VAR_3)
   FUNC_1(VAR_3);
next:
  VAR_2->head++;
  VAR_2->head &= (VAR_2->dmem.q_len - 1);
 }
 FUNC_3(VAR_2->skbuff);
 FUNC_3(VAR_2->xdp_page);
 FUNC_4(VAR_1, &VAR_2->dmem);
}
