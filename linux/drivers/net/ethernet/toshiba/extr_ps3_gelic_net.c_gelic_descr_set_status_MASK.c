
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gelic_descr {int dmac_cmd_status; } ;
typedef enum gelic_descr_dma_status { ____Placeholder_gelic_descr_dma_status } gelic_descr_dma_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct gelic_descr *VAR_1,
       enum gelic_descr_dma_status VAR_2)
{
 VAR_1->dmac_cmd_status = FUNC_1(VAR_2 |
   (FUNC_0(VAR_1->dmac_cmd_status) &
    ~VAR_0));






 FUNC_2();
}
