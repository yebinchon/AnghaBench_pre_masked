
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {int norm; int height; int width; } ;


 int VAR_0 ;

void FUNC_0(struct tm6000_core *VAR_1)
{

 if (VAR_1->norm & VAR_0)
  VAR_1->height = 480;
 else
  VAR_1->height = 576;

 VAR_1->width = 720;
}
