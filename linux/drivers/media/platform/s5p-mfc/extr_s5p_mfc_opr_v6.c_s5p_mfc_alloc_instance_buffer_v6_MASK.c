
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct s5p_mfc_dev {TYPE_2__* variant; } ;
struct TYPE_6__ {int size; int virt; } ;
struct s5p_mfc_ctx {int codec_mode; TYPE_3__ ctx; struct s5p_mfc_dev* dev; } ;
struct s5p_mfc_buf_size_v6 {int other_enc_ctx; int hevc_enc_ctx; int h264_enc_ctx; int other_dec_ctx; int h264_dec_ctx; } ;
struct TYPE_5__ {TYPE_1__* buf_size; } ;
struct TYPE_4__ {struct s5p_mfc_buf_size_v6* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct s5p_mfc_dev*,int ,TYPE_3__*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct s5p_mfc_ctx *VAR_1)
{
 struct s5p_mfc_dev *VAR_2 = VAR_1->dev;
 struct s5p_mfc_buf_size_v6 *VAR_3 = VAR_2->variant->buf_size->priv;
 int VAR_4;

 FUNC_1();

 switch (VAR_1->codec_mode) {
 case 140:
 case 138:
 case 137:
  VAR_1->ctx.size = VAR_3->h264_dec_ctx;
  break;
 case 134:
 case 142:
 case 132:
 case 131:
 case 135:
 case 130:
 case 128:
  VAR_1->ctx.size = VAR_3->other_dec_ctx;
  break;
 case 139:
  VAR_1->ctx.size = VAR_3->h264_enc_ctx;
  break;
 case 136:
  VAR_1->ctx.size = VAR_3->hevc_enc_ctx;
  break;
 case 133:
 case 141:
 case 129:
  VAR_1->ctx.size = VAR_3->other_enc_ctx;
  break;
 default:
  VAR_1->ctx.size = 0;
  FUNC_3("Codec type(%d) should be checked!\n", VAR_1->codec_mode);
  break;
 }

 VAR_4 = FUNC_4(VAR_2, VAR_0, &VAR_1->ctx);
 if (VAR_4) {
  FUNC_3("Failed to allocate instance buffer\n");
  return VAR_4;
 }

 FUNC_0(VAR_1->ctx.virt, 0, VAR_1->ctx.size);
 FUNC_5();

 FUNC_2();

 return 0;
}
