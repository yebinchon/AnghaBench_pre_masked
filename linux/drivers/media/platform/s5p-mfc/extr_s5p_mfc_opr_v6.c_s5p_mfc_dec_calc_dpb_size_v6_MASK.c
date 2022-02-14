
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {int img_width; int img_height; scalar_t__ codec_mode; int mv_size; void* chroma_size; void* luma_size; struct s5p_mfc_dev* dev; void* buf_height; void* buf_width; } ;


 void* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_2 (struct s5p_mfc_dev*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 void* FUNC_5 (int,int) ;
 int FUNC_6 (int,char*,int,int,void*,void*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct s5p_mfc_ctx *VAR_6)
{
 struct s5p_mfc_dev *VAR_7 = VAR_6->dev;
 VAR_6->buf_width = FUNC_0(VAR_6->img_width, VAR_1);
 VAR_6->buf_height = FUNC_0(VAR_6->img_height, VAR_2);
 FUNC_6(2, "SEQ Done: Movie dimensions %dx%d,\n"
   "buffer dimensions: %dx%d\n", VAR_6->img_width,
   VAR_6->img_height, VAR_6->buf_width, VAR_6->buf_height);

 VAR_6->luma_size = FUNC_5(VAR_6->img_width, VAR_6->img_height);
 VAR_6->chroma_size = FUNC_5(VAR_6->img_width, (VAR_6->img_height >> 1));
 if (FUNC_2(VAR_6->dev)) {

  VAR_6->luma_size += VAR_0;
  VAR_6->chroma_size += VAR_0;
 }

 if (VAR_6->codec_mode == VAR_3 ||
   VAR_6->codec_mode == VAR_4) {
  if (FUNC_1(VAR_7)) {
   VAR_6->mv_size = FUNC_3(VAR_6->img_width,
     VAR_6->img_height);
  } else {
   VAR_6->mv_size = FUNC_4(VAR_6->img_width,
     VAR_6->img_height);
  }
 } else if (VAR_6->codec_mode == VAR_5) {
  VAR_6->mv_size = FUNC_7(VAR_6->img_width,
    VAR_6->img_height);
  VAR_6->mv_size = FUNC_0(VAR_6->mv_size, 32);
 } else {
  VAR_6->mv_size = 0;
 }
}
