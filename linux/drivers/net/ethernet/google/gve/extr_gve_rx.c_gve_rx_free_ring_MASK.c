
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int * data_ring; int data_bus; int page_info; TYPE_3__* qpl; } ;
struct TYPE_6__ {int * desc_ring; int bus; } ;
struct gve_rx_ring {int mask; TYPE_4__ data; int * q_resources; int q_resources_bus; TYPE_2__ desc; } ;
struct gve_rx_desc {int dummy; } ;
struct gve_priv {int rx_desc_cnt; int dev; TYPE_1__* pdev; struct gve_rx_ring* rx; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (struct device*,size_t,int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct gve_priv*,int) ;
 int FUNC_2 (struct gve_priv*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gve_priv*,int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct gve_priv *VAR_1, int VAR_2)
{
 struct gve_rx_ring *VAR_3 = &VAR_1->rx[VAR_2];
 struct device *VAR_4 = &VAR_1->pdev->dev;
 size_t VAR_5;
 u32 VAR_6;

 FUNC_1(VAR_1, VAR_2);

 VAR_5 = sizeof(struct gve_rx_desc) * VAR_1->rx_desc_cnt;
 FUNC_0(VAR_4, VAR_5, VAR_3->desc.desc_ring, VAR_3->desc.bus);
 VAR_3->desc.desc_ring = ((void*)0);

 FUNC_0(VAR_4, sizeof(*VAR_3->q_resources),
     VAR_3->q_resources, VAR_3->q_resources_bus);
 VAR_3->q_resources = ((void*)0);

 FUNC_2(VAR_1, VAR_3->data.qpl->id);
 VAR_3->data.qpl = ((void*)0);
 FUNC_3(VAR_3->data.page_info);

 VAR_6 = VAR_3->mask + 1;
 VAR_5 = sizeof(*VAR_3->data.data_ring) * VAR_6;
 FUNC_0(VAR_4, VAR_5, VAR_3->data.data_ring,
     VAR_3->data.data_bus);
 VAR_3->data.data_ring = ((void*)0);
 FUNC_4(VAR_1, VAR_0, VAR_1->dev, "freed rx ring %d\n", VAR_2);
}
