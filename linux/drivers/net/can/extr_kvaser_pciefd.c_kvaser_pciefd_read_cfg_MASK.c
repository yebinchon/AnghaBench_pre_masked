
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct kvaser_pciefd_cfg_img {int dummy; } ;
struct kvaser_pciefd {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct kvaser_pciefd_cfg_img*) ;
 struct kvaser_pciefd_cfg_img* FUNC_3 (int ,int ) ;
 int FUNC_4 (struct kvaser_pciefd*,struct kvaser_pciefd_cfg_img*) ;
 int FUNC_5 (struct kvaser_pciefd*,struct kvaser_pciefd_cfg_img*) ;
 int FUNC_6 (struct kvaser_pciefd*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_7(struct kvaser_pciefd *VAR_8)
{
 int VAR_9;
 struct kvaser_pciefd_cfg_img *VAR_10;


 u8 VAR_11[] = {VAR_6, 0, 0, 0};

 VAR_9 = FUNC_6(VAR_8, VAR_11, FUNC_0(VAR_11), VAR_11, 1);
 if (VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_4, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 if (VAR_11[0] != VAR_5) {
  FUNC_1(&VAR_8->pci->dev,
   "Flash id is 0x%x instead of expected EPCS16 (0x%x)\n",
   VAR_11[0], VAR_5);

  VAR_9 = -VAR_1;
  goto image_free;
 }

 VAR_11[0] = VAR_7;
 VAR_9 = FUNC_6(VAR_8, VAR_11, 1, VAR_11, 1);
 if (VAR_9) {
  goto image_free;
 } else if (VAR_11[0] & 1) {
  VAR_9 = -VAR_0;

  FUNC_1(&VAR_8->pci->dev, "Unexpected WIP bit set in flash\n");
  goto image_free;
 }

 VAR_9 = FUNC_4(VAR_8, VAR_10);
 if (VAR_9) {
  VAR_9 = -VAR_0;
  goto image_free;
 }

 FUNC_5(VAR_8, VAR_10);

image_free:
 FUNC_2(VAR_10);
 return VAR_9;
}
