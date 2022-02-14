
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int* msg; } ;
struct hclge_dev {TYPE_1__* vport; } ;
struct TYPE_2__ {int * rss_hash_key; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int*,int) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_1,
        struct hclge_mbx_vf_to_pf_cmd *VAR_2)
{

 u8 VAR_3[8];
 struct hclge_dev *VAR_4 = VAR_1->back;
 u8 VAR_5;

 VAR_5 = VAR_2->msg[2];

 FUNC_1(&VAR_3[0],
        &VAR_4->vport[0].rss_hash_key[VAR_5 * 8],
        8);

 return FUNC_0(VAR_1, VAR_2, 0, VAR_3,
        8);
}
