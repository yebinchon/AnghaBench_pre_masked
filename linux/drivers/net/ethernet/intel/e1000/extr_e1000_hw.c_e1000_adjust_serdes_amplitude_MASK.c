
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ media_type; int mac_type; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_6)
{
 u16 VAR_7;
 s32 VAR_8;

 if (VAR_6->media_type != VAR_5)
  return VAR_0;

 switch (VAR_6->mac_type) {
 case 129:
 case 128:
  break;
 default:
  return VAR_0;
 }

 VAR_8 = FUNC_0(VAR_6, VAR_2, 1,
        &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_7 != VAR_1) {

  VAR_7 &= VAR_3;
  VAR_8 =
      FUNC_1(VAR_6, VAR_4, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_0;
}
