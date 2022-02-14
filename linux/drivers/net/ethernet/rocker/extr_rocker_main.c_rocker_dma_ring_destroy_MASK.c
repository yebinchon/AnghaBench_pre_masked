
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_dma_ring_info {int size; int desc_info; int mapaddr; int desc; int type; } ;
struct rocker_desc {int dummy; } ;
struct rocker {int pdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (struct rocker const*,int ,int ) ;

__attribute__((used)) static void FUNC_4(const struct rocker *VAR_0,
        const struct rocker_dma_ring_info *VAR_1)
{
 FUNC_3(VAR_0, FUNC_0(VAR_1->type), 0);

 FUNC_2(VAR_0->pdev,
       VAR_1->size * sizeof(struct rocker_desc),
       VAR_1->desc, VAR_1->mapaddr);
 FUNC_1(VAR_1->desc_info);
}
