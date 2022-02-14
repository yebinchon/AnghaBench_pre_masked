
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct igb_adapter {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct igb_adapter*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_3)
{
 u32 VAR_4;


 if (!(VAR_3->flags & VAR_1))
  return;


 VAR_3->flags &= ~VAR_1;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4 += VAR_2)
  FUNC_0(VAR_3, VAR_4);
}
