
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tb_regs_switch_header {int dummy; } ;
struct tb_regs_port_header {int dummy; } ;
struct tb_regs_hop {int dummy; } ;
struct tb_nhi {TYPE_1__* pdev; } ;
struct TYPE_5__ {int groups; int * type; int * bus; int * parent; } ;
struct tb {scalar_t__ index; TYPE_2__ dev; int wq; int lock; struct tb_nhi* nhi; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct tb*) ;
 struct tb* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

struct tb *FUNC_9(struct tb_nhi *VAR_5, size_t VAR_6)
{
 struct tb *VAR_7;





 FUNC_0(sizeof(struct tb_regs_switch_header) != 5 * 4);
 FUNC_0(sizeof(struct tb_regs_port_header) != 8 * 4);
 FUNC_0(sizeof(struct tb_regs_hop) != 2 * 4);

 VAR_7 = FUNC_7(sizeof(*VAR_7) + VAR_6, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 VAR_7->nhi = VAR_5;
 FUNC_8(&VAR_7->lock);

 VAR_7->index = FUNC_4(&VAR_3, 0, 0, VAR_0);
 if (VAR_7->index < 0)
  goto err_free;

 VAR_7->wq = FUNC_1("thunderbolt%d", 0, VAR_7->index);
 if (!VAR_7->wq)
  goto err_remove_ida;

 VAR_7->dev.parent = &VAR_5->pdev->dev;
 VAR_7->dev.bus = &VAR_2;
 VAR_7->dev.type = &VAR_4;
 VAR_7->dev.groups = VAR_1;
 FUNC_2(&VAR_7->dev, "domain%d", VAR_7->index);
 FUNC_3(&VAR_7->dev);

 return VAR_7;

err_remove_ida:
 FUNC_5(&VAR_3, VAR_7->index);
err_free:
 FUNC_6(VAR_7);

 return ((void*)0);
}
