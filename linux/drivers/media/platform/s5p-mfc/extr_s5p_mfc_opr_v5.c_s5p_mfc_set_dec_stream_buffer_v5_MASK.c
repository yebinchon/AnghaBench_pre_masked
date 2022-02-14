
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {unsigned int dec_src_buf_size; struct s5p_mfc_dev* dev; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct s5p_mfc_dev*,unsigned int,int ) ;
 int FUNC_2 (struct s5p_mfc_ctx*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(struct s5p_mfc_ctx *VAR_4,
  int VAR_5, unsigned int VAR_6,
  unsigned int VAR_7)
{
 struct s5p_mfc_dev *VAR_8 = VAR_4->dev;

 FUNC_1(VAR_8, FUNC_0(VAR_5), VAR_2);
 FUNC_1(VAR_8, VAR_4->dec_src_buf_size, VAR_0);
 FUNC_1(VAR_8, VAR_7, VAR_1);
 FUNC_2(VAR_4, VAR_6, VAR_3);
 return 0;
}
