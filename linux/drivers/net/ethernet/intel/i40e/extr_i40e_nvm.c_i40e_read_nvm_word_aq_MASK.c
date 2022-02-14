
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,int,int ,int,int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static i40e_status FUNC_2(struct i40e_hw *VAR_1, u16 VAR_2,
      u16 *VAR_3)
{
 i40e_status VAR_4 = VAR_0;

 VAR_4 = FUNC_0(VAR_1, 0x0, VAR_2, 1, VAR_3, 1);
 *VAR_3 = FUNC_1(*(__le16 *)VAR_3);

 return VAR_4;
}
