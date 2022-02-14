
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {scalar_t__ state; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct efx_nic* FUNC_0 (struct device*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2)
{
 struct efx_nic *VAR_3 = FUNC_0(VAR_2);

 FUNC_4();

 if (VAR_3->state != VAR_0) {
  VAR_3->state = VAR_1;

  FUNC_1(VAR_3);

  FUNC_3(VAR_3);
  FUNC_2(VAR_3);
 }

 FUNC_5();

 return 0;
}
