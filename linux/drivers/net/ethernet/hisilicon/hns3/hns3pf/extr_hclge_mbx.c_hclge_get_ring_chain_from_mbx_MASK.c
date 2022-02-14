
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hnae3_ring_chain_node {struct hnae3_ring_chain_node* next; int int_gl_idx; void* tqp_index; int flag; } ;
struct TYPE_3__ {int * tqp; } ;
struct TYPE_4__ {TYPE_1__ kinfo; } ;
struct hclge_vport {TYPE_2__ nic; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct hnae3_ring_chain_node*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,size_t) ;
 struct hnae3_ring_chain_node* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(
   struct hclge_mbx_vf_to_pf_cmd *VAR_8,
   struct hnae3_ring_chain_node *VAR_9,
   struct hclge_vport *VAR_10)
{
 struct hnae3_ring_chain_node *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_13 = VAR_8->msg[2];

 if (VAR_13 > ((VAR_4 -
  VAR_2) /
  VAR_3))
  return -VAR_0;

 FUNC_2(VAR_9->flag, VAR_7, VAR_8->msg[3]);
 VAR_9->tqp_index =
   FUNC_1(VAR_10->nic.kinfo.tqp[VAR_8->msg[4]]);
 FUNC_3(VAR_9->int_gl_idx, VAR_5,
   VAR_6,
   VAR_8->msg[5]);

 VAR_11 = VAR_9;

 for (VAR_14 = 1; VAR_14 < VAR_13; VAR_14++) {
  VAR_12 = FUNC_4(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   goto err;

  FUNC_2(VAR_12->flag, VAR_7,
         VAR_8->msg[VAR_3 * VAR_14 +
         VAR_2]);

  VAR_12->tqp_index =
  FUNC_1(VAR_10->nic.kinfo.tqp
   [VAR_8->msg[VAR_3 * VAR_14 +
   VAR_2 + 1]]);

  FUNC_3(VAR_12->int_gl_idx, VAR_5,
    VAR_6,
    VAR_8->msg[VAR_3 * VAR_14 +
    VAR_2 + 2]);

  VAR_11->next = VAR_12;
  VAR_11 = VAR_12;
 }

 return 0;
err:
 FUNC_0(VAR_9);
 return -VAR_0;
}
