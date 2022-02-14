
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct be_adapter {int cfg_num_rx_irqs; int if_handle; void* uc_list; void* mc_list; void* pmac_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct be_adapter*,int,int,int *,int ) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*) ;
 void* FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct be_adapter *VAR_4)
{
 u32 VAR_5 = VAR_1 | VAR_0;
 u32 VAR_6 = FUNC_1(VAR_4);
 int VAR_7;


 VAR_4->pmac_id = FUNC_4(FUNC_3(VAR_4),
       sizeof(*VAR_4->pmac_id), VAR_3);
 if (!VAR_4->pmac_id)
  return -VAR_2;

 VAR_4->mc_list = FUNC_4(FUNC_2(VAR_4),
       sizeof(*VAR_4->mc_list), VAR_3);
 if (!VAR_4->mc_list)
  return -VAR_2;

 VAR_4->uc_list = FUNC_4(FUNC_3(VAR_4),
       sizeof(*VAR_4->uc_list), VAR_3);
 if (!VAR_4->uc_list)
  return -VAR_2;

 if (VAR_4->cfg_num_rx_irqs == 1)
  VAR_6 &= ~(VAR_0 | VAR_1);

 VAR_5 &= VAR_6;

 VAR_7 = FUNC_0(VAR_4, FUNC_1(VAR_4), VAR_5,
      &VAR_4->if_handle, 0);

 if (VAR_7)
  return VAR_7;

 return 0;
}
