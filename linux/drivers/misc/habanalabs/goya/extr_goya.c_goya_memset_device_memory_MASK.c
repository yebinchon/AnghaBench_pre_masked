
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct packet_msg_prot {int dummy; } ;
struct packet_lin_dma {void* tsize; void* dst_addr; void* src_addr; void* ctl; } ;
struct hl_device {int kernel_cb_mgr; int dev; } ;
struct hl_cs_job {int user_cb_size; int job_cb_size; struct hl_cb* patched_cb; struct hl_cb* user_cb; int hw_queue_id; scalar_t__ id; } ;
struct hl_cb {int id; int cs_cnt; scalar_t__ kernel_address; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct hl_device*,struct hl_cs_job*) ;
 int FUNC_5 (struct hl_device*,int *,int) ;
 struct hl_cb* FUNC_6 (struct hl_device*,int) ;
 int FUNC_7 (struct hl_cb*) ;
 struct hl_cs_job* FUNC_8 (struct hl_device*,int) ;
 int FUNC_9 (struct hl_device*,struct hl_cs_job*) ;
 int FUNC_10 (struct hl_device*,struct hl_cs_job*) ;
 int FUNC_11 (struct hl_cs_job*) ;
 int FUNC_12 (struct packet_lin_dma*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct hl_device *VAR_13, u64 VAR_14, u64 VAR_15,
    u64 VAR_16, bool VAR_17)
{
 struct packet_lin_dma *VAR_18;
 struct hl_cs_job *VAR_19;
 u32 VAR_20, VAR_21;
 struct hl_cb *VAR_22;
 int VAR_23, VAR_24;

 VAR_24 = FUNC_0(VAR_15, VAR_12);
 VAR_20 = VAR_24 * sizeof(struct packet_lin_dma) +
      sizeof(struct packet_msg_prot);
 VAR_22 = FUNC_6(VAR_13, VAR_20);
 if (!VAR_22)
  return -VAR_2;

 VAR_18 = (struct packet_lin_dma *) (uintptr_t) VAR_22->kernel_address;

 do {
  FUNC_12(VAR_18, 0, sizeof(*VAR_18));

  VAR_21 = ((VAR_10 << VAR_4) |
    (1 << VAR_7) |
    (1 << VAR_8) |
    (1 << VAR_5) |
    (1 << VAR_3));
  VAR_21 |= (VAR_17 ? VAR_0 : VAR_1) <<
    VAR_6;
  VAR_18->ctl = FUNC_1(VAR_21);

  VAR_18->src_addr = FUNC_2(VAR_16);
  VAR_18->dst_addr = FUNC_2(VAR_14);
  if (VAR_24 > 1)
   VAR_18->tsize = FUNC_1(VAR_12);
  else
   VAR_18->tsize = FUNC_1(VAR_15);

  VAR_15 -= VAR_12;
  VAR_14 += VAR_12;
  VAR_18++;
 } while (--VAR_24);

 VAR_19 = FUNC_8(VAR_13, 1);
 if (!VAR_19) {
  FUNC_3(VAR_13->dev, "Failed to allocate a new job\n");
  VAR_23 = -VAR_2;
  goto release_cb;
 }

 VAR_19->id = 0;
 VAR_19->user_cb = VAR_22;
 VAR_19->user_cb->cs_cnt++;
 VAR_19->user_cb_size = VAR_20;
 VAR_19->hw_queue_id = VAR_9;
 VAR_19->patched_cb = VAR_19->user_cb;
 VAR_19->job_cb_size = VAR_19->user_cb_size;

 FUNC_9(VAR_13, VAR_19);

 VAR_23 = FUNC_4(VAR_13, VAR_19);

 FUNC_7(VAR_19->patched_cb);

 FUNC_10(VAR_13, VAR_19);
 FUNC_11(VAR_19);
 VAR_22->cs_cnt--;

release_cb:
 FUNC_7(VAR_22);
 FUNC_5(VAR_13, &VAR_13->kernel_cb_mgr, VAR_22->id << VAR_11);

 return VAR_23;
}
