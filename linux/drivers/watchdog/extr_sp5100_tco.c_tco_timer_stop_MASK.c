
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct watchdog_device {int dummy; } ;
struct sp5100_tco {int tcobase; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct sp5100_tco* FUNC_2 (struct watchdog_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct watchdog_device *VAR_1)
{
 struct sp5100_tco *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3;

 VAR_3 = FUNC_1(FUNC_0(VAR_2->tcobase));
 VAR_3 &= ~VAR_0;
 FUNC_3(VAR_3, FUNC_0(VAR_2->tcobase));

 return 0;
}
