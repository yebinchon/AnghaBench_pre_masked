
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int dummy; } ;
struct venus_format {int pixfmt; } ;
struct v4l2_fmtdesc {int pixelformat; int reserved; int type; int index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct venus_format* FUNC_0 (struct venus_inst*,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct venus_inst* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2, struct v4l2_fmtdesc *VAR_3)
{
 struct venus_inst *VAR_4 = FUNC_2(VAR_1);
 const struct venus_format *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3->index, VAR_3->type);

 FUNC_1(VAR_3->reserved, 0, sizeof(VAR_3->reserved));

 if (!VAR_5)
  return -VAR_0;

 VAR_3->pixelformat = VAR_5->pixfmt;

 return 0;
}
