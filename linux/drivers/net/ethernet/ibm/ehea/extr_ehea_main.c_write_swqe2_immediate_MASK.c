
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct ehea_vsgentry {int len; int vaddr; int l_key; } ;
struct TYPE_4__ {struct ehea_vsgentry sg_entry; int * immediate_data; } ;
struct TYPE_5__ {TYPE_1__ immdata_desc; } ;
struct ehea_swqe {unsigned int immediate_data_length; scalar_t__ descriptors; int mss; int tx_control; TYPE_2__ u; } ;
struct TYPE_6__ {int gso_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int *,int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 TYPE_3__* FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_3, struct ehea_swqe *VAR_4,
      u32 VAR_5)
{
 int VAR_6 = FUNC_3(VAR_3);
 u8 *VAR_7 = &VAR_4->u.immdata_desc.immediate_data[0];
 struct ehea_vsgentry *VAR_8 = &VAR_4->u.immdata_desc.sg_entry;
 unsigned int VAR_9 = VAR_2;

 VAR_4->descriptors = 0;

 if (FUNC_4(VAR_3)) {
  VAR_4->tx_control |= VAR_0;
  VAR_4->mss = FUNC_5(VAR_3)->gso_size;




  VAR_9 = VAR_1 + FUNC_1(VAR_3) + FUNC_6(VAR_3);
 }

 if (FUNC_4(VAR_3) || VAR_6 >= VAR_2) {
  FUNC_2(VAR_3, VAR_7, VAR_9);
  VAR_4->immediate_data_length = VAR_9;

  if (VAR_6 > VAR_9) {
   VAR_8->l_key = VAR_5;
   VAR_8->len = VAR_6 - VAR_9;
   VAR_8->vaddr =
    FUNC_0(VAR_3->data + VAR_9);
   VAR_4->descriptors++;
  }
 } else {
  FUNC_2(VAR_3, VAR_7, VAR_6);
  VAR_4->immediate_data_length = VAR_6;
 }
}
