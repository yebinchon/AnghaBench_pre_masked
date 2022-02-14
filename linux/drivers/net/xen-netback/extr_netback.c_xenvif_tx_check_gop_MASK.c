
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct xenvif_queue {TYPE_3__* vif; } ;
struct skb_shared_info {int nr_frags; struct sk_buff* frag_list; int * frags; } ;
struct sk_buff {int dummy; } ;
struct gnttab_map_grant_ref {int status; int ref; int handle; } ;
struct TYPE_5__ {int ref; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct gnttab_copy {int status; TYPE_2__ source; } ;
struct TYPE_8__ {scalar_t__ pending_idx; } ;
struct TYPE_7__ {int dev; } ;


 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,char*,int,int,scalar_t__,...) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct xenvif_queue*,scalar_t__,int ) ;
 int FUNC_9 (struct xenvif_queue*,scalar_t__,int ) ;
 int FUNC_10 (struct xenvif_queue*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct xenvif_queue *VAR_2,
          struct sk_buff *VAR_3,
          struct gnttab_map_grant_ref **VAR_4,
          struct gnttab_copy **VAR_5)
{
 struct gnttab_map_grant_ref *VAR_6 = *VAR_4;
 u16 VAR_7 = FUNC_0(VAR_3)->pending_idx;



 struct skb_shared_info *VAR_8 = FUNC_6(VAR_3);



 struct skb_shared_info *VAR_9 = ((void*)0);
 int VAR_10 = VAR_8->nr_frags;
 const bool VAR_11 = VAR_10 &&
    FUNC_1(&VAR_8->frags[0]) == VAR_7;
 int VAR_12, VAR_13;


 VAR_13 = (*VAR_5)->status;
 if (FUNC_7(VAR_13)) {
  if (FUNC_3())
   FUNC_4(VAR_2->vif->dev,
       "Grant copy of header failed! status: %d pending_idx: %u ref: %u\n",
       (*VAR_5)->status,
       VAR_7,
       (*VAR_5)->source.u.ref);

  if (!VAR_11)
   FUNC_9(VAR_2, VAR_7,
        VAR_0);
 }
 (*VAR_5)++;

check_frags:
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++, VAR_6++) {
  int VAR_14, VAR_15;

  VAR_7 = FUNC_1(&VAR_8->frags[VAR_12]);


  VAR_15 = VAR_6->status;

  if (FUNC_2(!VAR_15)) {
   FUNC_8(VAR_2,
      VAR_7,
      VAR_6->handle);

   if (FUNC_7(VAR_13)) {
    FUNC_10(VAR_2, VAR_7);




    if (VAR_12 == 0 && VAR_11)
     FUNC_9(VAR_2, VAR_7,
          VAR_0);
    else
     FUNC_9(VAR_2, VAR_7,
          VAR_1);
   }
   continue;
  }


  if (FUNC_3())
   FUNC_4(VAR_2->vif->dev,
       "Grant map of %d. frag failed! status: %d pending_idx: %u ref: %u\n",
       VAR_12,
       VAR_6->status,
       VAR_7,
       VAR_6->ref);

  FUNC_9(VAR_2, VAR_7, VAR_0);


  if (VAR_13)
   continue;




  if (!VAR_11)
   FUNC_9(VAR_2,
        FUNC_0(VAR_3)->pending_idx,
        VAR_1);


  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
   VAR_7 = FUNC_1(&VAR_8->frags[VAR_14]);
   FUNC_10(VAR_2, VAR_7);
   FUNC_9(VAR_2, VAR_7,
        VAR_1);
  }




  if (VAR_9) {
   for (VAR_14 = 0; VAR_14 < VAR_9->nr_frags; VAR_14++) {
    VAR_7 = FUNC_1(&VAR_9->frags[VAR_14]);
    FUNC_10(VAR_2, VAR_7);
    FUNC_9(VAR_2, VAR_7,
         VAR_1);
   }
  }


  VAR_13 = VAR_15;
 }

 if (FUNC_5(VAR_3) && !VAR_9) {
  VAR_9 = FUNC_6(VAR_3);
  VAR_8 = FUNC_6(FUNC_6(VAR_3)->frag_list);
  VAR_10 = VAR_8->nr_frags;

  goto check_frags;
 }

 *VAR_4 = VAR_6;
 return VAR_13;
}
