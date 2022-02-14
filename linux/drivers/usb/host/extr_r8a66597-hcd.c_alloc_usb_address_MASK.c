
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct urb {TYPE_1__* dev; } ;
struct r8a66597_device {scalar_t__ state; int address; } ;
struct r8a66597 {int address_map; } ;
struct TYPE_2__ {int dev; int devpath; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,...) ;
 struct r8a66597_device* FUNC_2 (struct r8a66597*,struct urb*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct r8a66597*,struct urb*,int) ;

__attribute__((used)) static u8 FUNC_5(struct r8a66597 *VAR_2, struct urb *VAR_3)
{
 u8 VAR_4;
 struct r8a66597_device *VAR_5;

 if (FUNC_3(VAR_3->dev->devpath)) {
  FUNC_1(&VAR_3->dev->dev, "External hub limit reached.\n");
  return 0;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5 && VAR_5->state >= VAR_1)
  return VAR_5->address;

 for (VAR_4 = 1; VAR_4 <= VAR_0; VAR_4++) {
  if (VAR_2->address_map & (1 << VAR_4))
   continue;

  FUNC_0(&VAR_3->dev->dev, "alloc_address: r8a66597_addr=%d\n", VAR_4);
  VAR_2->address_map |= 1 << VAR_4;

  if (FUNC_4(VAR_2, VAR_3, VAR_4) < 0)
   return 0;

  return VAR_4;
 }

 FUNC_1(&VAR_3->dev->dev,
  "cannot communicate with a USB device more than 10.(%x)\n",
  VAR_2->address_map);

 return 0;
}
