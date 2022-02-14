
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {int dec_dst_flag; int inst_no; int dpb_flush_flag; struct s5p_mfc_dev* dev; } ;
typedef enum s5p_mfc_decode_arg { ____Placeholder_s5p_mfc_decode_arg } s5p_mfc_decode_arg ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_2 (struct s5p_mfc_ctx*,int ) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;

__attribute__((used)) static int FUNC_4(struct s5p_mfc_ctx *VAR_7,
     enum s5p_mfc_decode_arg VAR_8)
{
 struct s5p_mfc_dev *VAR_9 = VAR_7->dev;

 FUNC_1(VAR_9, VAR_7->dec_dst_flag, VAR_6);
 FUNC_3(VAR_7);
 FUNC_2(VAR_7, VAR_7->dpb_flush_flag);


 switch (VAR_8) {
 case 130:
  FUNC_1(VAR_9, ((VAR_0 & VAR_3) <<
  VAR_4) | (VAR_7->inst_no), VAR_5);
  break;
 case 129:
  FUNC_1(VAR_9, ((VAR_2 & VAR_3) <<
  VAR_4) | (VAR_7->inst_no), VAR_5);
  break;
 case 128:
  FUNC_1(VAR_9, ((VAR_1 &
  VAR_3) << VAR_4) | (VAR_7->inst_no),
  VAR_5);
  break;
 }
 FUNC_0(2, "Decoding a usual frame\n");
 return 0;
}
