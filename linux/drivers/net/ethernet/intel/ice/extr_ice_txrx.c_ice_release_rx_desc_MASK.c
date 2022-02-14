
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ice_ring {int next_to_use; int next_to_alloc; int tail; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct ice_ring *VAR_0, u32 VAR_1)
{
 u16 VAR_2 = VAR_0->next_to_use;

 VAR_0->next_to_use = VAR_1;


 VAR_0->next_to_alloc = VAR_1;






 VAR_1 &= ~0x7;
 if (VAR_2 != VAR_1) {





  FUNC_0();
  FUNC_1(VAR_1, VAR_0->tail);
 }
}
