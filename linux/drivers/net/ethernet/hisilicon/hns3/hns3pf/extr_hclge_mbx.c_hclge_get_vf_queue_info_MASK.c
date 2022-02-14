
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int rss_size; } ;
struct TYPE_4__ {TYPE_1__ kinfo; } ;
struct hclge_vport {TYPE_2__ nic; int alloc_tqps; struct hclge_dev* back; } ;
struct hclge_mbx_vf_to_pf_cmd {int dummy; } ;
struct hclge_dev {int rx_buf_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct hclge_vport*,struct hclge_mbx_vf_to_pf_cmd*,int ,int *,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct hclge_vport *VAR_1,
       struct hclge_mbx_vf_to_pf_cmd *VAR_2,
       bool VAR_3)
{

 u8 VAR_4[6];
 struct hclge_dev *VAR_5 = VAR_1->back;


 FUNC_1(&VAR_4[0], &VAR_1->alloc_tqps, sizeof(u16));
 FUNC_1(&VAR_4[2], &VAR_1->nic.kinfo.rss_size, sizeof(u16));
 FUNC_1(&VAR_4[4], &VAR_5->rx_buf_len, sizeof(u16));

 return FUNC_0(VAR_1, VAR_2, 0, VAR_4,
        6);
}
