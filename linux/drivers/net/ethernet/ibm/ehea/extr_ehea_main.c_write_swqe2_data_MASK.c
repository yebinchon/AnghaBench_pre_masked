
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct ehea_vsgentry {void* vaddr; void* len; void* l_key; } ;
struct TYPE_4__ {int sg_list; struct ehea_vsgentry sg_entry; } ;
struct TYPE_5__ {TYPE_1__ immdata_desc; } ;
struct ehea_swqe {scalar_t__ descriptors; TYPE_2__ u; } ;
typedef int skb_frag_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct ehea_swqe*,void*) ;

__attribute__((used)) static inline void FUNC_5(struct sk_buff *VAR_0, struct net_device *VAR_1,
        struct ehea_swqe *VAR_2, u32 VAR_3)
{
 struct ehea_vsgentry *VAR_4, *VAR_5, *VAR_6;
 skb_frag_t *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_3(VAR_0)->nr_frags;
 VAR_5 = &VAR_2->u.immdata_desc.sg_entry;
 VAR_4 = (struct ehea_vsgentry *)&VAR_2->u.immdata_desc.sg_list;
 VAR_9 = 0;

 FUNC_4(VAR_0, VAR_2, VAR_3);


 if (VAR_8 > 0) {
  if (VAR_2->descriptors == 0) {

   VAR_7 = &FUNC_3(VAR_0)->frags[0];


   VAR_5->l_key = VAR_3;
   VAR_5->len = FUNC_2(VAR_7);
   VAR_5->vaddr =
    FUNC_0(FUNC_1(VAR_7));
   VAR_2->descriptors++;
   VAR_9 = 1;
  }

  for (VAR_10 = VAR_9; VAR_10 < VAR_8; VAR_10++) {

   VAR_7 = &FUNC_3(VAR_0)->frags[VAR_10];
   VAR_6 = &VAR_4[VAR_10 - VAR_9];

   VAR_6->l_key = VAR_3;
   VAR_6->len = FUNC_2(VAR_7);
   VAR_6->vaddr = FUNC_0(FUNC_1(VAR_7));
   VAR_2->descriptors++;
  }
 }
}
