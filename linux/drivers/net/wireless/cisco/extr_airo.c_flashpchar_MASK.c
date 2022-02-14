
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct airo_info {TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct airo_info*,int ) ;
 int FUNC_1 (struct airo_info*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct airo_info *VAR_4,int VAR_5,int VAR_6) {
 int VAR_7;
 int VAR_8;

 VAR_5 |= 0x8000;

 if(VAR_6 == 0 )
  VAR_6 = 200;

 VAR_8=VAR_6;


 while ((FUNC_0 (VAR_4, VAR_2) & 0x8000) && VAR_8 > 0) {
  FUNC_3 (50);
  VAR_8 -= 50;
 }


 if(VAR_8 <= 0 ){
  FUNC_2(VAR_4->dev->name, "flash putchar busywait timeout!");
  return -VAR_0;
 }


 do {
  FUNC_1(VAR_4,VAR_2,VAR_5);
  FUNC_3(50);
  VAR_6 -= 50;
  VAR_7 = FUNC_0(VAR_4,VAR_3);
 } while (VAR_6 >= 0 && VAR_7 != VAR_5);

 FUNC_1(VAR_4,VAR_3,0);

 return (VAR_7 == VAR_5) ? 0 : -VAR_1;
}
