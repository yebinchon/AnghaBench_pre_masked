
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {scalar_t__ memory; scalar_t__ type; } ;
struct s5p_mfc_dev {int dummy; } ;
struct s5p_mfc_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct s5p_mfc_ctx* FUNC_0 (void*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s5p_mfc_dev*,struct s5p_mfc_ctx*,struct v4l2_requestbuffers*) ;
 int FUNC_4 (struct s5p_mfc_dev*,struct s5p_mfc_ctx*,struct v4l2_requestbuffers*) ;
 struct s5p_mfc_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_4, void *VAR_5,
       struct v4l2_requestbuffers *VAR_6)
{
 struct s5p_mfc_dev *VAR_7 = FUNC_5(VAR_4);
 struct s5p_mfc_ctx *VAR_8 = FUNC_0(VAR_5);

 if (VAR_6->memory != VAR_3) {
  FUNC_1(2, "Only V4L2_MEMORY_MMAP is supported\n");
  return -VAR_0;
 }

 if (VAR_6->type == VAR_2) {
  return FUNC_4(VAR_7, VAR_8, VAR_6);
 } else if (VAR_6->type == VAR_1) {
  return FUNC_3(VAR_7, VAR_8, VAR_6);
 } else {
  FUNC_2("Invalid type requested\n");
  return -VAR_0;
 }
}
