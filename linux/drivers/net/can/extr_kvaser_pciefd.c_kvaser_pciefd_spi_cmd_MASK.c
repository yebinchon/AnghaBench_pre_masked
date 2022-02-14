
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct kvaser_pciefd {TYPE_1__* pci; scalar_t__ reg_base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct kvaser_pciefd*,int ) ;

__attribute__((used)) static int FUNC_5(struct kvaser_pciefd *VAR_8, const u8 *VAR_9,
     u32 VAR_10, u8 *VAR_11, u32 VAR_12)
{
 int VAR_13;

 FUNC_3(FUNC_0(0), VAR_8->reg_base + VAR_4);
 FUNC_3(FUNC_0(10), VAR_8->reg_base + VAR_1);
 FUNC_2(VAR_8->reg_base + VAR_3);

 VAR_13 = VAR_10;
 while (VAR_13--) {
  if (FUNC_4(VAR_8, VAR_6))
   return -VAR_0;

  FUNC_3(*VAR_9++, VAR_8->reg_base + VAR_7);

  if (FUNC_4(VAR_8, VAR_2))
   return -VAR_0;

  FUNC_2(VAR_8->reg_base + VAR_3);
 }

 VAR_13 = VAR_12;
 while (VAR_13-- > 0) {
  if (FUNC_4(VAR_8, VAR_6))
   return -VAR_0;

  FUNC_3(0, VAR_8->reg_base + VAR_7);

  if (FUNC_4(VAR_8, VAR_2))
   return -VAR_0;

  *VAR_11++ = FUNC_2(VAR_8->reg_base + VAR_3);
 }

 if (FUNC_4(VAR_8, VAR_5))
  return -VAR_0;

 FUNC_3(0, VAR_8->reg_base + VAR_1);

 if (VAR_13 != -1) {
  FUNC_1(&VAR_8->pci->dev, "Flash SPI transfer failed\n");
  return -VAR_0;
 }

 return 0;
}
