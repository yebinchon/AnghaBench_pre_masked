
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct hns_mdio_device {int subctrl_vbase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hns_mdio_device *VAR_2,
     u32 VAR_3, u32 VAR_4,
     u32 VAR_5, u32 VAR_6, u8 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;

 FUNC_1(VAR_2->subctrl_vbase, VAR_3, VAR_4);

 for (VAR_8 = VAR_1; VAR_8; VAR_8--) {
  VAR_10 = FUNC_0(VAR_2->subctrl_vbase, VAR_5, &VAR_9);
  if (VAR_10)
   return VAR_10;

  VAR_9 &= VAR_6;
  if ((!!VAR_7) == (!!VAR_9))
   break;
 }

 if ((!!VAR_7) != (!!VAR_9))
  return -VAR_0;

 return 0;
}
