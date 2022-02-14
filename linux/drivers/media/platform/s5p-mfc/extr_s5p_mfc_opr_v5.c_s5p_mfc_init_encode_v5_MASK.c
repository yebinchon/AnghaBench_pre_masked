
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {scalar_t__ codec_mode; int inst_no; struct s5p_mfc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct s5p_mfc_dev*,int,int ) ;
 int FUNC_2 (struct s5p_mfc_ctx*) ;
 int FUNC_3 (struct s5p_mfc_ctx*) ;
 int FUNC_4 (struct s5p_mfc_ctx*) ;
 int FUNC_5 (struct s5p_mfc_ctx*) ;

__attribute__((used)) static int FUNC_6(struct s5p_mfc_ctx *VAR_6)
{
 struct s5p_mfc_dev *VAR_7 = VAR_6->dev;

 if (VAR_6->codec_mode == VAR_4)
  FUNC_3(VAR_6);
 else if (VAR_6->codec_mode == VAR_5)
  FUNC_4(VAR_6);
 else if (VAR_6->codec_mode == VAR_3)
  FUNC_2(VAR_6);
 else {
  FUNC_0("Unknown codec for encoding (%x)\n",
   VAR_6->codec_mode);
  return -VAR_0;
 }
 FUNC_5(VAR_6);
 FUNC_1(VAR_7, ((VAR_1 << 16) & 0x70000) |
  (VAR_6->inst_no), VAR_2);
 return 0;
}
