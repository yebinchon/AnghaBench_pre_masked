
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7280_state {int readback_delay_us; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct ad7280_state *VAR_0)
{
 if (VAR_0->readback_delay_us < 50)
  FUNC_0(VAR_0->readback_delay_us);
 else
  FUNC_1(250, 500);
}
