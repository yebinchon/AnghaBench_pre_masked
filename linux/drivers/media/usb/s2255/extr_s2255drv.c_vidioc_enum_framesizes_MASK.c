
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frmsizeenum {size_t index; int discrete; int type; int pixel_format; } ;
struct s2255_vc {int std; } ;
struct s2255_fmt {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct s2255_fmt* FUNC_0 (int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 struct s2255_vc* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
       struct v4l2_frmsizeenum *VAR_8)
{
 struct s2255_vc *VAR_9 = FUNC_1(VAR_6);
 int VAR_10 = VAR_9->std & VAR_3;
 const struct s2255_fmt *VAR_11;

 if (VAR_8->index >= VAR_1)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_8->pixel_format);
 if (VAR_11 == ((void*)0))
  return -VAR_0;
 VAR_8->type = VAR_2;
 VAR_8->discrete = VAR_10 ? VAR_4[VAR_8->index] : VAR_5[VAR_8->index];
 return 0;
}
