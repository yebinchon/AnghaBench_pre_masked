
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vf_data_storage {int pf_vlan; int pf_qos; scalar_t__ num_vf_mc_hashes; int last_nack; int flags; } ;
struct igb_adapter {int netdev; struct vf_data_storage* vf_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct igb_adapter*,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct igb_adapter*,int,int,size_t) ;
 int FUNC_3 (struct igb_adapter*,size_t,int) ;
 int FUNC_4 (struct igb_adapter*,size_t,int) ;
 int FUNC_5 (struct igb_adapter*,int,size_t) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_6(struct igb_adapter *VAR_3, u32 VAR_4)
{
 struct vf_data_storage *VAR_5 = &VAR_3->vf_data[VAR_4];


 VAR_5->flags &= VAR_0;
 VAR_5->last_nack = VAR_2;


 FUNC_0(VAR_3, VAR_4);
 FUNC_2(VAR_3, VAR_5->pf_vlan, 1, VAR_4);
 FUNC_5(VAR_3, VAR_5->pf_vlan |
          (VAR_5->pf_qos << VAR_1), VAR_4);
 FUNC_4(VAR_3, VAR_4, !VAR_5->pf_vlan);
 FUNC_3(VAR_3, VAR_4, !!(VAR_5->pf_vlan));


 VAR_3->vf_data[VAR_4].num_vf_mc_hashes = 0;


 FUNC_1(VAR_3->netdev);
}
