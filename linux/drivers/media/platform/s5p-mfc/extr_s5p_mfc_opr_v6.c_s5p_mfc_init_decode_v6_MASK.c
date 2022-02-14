
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_regs {int instance_id; int d_sei_enable; int pixel_format; int d_dec_options; int d_init_buffer_options; int d_display_delay; int d_cpb_buffer_addr; } ;
struct s5p_mfc_dev {int mfc_cmds; struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {int inst_no; int display_delay; scalar_t__ codec_mode; unsigned int loop_filter_mpeg4; int sei_fp_parse; TYPE_1__* dst_fmt; scalar_t__ display_delay_enable; struct s5p_mfc_dev* dev; } ;
struct TYPE_2__ {scalar_t__ fourcc; } ;


 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_1 (struct s5p_mfc_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int,char*,unsigned int,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,struct s5p_mfc_dev*,int ,int *) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct s5p_mfc_ctx *VAR_9)
{
 struct s5p_mfc_dev *VAR_10 = VAR_9->dev;
 const struct s5p_mfc_regs *VAR_11 = VAR_10->mfc_regs;
 unsigned int VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_3();
 FUNC_2(2, "InstNo: %d/%d\n", VAR_9->inst_no,
   VAR_0);
 FUNC_2(2, "BUFs: %08x %08x %08x\n",
    FUNC_5(VAR_11->d_cpb_buffer_addr),
    FUNC_5(VAR_11->d_cpb_buffer_addr),
    FUNC_5(VAR_11->d_cpb_buffer_addr));


 VAR_12 |= (VAR_13 << VAR_2);

 if (VAR_9->display_delay_enable) {
  VAR_12 |= (0x1 << VAR_1);
  FUNC_7(VAR_9->display_delay, VAR_11->d_display_delay);
 }

 if (FUNC_1(VAR_10) || FUNC_0(VAR_10)) {
  FUNC_7(VAR_12, VAR_11->d_dec_options);
  VAR_12 = 0;
 }


 if (VAR_9->codec_mode == VAR_5) {
  FUNC_2(2, "Set loop filter to: %d\n",
    VAR_9->loop_filter_mpeg4);
  VAR_12 |= (VAR_9->loop_filter_mpeg4 <<
    VAR_3);
 }
 if (VAR_9->dst_fmt->fourcc == VAR_6)
  VAR_12 |= (0x1 << VAR_4);

 if (FUNC_1(VAR_10) || FUNC_0(VAR_10))
  FUNC_7(VAR_12, VAR_11->d_init_buffer_options);
 else
  FUNC_7(VAR_12, VAR_11->d_dec_options);


 if (VAR_9->dst_fmt->fourcc == VAR_7)
  FUNC_7(0x1, VAR_11->pixel_format);
 else
  FUNC_7(0x0, VAR_11->pixel_format);



 FUNC_7(VAR_9->sei_fp_parse & 0x1, VAR_11->d_sei_enable);

 FUNC_7(VAR_9->inst_no, VAR_11->instance_id);
 FUNC_6(VAR_10->mfc_cmds, VAR_8, VAR_10,
   VAR_0, ((void*)0));

 FUNC_4();
 return 0;
}
