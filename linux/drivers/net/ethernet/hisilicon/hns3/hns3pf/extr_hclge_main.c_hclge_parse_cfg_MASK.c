
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hclge_desc {scalar_t__ data; } ;
struct hclge_cfg_param_cmd {int * param; } ;
struct hclge_cfg {int* mac_addr; void* umv_space; void* speed_ability; void* numa_node_map; void* rss_size_max; void* default_speed; void* rx_buf_len; void* media_type; void* phy_addr; void* tqp_desc_num; void* tc_num; void* vmdq_vport_num; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hclge_cfg *VAR_24, struct hclge_desc *VAR_25)
{
 struct hclge_cfg_param_cmd *VAR_26;
 u64 VAR_27;
 u64 VAR_28;
 unsigned int VAR_29;

 VAR_26 = (struct hclge_cfg_param_cmd *)VAR_25[0].data;


 VAR_24->vmdq_vport_num = FUNC_1(FUNC_0(VAR_26->param[0]),
           VAR_21,
           VAR_22);
 VAR_24->tc_num = FUNC_1(FUNC_0(VAR_26->param[0]),
          VAR_15, VAR_16);
 VAR_24->tqp_desc_num = FUNC_1(FUNC_0(VAR_26->param[0]),
         VAR_17,
         VAR_18);

 VAR_24->phy_addr = FUNC_1(FUNC_0(VAR_26->param[1]),
     VAR_7,
     VAR_8);
 VAR_24->media_type = FUNC_1(FUNC_0(VAR_26->param[1]),
       VAR_5,
       VAR_6);
 VAR_24->rx_buf_len = FUNC_1(FUNC_0(VAR_26->param[1]),
       VAR_11,
       VAR_12);

 VAR_28 = FUNC_0(VAR_26->param[2]);
 VAR_27 = FUNC_1(FUNC_0(VAR_26->param[3]),
         VAR_3,
         VAR_4);

 VAR_28 |= (VAR_27 << 31) << 1;

 VAR_24->default_speed = FUNC_1(FUNC_0(VAR_26->param[3]),
          VAR_1,
          VAR_2);
 VAR_24->rss_size_max = FUNC_1(FUNC_0(VAR_26->param[3]),
         VAR_9,
         VAR_10);

 for (VAR_29 = 0; VAR_29 < VAR_0; VAR_29++)
  VAR_24->mac_addr[VAR_29] = (VAR_28 >> (8 * VAR_29)) & 0xff;

 VAR_26 = (struct hclge_cfg_param_cmd *)VAR_25[1].data;
 VAR_24->numa_node_map = FUNC_0(VAR_26->param[0]);

 VAR_24->speed_ability = FUNC_1(FUNC_0(VAR_26->param[1]),
          VAR_13,
          VAR_14);
 VAR_24->umv_space = FUNC_1(FUNC_0(VAR_26->param[1]),
      VAR_19,
      VAR_20);
 if (!VAR_24->umv_space)
  VAR_24->umv_space = VAR_23;
}
