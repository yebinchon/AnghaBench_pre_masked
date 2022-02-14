
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hva_h264_task {int dummy; } ;
struct hva_h264_ctx {int seq_info; int ref_frame; int rec_frame; int task; } ;
struct hva_dev {scalar_t__ esram_size; } ;
struct TYPE_2__ {scalar_t__ aligned_width; scalar_t__ aligned_height; } ;
struct hva_ctx {int sys_errors; void* priv; int name; TYPE_1__ frameinfo; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 struct device* FUNC_5 (struct hva_ctx*) ;
 struct hva_dev* FUNC_6 (struct hva_ctx*) ;
 int FUNC_7 (struct device*,char*,int ,...) ;
 int FUNC_8 (struct device*,struct hva_h264_ctx*) ;
 struct hva_h264_ctx* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct hva_ctx*,int,char*,int *) ;
 int FUNC_11 (struct hva_ctx*,int ) ;
 int FUNC_12 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct hva_ctx *VAR_5)
{
 struct device *VAR_6 = FUNC_5(VAR_5);
 struct hva_h264_ctx *VAR_7;
 struct hva_dev *VAR_8 = FUNC_6(VAR_5);
 u32 VAR_9 = VAR_5->frameinfo.aligned_width;
 u32 VAR_10 = VAR_5->frameinfo.aligned_height;
 u32 VAR_11;
 int VAR_12;


 VAR_11 = FUNC_4(VAR_9) +
        FUNC_3(VAR_9) +
        FUNC_1(FUNC_12(VAR_9, VAR_10)) +
        FUNC_0(VAR_9);

 if (VAR_8->esram_size < VAR_11) {
  FUNC_7(VAR_6, "%s   not enough esram (max:%d request:%d)\n",
   VAR_5->name, VAR_8->esram_size, VAR_11);
  VAR_12 = -VAR_1;
  goto err;
 }


 VAR_7 = FUNC_9(VAR_6, sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  VAR_12 = -VAR_2;
  goto err;
 }


 VAR_12 = FUNC_10(VAR_5,
       2 * FUNC_2(VAR_9, VAR_10) +
       VAR_4 +
       VAR_0,
       "hva sequence info",
       &VAR_7->seq_info);
 if (VAR_12) {
  FUNC_7(VAR_6,
   "%s   failed to allocate sequence info buffer\n",
   VAR_5->name);
  goto err_ctx;
 }


 VAR_12 = FUNC_10(VAR_5,
       VAR_9 * VAR_10 * 3 / 2,
       "hva reference frame",
       &VAR_7->ref_frame);
 if (VAR_12) {
  FUNC_7(VAR_6, "%s   failed to allocate reference frame buffer\n",
   VAR_5->name);
  goto err_seq_info;
 }


 VAR_12 = FUNC_10(VAR_5,
       VAR_9 * VAR_10 * 3 / 2,
       "hva reconstructed frame",
       &VAR_7->rec_frame);
 if (VAR_12) {
  FUNC_7(VAR_6,
   "%s   failed to allocate reconstructed frame buffer\n",
   VAR_5->name);
  goto err_ref_frame;
 }


 VAR_12 = FUNC_10(VAR_5,
       sizeof(struct hva_h264_task),
       "hva task descriptor",
       &VAR_7->task);
 if (VAR_12) {
  FUNC_7(VAR_6,
   "%s   failed to allocate task descriptor\n",
   VAR_5->name);
  goto err_rec_frame;
 }

 VAR_5->priv = (void *)VAR_7;

 return 0;

err_rec_frame:
 FUNC_11(VAR_5, VAR_7->rec_frame);
err_ref_frame:
 FUNC_11(VAR_5, VAR_7->ref_frame);
err_seq_info:
 FUNC_11(VAR_5, VAR_7->seq_info);
err_ctx:
 FUNC_8(VAR_6, VAR_7);
err:
 VAR_5->sys_errors++;
 return VAR_12;
}
