
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct vf_data_storage {int num_vf_mc_hashes; int* vf_mc_hashes; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; struct vf_data_storage* vfinfo; } ;


 size_t FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (struct ixgbe_hw*,int ,size_t) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct ixgbe_adapter *VAR_4,
       u32 *VAR_5, u32 VAR_6)
{
 int VAR_7 = (VAR_5[0] & VAR_2)
         >> VAR_3;
 u16 *VAR_8 = (u16 *)&VAR_5[1];
 struct vf_data_storage *VAR_9 = &VAR_4->vfinfo[VAR_6];
 struct ixgbe_hw *VAR_10 = &VAR_4->hw;
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u32 VAR_15 = FUNC_2(VAR_10, FUNC_3(VAR_6));


 VAR_7 = FUNC_5(VAR_7, VAR_0);






 VAR_9->num_vf_mc_hashes = VAR_7;





 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_9->vf_mc_hashes[VAR_11] = VAR_8[VAR_11];
 }

 for (VAR_11 = 0; VAR_11 < VAR_9->num_vf_mc_hashes; VAR_11++) {
  VAR_13 = (VAR_9->vf_mc_hashes[VAR_11] >> 5) & 0x7F;
  VAR_12 = VAR_9->vf_mc_hashes[VAR_11] & 0x1F;
  VAR_14 = FUNC_2(VAR_10, FUNC_1(VAR_13));
  VAR_14 |= FUNC_0(VAR_12);
  FUNC_4(VAR_10, FUNC_1(VAR_13), VAR_14);
 }
 VAR_15 |= VAR_1;
 FUNC_4(VAR_10, FUNC_3(VAR_6), VAR_15);

 return 0;
}
