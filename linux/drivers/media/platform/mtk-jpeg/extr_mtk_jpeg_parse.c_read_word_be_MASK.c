
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_jpeg_stream {int dummy; } ;


 int FUNC_0 (struct mtk_jpeg_stream*) ;

__attribute__((used)) static int FUNC_1(struct mtk_jpeg_stream *VAR_0, u32 *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == -1)
  return -1;
 VAR_2 = VAR_3 << 8;
 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == -1)
  return -1;
 *VAR_1 = (u32)VAR_3 | VAR_2;

 return 0;
}
