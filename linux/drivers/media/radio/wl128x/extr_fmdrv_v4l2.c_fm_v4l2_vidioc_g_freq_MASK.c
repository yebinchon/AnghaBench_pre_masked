
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_frequency {int frequency; } ;
struct fmdev {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct fmdev*,int*) ;
 int FUNC_1 (char*) ;
 struct fmdev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, void *VAR_1,
  struct v4l2_frequency *VAR_2)
{
 struct fmdev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, &VAR_2->frequency);
 if (VAR_4 < 0) {
  FUNC_1("Failed to get frequency\n");
  return VAR_4;
 }


 VAR_2->frequency = (u32) VAR_2->frequency * 16;

 return 0;
}
