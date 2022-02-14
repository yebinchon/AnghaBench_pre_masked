
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int get_link_info; } ;
struct i40e_hw {int flags; TYPE_2__ mac; void* pf_id; void* port; TYPE_1__ phy; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*,int ) ;

i40e_status FUNC_3(struct i40e_hw *VAR_10)
{
 i40e_status VAR_11 = 0;
 u32 VAR_12, VAR_13, VAR_14;

 FUNC_1(VAR_10);

 switch (VAR_10->mac.type) {
 case 128:
 case 129:
  break;
 default:
  return VAR_0;
 }

 VAR_10->phy.get_link_info = 1;


 VAR_12 = (FUNC_2(VAR_10, VAR_6) & VAR_7)
        >> VAR_8;
 VAR_10->port = (u8)VAR_12;
 VAR_13 = (FUNC_2(VAR_10, VAR_1) & VAR_2) >>
       VAR_3;
 VAR_14 = FUNC_2(VAR_10, VAR_9);
 if (VAR_13)
  VAR_10->pf_id = (u8)(VAR_14 & 0xff);
 else
  VAR_10->pf_id = (u8)(VAR_14 & 0x7);

 if (VAR_10->mac.type == 129)
  VAR_10->flags |= VAR_4 |
        VAR_5;

 VAR_11 = FUNC_0(VAR_10);
 return VAR_11;
}
