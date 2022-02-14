
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {scalar_t__ codec_mode; int loop_filter_mpeg4; int slice_interface; int display_delay_enable; int display_delay; int inst_no; struct s5p_mfc_dev* dev; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_1 (struct s5p_mfc_ctx*) ;

__attribute__((used)) static int FUNC_2(struct s5p_mfc_ctx *VAR_12)
{
 struct s5p_mfc_dev *VAR_13 = VAR_12->dev;

 FUNC_1(VAR_12);

 if (VAR_12->codec_mode == VAR_11)
  FUNC_0(VAR_13, VAR_12->loop_filter_mpeg4, VAR_6);
 else
  FUNC_0(VAR_13, 0, VAR_6);
 FUNC_0(VAR_13, ((VAR_12->slice_interface & VAR_9) <<
  VAR_10) | (VAR_12->display_delay_enable <<
  VAR_3) | ((VAR_12->display_delay &
  VAR_4) << VAR_5),
  VAR_7);
 FUNC_0(VAR_13,
 ((VAR_1 & VAR_0) << VAR_2)
    | (VAR_12->inst_no), VAR_8);
 return 0;
}
