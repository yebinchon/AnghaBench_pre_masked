
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_h264_ctx {scalar_t__ task; scalar_t__ rec_frame; scalar_t__ ref_frame; scalar_t__ seq_info; } ;
struct hva_ctx {scalar_t__ priv; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (struct hva_ctx*) ;
 int FUNC_1 (struct device*,struct hva_h264_ctx*) ;
 int FUNC_2 (struct hva_ctx*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct hva_ctx *VAR_0)
{
 struct hva_h264_ctx *VAR_1 = (struct hva_h264_ctx *)VAR_0->priv;
 struct device *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->seq_info)
  FUNC_2(VAR_0, VAR_1->seq_info);

 if (VAR_1->ref_frame)
  FUNC_2(VAR_0, VAR_1->ref_frame);

 if (VAR_1->rec_frame)
  FUNC_2(VAR_0, VAR_1->rec_frame);

 if (VAR_1->task)
  FUNC_2(VAR_0, VAR_1->task);

 FUNC_1(VAR_2, VAR_1);

 return 0;
}
