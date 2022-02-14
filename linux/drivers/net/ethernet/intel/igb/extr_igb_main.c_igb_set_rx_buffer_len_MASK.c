
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igb_ring {int dummy; } ;
struct igb_adapter {int flags; scalar_t__ max_frame_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct igb_ring*) ;
 int FUNC_1 (struct igb_ring*) ;
 int FUNC_2 (struct igb_ring*) ;
 int FUNC_3 (struct igb_ring*) ;

__attribute__((used)) static void FUNC_4(struct igb_adapter *VAR_2,
      struct igb_ring *VAR_3)
{

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);

 if (VAR_2->flags & VAR_0)
  return;

 FUNC_2(VAR_3);


 if (VAR_2->max_frame_size <= VAR_1)
  return;

 FUNC_3(VAR_3);

}
