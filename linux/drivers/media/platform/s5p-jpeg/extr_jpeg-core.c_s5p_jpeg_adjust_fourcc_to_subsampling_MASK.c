
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct s5p_jpeg_ctx {int subsampling; } ;
typedef enum v4l2_jpeg_chroma_subsampling { ____Placeholder_v4l2_jpeg_chroma_subsampling } v4l2_jpeg_chroma_subsampling ;


 int FUNC_0 (int *) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static int FUNC_2(
     enum v4l2_jpeg_chroma_subsampling VAR_4,
     u32 VAR_5,
     u32 *VAR_6,
     struct s5p_jpeg_ctx *VAR_7)
{
 int VAR_8;

 if (VAR_7->subsampling != 128) {
  VAR_8 =
   FUNC_1(VAR_5);
  if (VAR_8 < 0)
   return -VAR_0;
 }

 switch (VAR_7->subsampling) {
 case 128:
  *VAR_6 = VAR_1;
  break;
 case 130:
  if (VAR_8 >
    FUNC_0(VAR_2) - 1)
   return -VAR_0;
  *VAR_6 = VAR_2[VAR_8];
  break;
 case 129:
  if (VAR_8 >
    FUNC_0(VAR_3) - 1)
   return -VAR_0;
  *VAR_6 = VAR_3[VAR_8];
  break;
 default:
  *VAR_6 = VAR_1;
  break;
 }

 return 0;
}
