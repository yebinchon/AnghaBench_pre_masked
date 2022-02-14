
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_tuner {scalar_t__ audmode; scalar_t__ index; } ;
struct radio_tea5777 {scalar_t__ audmode; scalar_t__ band; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct radio_tea5777*) ;
 struct radio_tea5777* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     const struct v4l2_tuner *VAR_5)
{
 struct radio_tea5777 *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = VAR_6->audmode;

 if (VAR_5->index)
  return -VAR_1;

 VAR_6->audmode = VAR_5->audmode;
 if (VAR_6->audmode > VAR_2)
  VAR_6->audmode = VAR_2;

 if (VAR_6->audmode != VAR_7 && VAR_6->band == VAR_0)
  return FUNC_0(VAR_6);

 return 0;
}
