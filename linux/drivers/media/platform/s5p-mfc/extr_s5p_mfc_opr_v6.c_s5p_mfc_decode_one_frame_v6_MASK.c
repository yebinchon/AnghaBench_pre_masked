
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_regs {int instance_id; int d_slice_if_enable; int d_available_dpb_flag_lower; } ;
struct s5p_mfc_dev {int mfc_cmds; struct s5p_mfc_regs* mfc_regs; } ;
struct s5p_mfc_ctx {int dec_dst_flag; int slice_interface; int inst_no; struct s5p_mfc_dev* dev; } ;
typedef enum s5p_mfc_decode_arg { ____Placeholder_s5p_mfc_decode_arg } s5p_mfc_decode_arg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,struct s5p_mfc_dev*,int ,int *) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct s5p_mfc_ctx *VAR_4,
   enum s5p_mfc_decode_arg VAR_5)
{
 struct s5p_mfc_dev *VAR_6 = VAR_4->dev;
 const struct s5p_mfc_regs *VAR_7 = VAR_6->mfc_regs;

 FUNC_3(VAR_4->dec_dst_flag, VAR_7->d_available_dpb_flag_lower);
 FUNC_3(VAR_4->slice_interface & 0x1, VAR_7->d_slice_if_enable);

 FUNC_3(VAR_4->inst_no, VAR_7->instance_id);


 switch (VAR_5) {
 case 0:
  FUNC_2(VAR_6->mfc_cmds, VAR_3, VAR_6,
    VAR_1, ((void*)0));
  break;
 case 1:
  FUNC_2(VAR_6->mfc_cmds, VAR_3, VAR_6,
    VAR_2, ((void*)0));
  break;
 default:
  FUNC_1("Unsupported last frame arg.\n");
  return -VAR_0;
 }

 FUNC_0(2, "Decoding a usual frame.\n");
 return 0;
}
