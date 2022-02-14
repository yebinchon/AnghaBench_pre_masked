
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int mbx_lock; } ;
struct igbvf_adapter {int max_frame_size; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct e1000_hw*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct igbvf_adapter *VAR_1)
{
 int VAR_2;
 struct e1000_hw *VAR_3 = &VAR_1->hw;

 VAR_2 = VAR_1->max_frame_size + VAR_0;

 FUNC_1(&VAR_3->mbx_lock);

 FUNC_0(VAR_3, VAR_2);

 FUNC_2(&VAR_3->mbx_lock);
}
