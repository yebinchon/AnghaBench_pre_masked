
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_lldp_variables {int dummy; } ;
struct i40e_hw {int dummy; } ;
typedef int raw_mem ;
typedef scalar_t__ i40e_status ;
typedef struct i40e_lldp_variables __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int,int,int,struct i40e_lldp_variables*,int,int *) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_lldp_variables) ;

__attribute__((used)) static i40e_status FUNC_4(struct i40e_hw *VAR_2,
           struct i40e_lldp_variables *VAR_3,
           u8 VAR_4, u32 VAR_5)
{
 u32 VAR_6, VAR_7 = (2 * VAR_5);
 i40e_status VAR_8;
 __le16 VAR_9;
 u16 VAR_10;

 VAR_8 = FUNC_0(VAR_2, VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_1(VAR_2, 0x0, VAR_4 * 2, sizeof(VAR_9), &VAR_9,
          1, ((void*)0));
 FUNC_2(VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_10 = FUNC_3(VAR_9);



 if (VAR_10 & VAR_0)
  VAR_6 = (0x7FFF & VAR_10) * 4096;
 else
  VAR_6 = (0x7FFF & VAR_10) * 2;

 VAR_8 = FUNC_0(VAR_2, VAR_1);
 if (VAR_8)
  goto err_lldp_cfg;

 VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_7, sizeof(VAR_9), &VAR_9,
          1, ((void*)0));
 FUNC_2(VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_10 = FUNC_3(VAR_9);
 VAR_7 = VAR_10 + VAR_5;
 VAR_7 *= 2;

 VAR_8 = FUNC_0(VAR_2, VAR_1);
 if (VAR_8)
  goto err_lldp_cfg;

 VAR_8 = FUNC_1(VAR_2, 0, VAR_6 + VAR_7,
          sizeof(struct i40e_lldp_variables), VAR_3,
          1, ((void*)0));
 FUNC_2(VAR_2);

err_lldp_cfg:
 return VAR_8;
}
