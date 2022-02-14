
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int lastkt; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 size_t VAR_4 ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0();
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_5(&VAR_2[VAR_4].lock, VAR_6);

 VAR_3.lastkt = FUNC_1();
 FUNC_4(VAR_0, FUNC_3(VAR_0) | VAR_1);
 FUNC_2();

 FUNC_6(&VAR_2[VAR_4].lock, VAR_6);

 return 0;
}
