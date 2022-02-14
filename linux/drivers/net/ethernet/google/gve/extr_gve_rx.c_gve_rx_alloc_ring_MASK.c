
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * data_ring; scalar_t__ data_bus; int page_info; } ;
struct TYPE_5__ {int seqno; void* desc_ring; scalar_t__ bus; } ;
struct gve_rx_ring {int q_num; int mask; int fill_cnt; TYPE_3__ data; int * q_resources; scalar_t__ q_resources_bus; TYPE_2__ desc; scalar_t__ cnt; struct gve_priv* gve; } ;
struct gve_rx_desc {int dummy; } ;
struct gve_priv {int rx_pages_per_qpl; int rx_desc_cnt; int dev; TYPE_1__* pdev; struct gve_rx_ring* rx; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 void* FUNC_0 (struct device*,size_t,scalar_t__*,int ) ;
 int FUNC_1 (struct device*,size_t,int *,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (struct gve_rx_ring*) ;
 int FUNC_4 (struct gve_priv*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct gve_rx_ring*,int ,int) ;
 int FUNC_7 (struct gve_priv*,int ,int ,char*,...) ;

__attribute__((used)) static int FUNC_8(struct gve_priv *VAR_5, int VAR_6)
{
 struct gve_rx_ring *VAR_7 = &VAR_5->rx[VAR_6];
 struct device *VAR_8 = &VAR_5->pdev->dev;
 u32 VAR_9, VAR_10;
 int VAR_11;
 size_t VAR_12;
 int VAR_13;

 FUNC_7(VAR_5, VAR_4, VAR_5->dev, "allocating rx ring\n");

 FUNC_6(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->gve = VAR_5;
 VAR_7->q_num = VAR_6;

 VAR_9 = VAR_5->rx_pages_per_qpl;
 VAR_7->mask = VAR_9 - 1;


 VAR_12 = sizeof(*VAR_7->data.data_ring) * VAR_9;
 VAR_7->data.data_ring = FUNC_0(VAR_8, VAR_12,
      &VAR_7->data.data_bus,
      VAR_2);
 if (!VAR_7->data.data_ring)
  return -VAR_1;
 VAR_11 = FUNC_3(VAR_7);
 if (VAR_11 < 0) {
  VAR_13 = -VAR_1;
  goto abort_with_slots;
 }
 VAR_7->fill_cnt = VAR_11;

 FUNC_2();


 VAR_7->q_resources =
  FUNC_0(VAR_8,
       sizeof(*VAR_7->q_resources),
       &VAR_7->q_resources_bus,
       VAR_2);
 if (!VAR_7->q_resources) {
  VAR_13 = -VAR_1;
  goto abort_filled;
 }
 FUNC_7(VAR_5, VAR_4, VAR_5->dev, "rx[%d]->data.data_bus=%lx\n", VAR_6,
    (unsigned long)VAR_7->data.data_bus);


 VAR_12 = sizeof(struct gve_rx_desc) * VAR_5->rx_desc_cnt;
 VAR_10 = VAR_12 / VAR_3;
 if (VAR_10 * VAR_3 != VAR_12) {
  VAR_13 = -VAR_0;
  goto abort_with_q_resources;
 }

 VAR_7->desc.desc_ring = FUNC_0(VAR_8, VAR_12, &VAR_7->desc.bus,
      VAR_2);
 if (!VAR_7->desc.desc_ring) {
  VAR_13 = -VAR_1;
  goto abort_with_q_resources;
 }
 VAR_7->mask = VAR_9 - 1;
 VAR_7->cnt = 0;
 VAR_7->desc.seqno = 1;
 FUNC_4(VAR_5, VAR_6);

 return 0;

abort_with_q_resources:
 FUNC_1(VAR_8, sizeof(*VAR_7->q_resources),
     VAR_7->q_resources, VAR_7->q_resources_bus);
 VAR_7->q_resources = ((void*)0);
abort_filled:
 FUNC_5(VAR_7->data.page_info);
abort_with_slots:
 VAR_12 = sizeof(*VAR_7->data.data_ring) * VAR_9;
 FUNC_1(VAR_8, VAR_12, VAR_7->data.data_ring, VAR_7->data.data_bus);
 VAR_7->data.data_ring = ((void*)0);

 return VAR_13;
}
