
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_req {int cmd; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline enum dma_data_direction
FUNC_1(struct nvmet_req *VAR_2)
{
 return FUNC_0(VAR_2->cmd) ? VAR_0 : VAR_1;
}
