
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c2410_hcd_info {int (* power_control ) (int,int) ;TYPE_1__* port; } ;
struct TYPE_2__ {int power; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct s3c2410_hcd_info *VAR_0,
      int VAR_1, int VAR_2)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->power_control != ((void*)0)) {
  VAR_0->port[VAR_1-1].power = VAR_2;
  (VAR_0->power_control)(VAR_1-1, VAR_2);
 }
}
