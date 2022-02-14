
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {scalar_t__ chip_id; scalar_t__ is_webcam; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct em28xx *VAR_3)
{

 if (VAR_2 == 1)
  return 0;

 if (VAR_3->is_webcam)
  return 0;



 if (VAR_3->chip_id == VAR_0 ||
     VAR_3->chip_id == VAR_1)
  return 1;


 return 0;
}
