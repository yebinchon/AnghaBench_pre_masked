
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct bnx2x_rss_config_obj {int config_rss; int engine_id; int raw; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;
typedef int bnx2x_obj_type ;


 int FUNC_0 (int *,int ,int ,int ,void*,int ,int,unsigned long*,int ) ;
 int VAR_0 ;

void FUNC_1(struct bnx2x *VAR_1,
          struct bnx2x_rss_config_obj *VAR_2,
          u8 VAR_3, u32 VAR_4, u8 VAR_5, u8 VAR_6,
          void *VAR_7, dma_addr_t VAR_8,
          int VAR_9, unsigned long *VAR_10,
          bnx2x_obj_type VAR_11)
{
 FUNC_0(&VAR_2->raw, VAR_3, VAR_4, VAR_5, VAR_7,
      VAR_8, VAR_9, VAR_10, VAR_11);

 VAR_2->engine_id = VAR_6;
 VAR_2->config_rss = VAR_0;
}
