
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int instance_id; int e_source_second_plane_stride; int e_source_first_plane_stride; } ;
struct s5p_mfc_dev {int mfc_cmds; struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {scalar_t__ codec_mode; int inst_no; int img_width; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int ,int ,struct s5p_mfc_dev*,int ,int *) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (struct s5p_mfc_ctx*) ;
 int FUNC_5 (struct s5p_mfc_ctx*) ;
 int FUNC_6 (struct s5p_mfc_ctx*) ;
 int FUNC_7 (struct s5p_mfc_ctx*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct s5p_mfc_ctx *VAR_8)
{
 struct s5p_mfc_dev *VAR_9 = VAR_8->dev;
 const struct s5p_mfc_regs *VAR_10 = VAR_9->mfc_regs;

 if (VAR_8->codec_mode == VAR_4)
  FUNC_4(VAR_8);
 else if (VAR_8->codec_mode == VAR_5)
  FUNC_6(VAR_8);
 else if (VAR_8->codec_mode == VAR_3)
  FUNC_3(VAR_8);
 else if (VAR_8->codec_mode == VAR_6)
  FUNC_7(VAR_8);
 else if (VAR_8->codec_mode == VAR_2)
  FUNC_5(VAR_8);
 else {
  FUNC_1("Unknown codec for encoding (%x).\n",
   VAR_8->codec_mode);
  return -VAR_0;
 }


 if (FUNC_0(VAR_9)) {
  FUNC_8(VAR_8->img_width, VAR_10->e_source_first_plane_stride);
  FUNC_8(VAR_8->img_width, VAR_10->e_source_second_plane_stride);
 }

 FUNC_8(VAR_8->inst_no, VAR_10->instance_id);
 FUNC_2(VAR_9->mfc_cmds, VAR_7, VAR_9,
   VAR_1, ((void*)0));

 return 0;
}
