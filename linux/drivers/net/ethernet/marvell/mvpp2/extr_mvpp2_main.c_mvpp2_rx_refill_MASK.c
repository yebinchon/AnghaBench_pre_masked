
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_port {int dummy; } ;
struct mvpp2_bm_pool {int dummy; } ;
typedef int phys_addr_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvpp2_port*,int,int ,int ) ;
 void* FUNC_1 (struct mvpp2_port*,struct mvpp2_bm_pool*,int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct mvpp2_port *VAR_2,
      struct mvpp2_bm_pool *VAR_3, int VAR_4)
{
 dma_addr_t VAR_5;
 phys_addr_t VAR_6;
 void *VAR_7;


 VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_5, &VAR_6,
         VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_0(VAR_2, VAR_4, VAR_5, VAR_6);

 return 0;
}
