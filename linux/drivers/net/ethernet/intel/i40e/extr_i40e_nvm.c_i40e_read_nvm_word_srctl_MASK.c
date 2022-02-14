
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ sr_size; } ;
struct i40e_hw {TYPE_1__ nvm; } ;
typedef scalar_t__ i40e_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct i40e_hw*,int ,char*,scalar_t__,...) ;
 scalar_t__ FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,int) ;

__attribute__((used)) static i40e_status FUNC_5(struct i40e_hw *VAR_9, u16 VAR_10,
         u16 *VAR_11)
{
 i40e_status VAR_12 = VAR_2;
 u32 VAR_13;

 if (VAR_10 >= VAR_9->nvm.sr_size) {
  FUNC_1(VAR_9, VAR_0,
      "NVM read error: offset %d beyond Shadow RAM limit %d\n",
      VAR_10, VAR_9->nvm.sr_size);
  VAR_12 = VAR_1;
  goto read_nvm_exit;
 }


 VAR_12 = FUNC_2(VAR_9);
 if (!VAR_12) {

  VAR_13 = ((u32)VAR_10 << VAR_4) |
    FUNC_0(VAR_5);
  FUNC_4(VAR_9, VAR_3, VAR_13);


  VAR_12 = FUNC_2(VAR_9);
  if (!VAR_12) {
   VAR_13 = FUNC_3(VAR_9, VAR_6);
   *VAR_11 = (u16)((VAR_13 &
           VAR_7)
        >> VAR_8);
  }
 }
 if (VAR_12)
  FUNC_1(VAR_9, VAR_0,
      "NVM read error: Couldn't access Shadow RAM address: 0x%x\n",
      VAR_10);

read_nvm_exit:
 return VAR_12;
}
