
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct lbs_private {int* current_addr; int fwrelease; int regioncode; int copied_hwaddr; TYPE_2__* mesh_dev; TYPE_3__* dev; void* fwcapinfo; } ;
struct TYPE_4__ {int size; } ;
struct cmd_ds_get_hw_spec {int permanentaddr; int regioncode; int version; int hwifversion; int fwrelease; int fwcapinfo; TYPE_1__ hdr; } ;
typedef int cmd ;
struct TYPE_6__ {int dev_addr; } ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_get_hw_spec*) ;
 int FUNC_3 (char*,int ,int ) ;
 int* VAR_4 ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,int*,int ) ;
 int FUNC_7 (int*,int ,int ) ;
 int FUNC_8 (struct cmd_ds_get_hw_spec*,int ,int) ;
 int FUNC_9 (TYPE_3__*,char*,...) ;

int FUNC_10(struct lbs_private *VAR_5)
{
 struct cmd_ds_get_hw_spec VAR_6;
 int VAR_7 = -1;
 u32 VAR_8;

 FUNC_8(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.hdr.size = FUNC_1(sizeof(VAR_6));
 FUNC_6(VAR_6.permanentaddr, VAR_5->current_addr, VAR_1);
 VAR_7 = FUNC_2(VAR_5, VAR_0, &VAR_6);
 if (VAR_7)
  goto out;

 VAR_5->fwcapinfo = FUNC_5(VAR_6.fwcapinfo);



 VAR_5->fwrelease = FUNC_5(VAR_6.fwrelease);
 VAR_5->fwrelease = (VAR_5->fwrelease << 8) |
  (VAR_5->fwrelease >> 24 & 0xff);





 FUNC_9(VAR_5->dev, "%pM, fw %u.%u.%up%u, cap 0x%08x\n",
  VAR_6.permanentaddr,
  VAR_5->fwrelease >> 24 & 0xff,
  VAR_5->fwrelease >> 16 & 0xff,
  VAR_5->fwrelease >> 8 & 0xff,
  VAR_5->fwrelease & 0xff,
  VAR_5->fwcapinfo);
 FUNC_3("GET_HW_SPEC: hardware interface 0x%x, hardware spec 0x%04x\n",
      VAR_6.hwifversion, VAR_6.version);
 if (FUNC_0(VAR_5->fwrelease) == VAR_3)
  VAR_5->regioncode = (FUNC_4(VAR_6.regioncode) >> 8) & 0xFF;
 else
  VAR_5->regioncode = FUNC_4(VAR_6.regioncode) & 0xFF;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {

  if (VAR_5->regioncode == VAR_4[VAR_8])
   break;
 }


 if (VAR_8 >= VAR_2) {
  VAR_5->regioncode = 0x10;
  FUNC_9(VAR_5->dev,
       "unidentified region code; using the default (USA)\n");
 }

 if (VAR_5->current_addr[0] == 0xff)
  FUNC_7(VAR_5->current_addr, VAR_6.permanentaddr, VAR_1);

 if (!VAR_5->copied_hwaddr) {
  FUNC_6(VAR_5->dev->dev_addr, VAR_5->current_addr, VAR_1);
  if (VAR_5->mesh_dev)
   FUNC_6(VAR_5->mesh_dev->dev_addr,
    VAR_5->current_addr, VAR_1);
  VAR_5->copied_hwaddr = 1;
 }

out:
 return VAR_7;
}
