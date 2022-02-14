
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; } ;
struct via_camera {TYPE_1__ user_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct via_camera*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct via_camera *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_5->user_format.width == VAR_4)
  VAR_6 = 0;
 else {
  VAR_7 = (VAR_5->user_format.width*2048)/VAR_4;
  VAR_6 = VAR_1 | VAR_7;
 }
 if (VAR_5->user_format.height < VAR_3) {
  VAR_7 = (1024*VAR_5->user_format.height)/VAR_3;
  VAR_6 |= VAR_2 | (VAR_7 << 16);
 }
 FUNC_0(VAR_5, VAR_0, VAR_6);
}
