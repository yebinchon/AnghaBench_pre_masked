
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fmtdesc {int dummy; } ;
struct jpu_ctx {scalar_t__ encoder; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jpu_ctx* FUNC_0 (void*) ;
 int FUNC_1 (struct v4l2_fmtdesc*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
       struct v4l2_fmtdesc *VAR_4)
{
 struct jpu_ctx *VAR_5 = FUNC_0(VAR_3);

 return FUNC_1(VAR_4, VAR_5->encoder ? VAR_1 : VAR_0);
}
