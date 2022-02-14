
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int dummy; } ;
struct s5p_jpeg_ctx {scalar_t__ mode; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5p_jpeg_ctx*,int ,int ,struct v4l2_fmtdesc*,int ) ;
 struct s5p_jpeg_ctx* FUNC_1 (void*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_5, void *VAR_6,
       struct v4l2_fmtdesc *VAR_7)
{
 struct s5p_jpeg_ctx *VAR_8 = FUNC_1(VAR_6);

 if (VAR_8->mode == VAR_0)
  return FUNC_0(VAR_8, VAR_4, VAR_3, VAR_7,
    VAR_2);

 return FUNC_0(VAR_8, VAR_4, VAR_3, VAR_7,
   VAR_1);
}
