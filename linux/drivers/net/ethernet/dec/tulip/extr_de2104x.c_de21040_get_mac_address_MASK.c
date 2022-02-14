
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct de_private {TYPE_1__* dev; } ;
struct TYPE_2__ {int* dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct de_private *VAR_1)
{
 unsigned VAR_2;

 FUNC_1 (VAR_0, 0);
 FUNC_4(5);

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  int VAR_3, VAR_4 = 100000;
  do {
   VAR_3 = FUNC_0(VAR_0);
   FUNC_3();
  } while (VAR_3 < 0 && --VAR_4 > 0);
  VAR_1->dev->dev_addr[VAR_2] = VAR_3;
  FUNC_4(1);
  if (VAR_4 <= 0)
   FUNC_2("timeout reading 21040 MAC address byte %u\n",
    VAR_2);
 }
}
