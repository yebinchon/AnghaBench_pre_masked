
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vml_par {int dummy; } ;
struct vml_info {int cur_blank_mode; int pipe_disabled; struct vml_par* par; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vml_par*,int ) ;
 int FUNC_1 (struct vml_par*,int ,int) ;
 int FUNC_2 (struct vml_info*) ;
 int FUNC_3 (struct vml_info*) ;

__attribute__((used)) static int FUNC_4(struct vml_info *VAR_3)
{
 struct vml_par *VAR_4 = VAR_3->par;
 u32 VAR_5 = FUNC_0(VAR_4, VAR_1);

 switch (VAR_3->cur_blank_mode) {
 case 129:
  if (VAR_3->pipe_disabled) {
   FUNC_3(VAR_3);
  }
  FUNC_1(VAR_4, VAR_1, VAR_5 & ~VAR_2);
  (void)FUNC_0(VAR_4, VAR_1);
  break;
 case 131:
  if (VAR_3->pipe_disabled) {
   FUNC_3(VAR_3);
  }
  FUNC_1(VAR_4, VAR_1, VAR_5 | VAR_2);
  (void)FUNC_0(VAR_4, VAR_1);
  break;
 case 128:
 case 132:
  if (!VAR_3->pipe_disabled) {
   FUNC_2(VAR_3);
  }
  break;
 case 130:
  if (!VAR_3->pipe_disabled) {
   FUNC_2(VAR_3);
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
