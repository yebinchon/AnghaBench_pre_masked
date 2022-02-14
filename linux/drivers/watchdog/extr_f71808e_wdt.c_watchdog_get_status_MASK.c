
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; scalar_t__ caused_reboot; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_1.lock);
 VAR_2 = (VAR_1.caused_reboot) ? VAR_0 : 0;
 FUNC_1(&VAR_1.lock);

 return VAR_2;
}
