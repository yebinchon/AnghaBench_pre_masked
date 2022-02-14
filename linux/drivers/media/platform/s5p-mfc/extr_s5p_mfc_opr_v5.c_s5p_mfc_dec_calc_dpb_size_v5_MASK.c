
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {unsigned int buf_width; unsigned int img_width; unsigned int buf_height; unsigned int img_height; scalar_t__ codec_mode; unsigned int luma_size; unsigned int chroma_size; unsigned int mv_size; } ;


 unsigned int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct s5p_mfc_ctx *VAR_4)
{
 unsigned int VAR_5, VAR_6;

 VAR_4->buf_width = FUNC_0(VAR_4->img_width, VAR_1);
 VAR_4->buf_height = FUNC_0(VAR_4->img_height, VAR_2);
 FUNC_1(2,
  "SEQ Done: Movie dimensions %dx%d, buffer dimensions: %dx%d\n",
  VAR_4->img_width, VAR_4->img_height, VAR_4->buf_width,
  VAR_4->buf_height);

 if (VAR_4->codec_mode == VAR_3) {
  VAR_4->luma_size = FUNC_0(VAR_4->buf_width * VAR_4->buf_height,
    VAR_0);
  VAR_4->chroma_size = FUNC_0(VAR_4->buf_width *
    FUNC_0((VAR_4->img_height >> 1),
     VAR_2),
    VAR_0);
  VAR_4->mv_size = FUNC_0(VAR_4->buf_width *
    FUNC_0((VAR_4->buf_height >> 2),
     VAR_2),
    VAR_0);
 } else {
  VAR_5 =
   FUNC_0(VAR_4->img_width + 24, VAR_1);
  VAR_6 =
   FUNC_0(VAR_4->img_height + 16, VAR_2);
  VAR_4->luma_size = FUNC_0(VAR_5 * VAR_6,
    VAR_0);

  VAR_5 =
   FUNC_0(VAR_4->img_width + 16, VAR_1);
  VAR_6 =
   FUNC_0((VAR_4->img_height >> 1) + 4,
     VAR_2);
  VAR_4->chroma_size = FUNC_0(VAR_5 * VAR_6,
    VAR_0);

  VAR_4->mv_size = 0;
 }
}
