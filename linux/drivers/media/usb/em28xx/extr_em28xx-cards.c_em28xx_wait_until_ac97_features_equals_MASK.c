
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct em28xx {TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct em28xx*,int ) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct em28xx *VAR_4,
        int VAR_5)
{
 unsigned long VAR_6 = VAR_3 + FUNC_2(2000);
 int VAR_7, VAR_8;

 while (FUNC_4(VAR_6)) {
  VAR_7 = FUNC_1(VAR_4, VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_8 = FUNC_1(VAR_4, VAR_0);
  if (VAR_8 < 0)
   return VAR_8;

  if (VAR_7 == VAR_5 && VAR_7 != VAR_8)
   return 0;

  FUNC_3(50);
 }

 FUNC_0(&VAR_4->intf->dev, "AC97 registers access is not reliable !\n");
 return -VAR_2;
}
