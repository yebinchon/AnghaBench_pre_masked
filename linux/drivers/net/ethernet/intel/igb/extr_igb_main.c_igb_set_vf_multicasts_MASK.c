
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef int u16 ;
struct vf_data_storage {int num_vf_mc_hashes; int * vf_mc_hashes; } ;
struct igb_adapter {int netdev; struct vf_data_storage* vf_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct igb_adapter *VAR_2,
      u32 *VAR_3, u32 VAR_4)
{
 int VAR_5 = (VAR_3[0] & VAR_0) >> VAR_1;
 u16 *VAR_6 = (u16 *)&VAR_3[1];
 struct vf_data_storage *VAR_7 = &VAR_2->vf_data[VAR_4];
 int VAR_8;





 VAR_7->num_vf_mc_hashes = VAR_5;


 if (VAR_5 > 30)
  VAR_5 = 30;


 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
  VAR_7->vf_mc_hashes[VAR_8] = VAR_6[VAR_8];


 FUNC_0(VAR_2->netdev);

 return 0;
}
