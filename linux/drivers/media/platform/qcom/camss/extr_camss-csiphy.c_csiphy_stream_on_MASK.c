
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_8__ {int entity; } ;
struct csiphy_config {int csid_id; scalar_t__ combo_mode; TYPE_1__* csi2; } ;
struct csiphy_device {TYPE_5__* ops; int base_clk_mux; TYPE_4__* camss; TYPE_3__ subdev; TYPE_2__* fmt; int nformats; int formats; struct csiphy_config cfg; } ;
struct TYPE_10__ {int (* lanes_enable ) (struct csiphy_device*,struct csiphy_config*,int ,int,int) ;} ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int code; } ;
struct TYPE_6__ {int lane_cfg; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct csiphy_device*,struct csiphy_config*,int ,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct csiphy_device *VAR_2)
{
 struct csiphy_config *VAR_3 = &VAR_2->cfg;
 u32 VAR_4;
 u8 VAR_5 = FUNC_2(&VAR_3->csi2->lane_cfg);
 u8 VAR_6 = FUNC_1(VAR_2->formats, VAR_2->nformats,
    VAR_2->fmt[VAR_1].code);
 u8 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_2->subdev.entity, &VAR_4);
 if (VAR_8) {
  FUNC_3(VAR_2->camss->dev,
   "Cannot get CSI2 transmitter's pixel clock\n");
  return -VAR_0;
 }
 if (!VAR_4) {
  FUNC_3(VAR_2->camss->dev,
   "Got pixel clock == 0, cannot continue\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_2->base_clk_mux);
 if (VAR_3->combo_mode && (VAR_5 & 0x18) == 0x18) {
  VAR_7 &= ~0xf0;
  VAR_7 |= VAR_3->csid_id << 4;
 } else {
  VAR_7 &= ~0xf;
  VAR_7 |= VAR_3->csid_id;
 }
 FUNC_7(VAR_7, VAR_2->base_clk_mux);
 FUNC_6();

 VAR_2->ops->lanes_enable(VAR_2, VAR_3, VAR_4, VAR_6, VAR_5);

 return 0;
}
