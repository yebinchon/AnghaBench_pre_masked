
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct anybus_mbox_hdr {void* extended; void* offset_low; void* offset_high; void* frame_num; void* frame_count; void* data_size; void* cmd_num; void* info; } ;
struct mbox_priv {void* msg; size_t msg_out_sz; size_t msg_in_sz; struct anybus_mbox_hdr hdr; } ;
struct anybuss_host {int dev; int wq; int qlock; int powerq; int qcache; } ;
struct ab_task {struct mbox_priv mbox_pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 struct ab_task* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ab_task*,int ,int *,int *) ;
 int FUNC_2 (struct ab_task*) ;
 void* FUNC_3 (int) ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (int ,struct mbox_priv*) ;
 int FUNC_6 (void*,void const*,size_t) ;
 int FUNC_7 (struct anybus_mbox_hdr*,int ,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct anybuss_host *VAR_7,
       u16 VAR_8, bool VAR_9,
    const void *VAR_10, size_t VAR_11,
    void *VAR_12, size_t VAR_13,
    const void *VAR_14, size_t VAR_15)
{
 struct ab_task *VAR_16;
 struct mbox_priv *VAR_17;
 struct anybus_mbox_hdr *VAR_18;
 size_t VAR_19 = FUNC_4(VAR_13, VAR_11);
 u16 VAR_20;
 int VAR_21;

 if (VAR_19 > VAR_5)
  return -VAR_0;
 if (VAR_14 && VAR_15 > sizeof(VAR_18->extended))
  return -VAR_0;
 VAR_16 = FUNC_0(VAR_7->qcache, VAR_6);
 if (!VAR_16)
  return -VAR_1;
 VAR_17 = &VAR_16->mbox_pd;
 VAR_18 = &VAR_17->hdr;
 VAR_20 = VAR_9 ? VAR_4 : VAR_3;




 FUNC_7(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->info = FUNC_3(VAR_20 | VAR_2);
 VAR_18->cmd_num = FUNC_3(VAR_8);
 VAR_18->data_size = FUNC_3(VAR_11);
 VAR_18->frame_count = FUNC_3(1);
 VAR_18->frame_num = FUNC_3(1);
 VAR_18->offset_high = FUNC_3(0);
 VAR_18->offset_low = FUNC_3(0);
 if (VAR_14)
  FUNC_6(VAR_18->extended, VAR_14, VAR_15);
 FUNC_6(VAR_17->msg, VAR_10, VAR_11);
 VAR_17->msg_out_sz = VAR_11;
 VAR_17->msg_in_sz = VAR_13;
 VAR_21 = FUNC_1(VAR_16, VAR_7->powerq, &VAR_7->qlock, &VAR_7->wq);
 if (VAR_21)
  goto out;




 VAR_21 = FUNC_5(VAR_7->dev, VAR_17);
 if (VAR_21)
  goto out;
 FUNC_6(VAR_12, VAR_17->msg, VAR_13);
out:
 FUNC_2(VAR_16);
 return VAR_21;
}
