
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hinic_sq_task {int pkt_info1; int pkt_info0; } ;
typedef enum hinic_l4_offload_type { ____Placeholder_hinic_l4_offload_type } hinic_l4_offload_type ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_4(struct hinic_sq_task *VAR_10, u32 *VAR_11,
      enum hinic_l4_offload_type VAR_12,
      u32 VAR_13, u32 VAR_14)
{
 u32 VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17 = VAR_0;

 if (VAR_12 == VAR_8 ||
     VAR_12 == VAR_9)
  VAR_15 = 1;
 else if (VAR_12 == VAR_7)
  VAR_16 = 1;

 VAR_10->pkt_info0 |= FUNC_2(VAR_12, VAR_2);
 VAR_10->pkt_info1 |= FUNC_3(VAR_13, VAR_1);

 *VAR_11 |= FUNC_1(VAR_14, VAR_4) |
         FUNC_1(VAR_15, VAR_6) |
         FUNC_1(VAR_16, VAR_5);

 *VAR_11 = FUNC_0(*VAR_11, VAR_3);
 *VAR_11 |= FUNC_1(VAR_17, VAR_3);
}
