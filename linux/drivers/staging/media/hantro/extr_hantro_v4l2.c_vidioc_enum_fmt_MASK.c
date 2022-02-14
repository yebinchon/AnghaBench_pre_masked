
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {unsigned int index; int pixelformat; } ;
struct hantro_fmt {scalar_t__ codec_mode; int fourcc; } ;
struct hantro_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hantro_ctx* FUNC_0 (void*) ;
 struct hantro_fmt* FUNC_1 (struct hantro_ctx*,unsigned int*) ;
 int FUNC_2 (struct hantro_ctx*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
      struct v4l2_fmtdesc *VAR_4, bool VAR_5)

{
 struct hantro_ctx *VAR_6 = FUNC_0(VAR_3);
 const struct hantro_fmt *VAR_7, *VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11 = 0;
 bool VAR_12;
 VAR_12 = VAR_5 == FUNC_2(VAR_6);

 VAR_8 = FUNC_1(VAR_6, &VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  bool VAR_13 = VAR_8[VAR_10].codec_mode == VAR_1;

  if (VAR_12 == VAR_13)
   continue;
  if (VAR_11 == VAR_4->index) {
   VAR_7 = &VAR_8[VAR_10];
   VAR_4->pixelformat = VAR_7->fourcc;
   return 0;
  }
  ++VAR_11;
 }
 return -VAR_0;
}
