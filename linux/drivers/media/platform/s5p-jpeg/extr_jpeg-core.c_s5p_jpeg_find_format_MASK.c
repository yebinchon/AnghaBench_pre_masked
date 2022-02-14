
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct s5p_jpeg_fmt {scalar_t__ fourcc; unsigned int flags; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; TYPE_2__* jpeg; } ;
struct TYPE_4__ {TYPE_1__* variant; } ;
struct TYPE_3__ {int fmt_ver_flag; } ;


 unsigned int FUNC_0 (struct s5p_jpeg_fmt*) ;
 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct s5p_jpeg_fmt* VAR_6 ;

__attribute__((used)) static struct s5p_jpeg_fmt *FUNC_1(struct s5p_jpeg_ctx *VAR_7,
    u32 VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10, VAR_11;

 if (VAR_7->mode == VAR_1)
  VAR_11 = (VAR_9 == VAR_0) ?
    VAR_5 :
    VAR_4;
 else
  VAR_11 = (VAR_9 == VAR_0) ?
    VAR_3 :
    VAR_2;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_6); VAR_10++) {
  struct s5p_jpeg_fmt *VAR_12 = &VAR_6[VAR_10];

  if (VAR_12->fourcc == VAR_8 &&
      VAR_12->flags & VAR_11 &&
      VAR_12->flags & VAR_7->jpeg->variant->fmt_ver_flag) {
   return VAR_12;
  }
 }

 return ((void*)0);
}
