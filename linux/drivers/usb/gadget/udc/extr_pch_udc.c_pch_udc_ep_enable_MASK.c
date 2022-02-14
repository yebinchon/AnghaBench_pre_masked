
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usb_endpoint_descriptor {int bmAttributes; } ;
struct pch_udc_ep {int in; int num; int dev; } ;
struct pch_udc_cfg_data {int cur_cfg; int cur_intf; int cur_alt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (struct pch_udc_ep*,int) ;
 int FUNC_3 (struct pch_udc_ep*,int,int) ;
 int FUNC_4 (struct pch_udc_ep*,int) ;
 int FUNC_5 (struct pch_udc_ep*) ;
 int FUNC_6 (struct pch_udc_ep*,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct usb_endpoint_descriptor const*) ;

__attribute__((used)) static void FUNC_9(struct pch_udc_ep *VAR_10,
          struct pch_udc_cfg_data *VAR_11,
          const struct usb_endpoint_descriptor *VAR_12)
{
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;

 FUNC_6(VAR_10, VAR_12->bmAttributes);
 if (VAR_10->in)
  VAR_14 = VAR_7;
 else
  VAR_14 = VAR_8;
 FUNC_3(VAR_10, VAR_14, VAR_10->in);
 FUNC_4(VAR_10, FUNC_8(VAR_12));
 FUNC_5(VAR_10);
 FUNC_2(VAR_10, VAR_10->in);

 VAR_13 = VAR_10->num << VAR_5 | VAR_10->in << VAR_2 |
       ((VAR_12->bmAttributes & VAR_9) <<
  VAR_6) |
       (VAR_11->cur_cfg << VAR_1) |
       (VAR_11->cur_intf << VAR_3) |
       (VAR_11->cur_alt << VAR_0) |
       FUNC_8(VAR_12) << VAR_4;

 if (VAR_10->in)
  FUNC_7(VAR_10->dev, VAR_13, FUNC_0(VAR_10->num));
 else
  FUNC_7(VAR_10->dev, VAR_13, FUNC_1(VAR_10->num));
}
