
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct TYPE_2__ {void* bitmap; } ;
struct qed_rdma_info {int num_qps; int num_mrs; int num_srqs; void* dev; void* port; TYPE_1__ pd_map; TYPE_1__ dpi_map; TYPE_1__ cq_map; TYPE_1__ toggle_bits; TYPE_1__ tid_map; TYPE_1__ cid_map; TYPE_1__ real_cid_map; TYPE_1__ srq_map; void* max_queue_zones; void* queue_zone_base; int proto; } ;
struct qed_hwfn {int dpi_count; struct qed_rdma_info* p_rdma_info; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct qed_hwfn*,int ) ;
 scalar_t__ FUNC_3 (struct qed_hwfn*,int ) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (struct qed_hwfn*,int ,int *) ;
 int FUNC_7 (struct qed_hwfn*,int ) ;
 int FUNC_8 (struct qed_hwfn*) ;
 int FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (struct qed_hwfn*,TYPE_1__*,int,char*) ;

__attribute__((used)) static int FUNC_11(struct qed_hwfn *VAR_7)
{
 struct qed_rdma_info *VAR_8 = VAR_7->p_rdma_info;
 u32 VAR_9, VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_0(VAR_7, VAR_5, "Allocating RDMA\n");

 if (FUNC_1(VAR_7))
  VAR_8->proto = VAR_2;
 else
  VAR_8->proto = VAR_3;

 VAR_9 = FUNC_6(VAR_7, VAR_8->proto,
            ((void*)0));

 if (FUNC_1(VAR_7))
  VAR_8->num_qps = VAR_9;
 else
  VAR_8->num_qps = VAR_9 / 2;

 VAR_10 = FUNC_7(VAR_7, VAR_3);


 VAR_8->num_mrs = VAR_10;




 VAR_8->queue_zone_base = (u16)FUNC_3(VAR_7, VAR_4);
 VAR_8->max_queue_zones = (u16)FUNC_2(VAR_7, VAR_4);


 VAR_8->dev = FUNC_5(sizeof(*VAR_8->dev), VAR_1);
 if (!VAR_8->dev)
  return VAR_11;


 VAR_8->port = FUNC_5(sizeof(*VAR_8->port), VAR_1);
 if (!VAR_8->port)
  goto free_rdma_dev;


 VAR_11 = FUNC_10(VAR_7, &VAR_8->pd_map, VAR_6,
     "PD");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate pd_map, rc = %d\n",
      VAR_11);
  goto free_rdma_port;
 }


 VAR_11 = FUNC_10(VAR_7, &VAR_8->dpi_map,
     VAR_7->dpi_count, "DPI");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate DPI bitmap, rc = %d\n", VAR_11);
  goto free_pd_map;
 }





 VAR_11 = FUNC_10(VAR_7, &VAR_8->cq_map, VAR_9, "CQ");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate cq bitmap, rc = %d\n", VAR_11);
  goto free_dpi_map;
 }





 VAR_11 = FUNC_10(VAR_7, &VAR_8->toggle_bits,
     VAR_9, "Toggle");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate toggle bits, rc = %d\n", VAR_11);
  goto free_cq_map;
 }


 VAR_11 = FUNC_10(VAR_7, &VAR_8->tid_map,
     VAR_8->num_mrs, "MR");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate itids bitmaps, rc = %d\n", VAR_11);
  goto free_toggle_map;
 }


 VAR_11 = FUNC_10(VAR_7, &VAR_8->cid_map, VAR_9,
     "CID");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate cid bitmap, rc = %d\n", VAR_11);
  goto free_tid_map;
 }


 VAR_11 = FUNC_10(VAR_7, &VAR_8->real_cid_map, VAR_9,
     "REAL_CID");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate real cid bitmap, rc = %d\n", VAR_11);
  goto free_cid_map;
 }


 VAR_8->num_srqs = FUNC_8(VAR_7);
 VAR_11 = FUNC_10(VAR_7, &VAR_8->srq_map,
     VAR_8->num_srqs, "SRQ");
 if (VAR_11) {
  FUNC_0(VAR_7, VAR_5,
      "Failed to allocate srq bitmap, rc = %d\n", VAR_11);
  goto free_real_cid_map;
 }

 if (FUNC_1(VAR_7))
  VAR_11 = FUNC_9(VAR_7);

 if (VAR_11)
  goto free_srq_map;

 FUNC_0(VAR_7, VAR_5, "Allocation successful\n");
 return 0;

free_srq_map:
 FUNC_4(VAR_8->srq_map.bitmap);
free_real_cid_map:
 FUNC_4(VAR_8->real_cid_map.bitmap);
free_cid_map:
 FUNC_4(VAR_8->cid_map.bitmap);
free_tid_map:
 FUNC_4(VAR_8->tid_map.bitmap);
free_toggle_map:
 FUNC_4(VAR_8->toggle_bits.bitmap);
free_cq_map:
 FUNC_4(VAR_8->cq_map.bitmap);
free_dpi_map:
 FUNC_4(VAR_8->dpi_map.bitmap);
free_pd_map:
 FUNC_4(VAR_8->pd_map.bitmap);
free_rdma_port:
 FUNC_4(VAR_8->port);
free_rdma_dev:
 FUNC_4(VAR_8->dev);

 return VAR_11;
}
