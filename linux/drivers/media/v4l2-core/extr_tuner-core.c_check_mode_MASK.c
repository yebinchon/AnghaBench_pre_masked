
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuner {int mode_mask; } ;
typedef enum v4l2_tuner_type { ____Placeholder_v4l2_tuner_type } v4l2_tuner_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_0(struct tuner *VAR_4, enum v4l2_tuner_type VAR_5)
{
 int VAR_6;
 if (VAR_5 == VAR_3)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;

 if ((VAR_6 & VAR_4->mode_mask) == 0)
  return -VAR_0;

 return 0;
}
