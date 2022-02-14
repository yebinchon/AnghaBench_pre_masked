
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int irq_enabled; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
 const int VAR_2 = FUNC_3();
 u32 VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  VAR_3 |= FUNC_2(VAR_5);

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  VAR_3 |= FUNC_1(VAR_5);

 VAR_4 = FUNC_4(VAR_0, ((void*)0), VAR_3);
 FUNC_0(VAR_4);

 VAR_1.irq_enabled = 1;
}
