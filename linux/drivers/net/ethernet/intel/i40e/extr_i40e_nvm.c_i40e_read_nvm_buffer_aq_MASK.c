
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct i40e_hw {int dummy; } ;
typedef scalar_t__ i40e_status ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct i40e_hw*,int,scalar_t__,scalar_t__,scalar_t__*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static i40e_status FUNC_3(struct i40e_hw *VAR_1, u16 VAR_2,
        u16 *VAR_3, u16 *VAR_4)
{
 i40e_status VAR_5;
 u16 VAR_6;
 bool VAR_7 = 0;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;

 do {




  if (VAR_2 % VAR_0)
   VAR_6 = FUNC_2(*VAR_3,
     (u16)(VAR_0 -
          (VAR_2 % VAR_0)));
  else
   VAR_6 = FUNC_2((*VAR_3 - VAR_8),
     VAR_0);


  if ((VAR_8 + VAR_6) >= *VAR_3)
   VAR_7 = 1;

  VAR_5 = FUNC_0(VAR_1, 0x0, VAR_2, VAR_6,
         VAR_4 + VAR_8, VAR_7);
  if (VAR_5)
   goto read_nvm_buffer_aq_exit;




  VAR_8 += VAR_6;
  VAR_2 += VAR_6;
 } while (VAR_8 < *VAR_3);

 for (VAR_9 = 0; VAR_9 < *VAR_3; VAR_9++)
  VAR_4[VAR_9] = FUNC_1(((__le16 *)VAR_4)[VAR_9]);

read_nvm_buffer_aq_exit:
 *VAR_3 = VAR_8;
 return VAR_5;
}
