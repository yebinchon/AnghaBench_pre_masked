
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_ctx {unsigned int img_width; void* chroma_size; void* luma_size; int dev; void* buf_width; int img_height; } ;


 void* FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct s5p_mfc_ctx *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_3->img_width);
 VAR_5 = FUNC_2(VAR_3->img_height);

 VAR_3->buf_width = FUNC_0(VAR_3->img_width, VAR_2);
 VAR_3->luma_size = FUNC_0((VAR_4 * VAR_5) * 256, 256);
 VAR_3->chroma_size = FUNC_0((VAR_4 * VAR_5) * 128, 256);


 if (FUNC_1(VAR_3->dev)) {
  VAR_3->luma_size += VAR_1;
  VAR_3->chroma_size += VAR_0;
 }
}
