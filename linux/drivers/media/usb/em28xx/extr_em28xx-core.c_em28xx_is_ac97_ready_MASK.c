
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
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct em28xx *VAR_4)
{
 unsigned long VAR_5 = VAR_3 + FUNC_2(VAR_1);
 int VAR_6;


 while (FUNC_4(VAR_5)) {
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if (VAR_6 < 0)
   return VAR_6;

  if (!(VAR_6 & 0x01))
   return 0;
  FUNC_3(5);
 }

 FUNC_0(&VAR_4->intf->dev,
   "AC97 command still being executed: not handled properly!\n");
 return -VAR_0;
}
