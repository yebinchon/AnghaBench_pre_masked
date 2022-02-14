
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct sh_veu_format {int dummy; } ;
struct file {int dummy; } ;


 struct sh_veu_format* FUNC_0 (struct v4l2_format*) ;
 int FUNC_1 (struct v4l2_format*,struct sh_veu_format const*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
      struct v4l2_format *VAR_2)
{
 const struct sh_veu_format *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_2, VAR_3);
}
