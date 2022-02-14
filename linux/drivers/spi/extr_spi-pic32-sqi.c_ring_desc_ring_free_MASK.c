
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pic32_sqi {int ring; int bd_dma; int bd; TYPE_1__* master; } ;
struct buf_desc {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pic32_sqi *VAR_1)
{
 FUNC_0(&VAR_1->master->dev,
     sizeof(struct buf_desc) * VAR_0,
     VAR_1->bd, VAR_1->bd_dma);
 FUNC_1(VAR_1->ring);
}
