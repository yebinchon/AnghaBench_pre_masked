
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct urb_priv {int active; } ;
struct imx21 {int dev; struct etd_priv* etd; } ;
struct etd_priv {int dmem_offset; TYPE_1__* urb; } ;
struct TYPE_2__ {struct urb_priv* hcpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct imx21*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct imx21*,int,int) ;
 int FUNC_3 (struct imx21*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct imx21 *VAR_2,
 struct etd_priv *VAR_3, u32 VAR_4)
{
 struct urb_priv *VAR_5 = VAR_3->urb->hcpriv;
 int VAR_6 = VAR_3 - &VAR_2->etd[0];
 u32 VAR_7 = FUNC_2(VAR_2, VAR_6, 1) >> VAR_0;
 u8 VAR_8 = (FUNC_2(VAR_2, VAR_6, 2) >> VAR_1) & 0x03;

 FUNC_1(VAR_2->dev, "activating queued ETD %d now DMEM available\n",
  VAR_6);
 FUNC_3(VAR_2, VAR_6, 1,
     ((VAR_4 + VAR_7) << VAR_0) | VAR_4);

 VAR_3->dmem_offset = VAR_4;
 VAR_5->active = 1;
 FUNC_0(VAR_2, VAR_6, VAR_8);
}
