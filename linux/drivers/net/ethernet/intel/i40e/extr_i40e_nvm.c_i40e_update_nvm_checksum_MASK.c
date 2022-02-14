
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*,int *) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int,int ,int,int *,int) ;

i40e_status FUNC_3(struct i40e_hw *VAR_1)
{
 i40e_status VAR_2;
 u16 VAR_3;
 __le16 VAR_4;

 VAR_2 = FUNC_1(VAR_1, &VAR_3);
 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_2)
  VAR_2 = FUNC_2(VAR_1, 0x00, VAR_0,
          1, &VAR_4, 1);

 return VAR_2;
}
