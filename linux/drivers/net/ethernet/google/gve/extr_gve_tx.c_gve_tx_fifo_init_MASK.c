
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_tx_fifo {int size; scalar_t__ head; int available; TYPE_1__* qpl; int base; } ;
struct gve_priv {int dev; } ;
struct TYPE_2__ {int num_entries; int id; int pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 (struct gve_priv*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct gve_priv *VAR_5, struct gve_tx_fifo *VAR_6)
{
 VAR_6->base = FUNC_3(VAR_6->qpl->pages, VAR_6->qpl->num_entries, VAR_3,
     VAR_1);
 if (FUNC_2(!VAR_6->base)) {
  FUNC_1(VAR_5, VAR_4, VAR_5->dev, "Failed to vmap fifo, qpl_id = %d\n",
     VAR_6->qpl->id);
  return -VAR_0;
 }

 VAR_6->size = VAR_6->qpl->num_entries * VAR_2;
 FUNC_0(&VAR_6->available, VAR_6->size);
 VAR_6->head = 0;
 return 0;
}
