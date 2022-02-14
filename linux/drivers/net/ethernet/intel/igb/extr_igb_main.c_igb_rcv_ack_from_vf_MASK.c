
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vf_data_storage {int flags; scalar_t__ last_nack; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct vf_data_storage* vf_data; struct e1000_hw hw; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*,size_t*,int,size_t) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct igb_adapter *VAR_4, u32 VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_4->hw;
 struct vf_data_storage *VAR_7 = &VAR_4->vf_data[VAR_5];
 u32 VAR_8 = VAR_0;


 if (!(VAR_7->flags & VAR_2) &&
     FUNC_1(VAR_3, VAR_7->last_nack + (2 * VAR_1))) {
  FUNC_0(VAR_6, &VAR_8, 1, VAR_5);
  VAR_7->last_nack = VAR_3;
 }
}
