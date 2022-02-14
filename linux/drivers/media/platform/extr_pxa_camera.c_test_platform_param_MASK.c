
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int platform_flags; int width_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;

__attribute__((used)) static int FUNC_0(struct pxa_camera_dev *VAR_11,
          unsigned char VAR_12, unsigned long *VAR_13)
{





 *VAR_13 = (VAR_11->platform_flags & VAR_1 ?
    VAR_5 : VAR_8) |
  VAR_3 |
  VAR_4 |
  VAR_9 |
  VAR_10 |
  VAR_2 |
  VAR_7 |
  VAR_6;


 if ((1 << (VAR_12 - 1)) & VAR_11->width_flags)
  return 0;

 return -VAR_0;
}
