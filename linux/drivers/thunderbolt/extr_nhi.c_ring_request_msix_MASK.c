
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_ring {int vector; scalar_t__ irq; struct tb_nhi* nhi; } ;
struct tb_nhi {TYPE_1__* pdev; int msix_ida; } ;
struct TYPE_2__ {int msix_enabled; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,int ,unsigned long,char*,struct tb_ring*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct tb_ring *VAR_4, bool VAR_5)
{
 struct tb_nhi *VAR_6 = VAR_4->nhi;
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_6->pdev->msix_enabled)
  return 0;

 VAR_8 = FUNC_0(&VAR_6->msix_ida, 0, VAR_2, VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_4->vector = VAR_8;

 VAR_4->irq = FUNC_1(VAR_4->nhi->pdev, VAR_4->vector);
 if (VAR_4->irq < 0)
  return VAR_4->irq;

 VAR_7 = VAR_5 ? VAR_1 : 0;
 return FUNC_2(VAR_4->irq, VAR_3, VAR_7, "thunderbolt", VAR_4);
}
