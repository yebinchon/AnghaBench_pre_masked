
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_ctrl_mpeg2_quantization {int * chroma_non_intra_quantiser_matrix; int * chroma_intra_quantiser_matrix; int * non_intra_quantiser_matrix; int * intra_quantiser_matrix; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;

void FUNC_1(u8 *VAR_1,
 const struct v4l2_ctrl_mpeg2_quantization *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_1 || !VAR_2)
  return;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_4 = VAR_0[VAR_3];
  VAR_1[VAR_4 + 0] = VAR_2->intra_quantiser_matrix[VAR_3];
  VAR_1[VAR_4 + 64] = VAR_2->non_intra_quantiser_matrix[VAR_3];
  VAR_1[VAR_4 + 128] = VAR_2->chroma_intra_quantiser_matrix[VAR_3];
  VAR_1[VAR_4 + 192] = VAR_2->chroma_non_intra_quantiser_matrix[VAR_3];
 }
}
