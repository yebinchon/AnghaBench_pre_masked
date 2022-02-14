
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct firmware {int size; scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_15__ {size_t max_flowrings; int max_rxbufpost; int rx_dataoffset; TYPE_5__* flowrings; TYPE_4__** commonrings; } ;
struct brcmf_pciedev_info {TYPE_8__* pdev; int mbdata_resp_wait; TYPE_7__ shared; int state; int ci; } ;
struct brcmf_pciedev {struct brcmf_pciedev_info* devinfo; } ;
struct brcmf_fw_request {TYPE_3__* items; } ;
struct brcmf_commonring {int dummy; } ;
struct TYPE_9__ {struct brcmf_pciedev* pcie; } ;
struct brcmf_bus {TYPE_6__* msgbuf; TYPE_1__ bus_priv; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_14__ {size_t max_flowrings; int max_rxbufpost; int rx_dataoffset; struct brcmf_commonring** flowrings; int ** commonrings; } ;
struct TYPE_13__ {struct brcmf_commonring commonring; } ;
struct TYPE_12__ {int commonring; } ;
struct TYPE_10__ {size_t len; void* data; } ;
struct TYPE_11__ {TYPE_2__ nv_data; struct firmware* binary; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct brcmf_bus*,char*) ;
 int FUNC_3 (struct brcmf_pciedev_info*,int *,int ) ;
 int FUNC_4 (struct brcmf_pciedev_info*) ;
 int FUNC_5 (struct brcmf_pciedev_info*,int) ;
 int FUNC_6 (struct brcmf_pciedev_info*,struct firmware const*,void*,size_t) ;
 int FUNC_7 (struct brcmf_pciedev_info*) ;
 int FUNC_8 (struct brcmf_pciedev_info*) ;
 int FUNC_9 (struct brcmf_pciedev_info*) ;
 int FUNC_10 (struct brcmf_pciedev_info*) ;
 int FUNC_11 (struct brcmf_pciedev_info*) ;
 int FUNC_12 (struct brcmf_pciedev_info*,int ) ;
 struct brcmf_bus* FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (int *) ;
 struct brcmf_commonring** FUNC_16 (size_t,int,int ) ;
 int FUNC_17 (struct brcmf_fw_request*) ;

__attribute__((used)) static void FUNC_18(struct device *VAR_6, int VAR_7,
        struct brcmf_fw_request *VAR_8)
{
 const struct firmware *VAR_9;
 void *VAR_10;
 struct brcmf_bus *VAR_11;
 struct brcmf_pciedev *VAR_12;
 struct brcmf_pciedev_info *VAR_13;
 struct brcmf_commonring **VAR_14;
 u32 VAR_15, VAR_16;


 if (VAR_7)
  goto fail;

 VAR_11 = FUNC_13(VAR_6);
 VAR_12 = VAR_11->bus_priv.pcie;
 VAR_13 = VAR_12->devinfo;
 FUNC_4(VAR_13);

 VAR_9 = VAR_8->items[VAR_3].binary;
 VAR_10 = VAR_8->items[VAR_4].nv_data.data;
 VAR_16 = VAR_8->items[VAR_4].nv_data.len;
 FUNC_17(VAR_8);

 VAR_7 = FUNC_1(VAR_13->ci);
 if (VAR_7) {
  FUNC_2(VAR_11, "Failed to get RAM info\n");
  goto fail;
 }






 FUNC_3(VAR_13, (u8 *)VAR_9->data, VAR_9->size);

 VAR_7 = FUNC_6(VAR_13, VAR_9, VAR_10, VAR_16);
 if (VAR_7)
  goto fail;

 VAR_13->state = VAR_1;

 VAR_7 = FUNC_8(VAR_13);
 if (VAR_7)
  goto fail;

 VAR_7 = FUNC_9(VAR_13);
 if (VAR_7)
  goto fail;

 FUNC_12(VAR_13, VAR_0);
 VAR_7 = FUNC_11(VAR_13);
 if (VAR_7)
  goto fail;


 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  VAR_11->msgbuf->commonrings[VAR_15] =
    &VAR_13->shared.commonrings[VAR_15]->commonring;

 VAR_14 = FUNC_16(VAR_13->shared.max_flowrings, sizeof(*VAR_14),
       VAR_5);
 if (!VAR_14)
  goto fail;

 for (VAR_15 = 0; VAR_15 < VAR_13->shared.max_flowrings; VAR_15++)
  VAR_14[VAR_15] = &VAR_13->shared.flowrings[VAR_15].commonring;
 VAR_11->msgbuf->flowrings = VAR_14;

 VAR_11->msgbuf->rx_dataoffset = VAR_13->shared.rx_dataoffset;
 VAR_11->msgbuf->max_rxbufpost = VAR_13->shared.max_rxbufpost;
 VAR_11->msgbuf->max_flowrings = VAR_13->shared.max_flowrings;

 FUNC_15(&VAR_13->mbdata_resp_wait);

 FUNC_10(VAR_13);
 FUNC_7(VAR_13);

 VAR_7 = FUNC_0(&VAR_13->pdev->dev);
 if (VAR_7)
  goto fail;

 FUNC_5(VAR_13, 0);

 return;

fail:
 FUNC_14(VAR_6);
}
