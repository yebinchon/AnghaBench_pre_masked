
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pixelformat; unsigned int width; } ;
struct sh_vou_device {TYPE_1__ pix; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sh_vou_device*,int ,int) ;
 int FUNC_1 (struct sh_vou_device*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct sh_vou_device *VAR_2)
{
 unsigned int VAR_3;



 u32 VAR_4 = 0;


 switch (VAR_2->pix.pixelformat) {
 default:
 case 132:
 case 131:
  VAR_3 = 1;
  break;
 case 129:
  VAR_4 ^= 1;

 case 128:
  VAR_3 = 2;
  break;
 case 130:
  VAR_3 = 3;
  break;
 }

 FUNC_0(VAR_2, VAR_1, VAR_4);
 FUNC_1(VAR_2, VAR_0, VAR_2->pix.width * VAR_3);
}
