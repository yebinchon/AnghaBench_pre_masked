
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int num; int dma; } ;
struct renesas_usb3 {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct renesas_usb3*) ;
 int FUNC_3 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 int FUNC_4 (struct renesas_usb3_ep*) ;
 int FUNC_5 (struct renesas_usb3_ep*,struct renesas_usb3_request*) ;
 struct renesas_usb3* FUNC_6 (struct renesas_usb3_ep*) ;
 int FUNC_7 (struct renesas_usb3*,int ) ;

__attribute__((used)) static int FUNC_8(struct renesas_usb3_ep *VAR_0,
        struct renesas_usb3_request *VAR_1)
{
 struct renesas_usb3 *VAR_2 = FUNC_6(VAR_0);
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_0(&VAR_2->lock, VAR_3);
 if (!VAR_0->dma)
  goto out;

 if (!FUNC_7(VAR_2, VAR_0->num))
  FUNC_2(VAR_2);
 FUNC_4(VAR_0);
 VAR_4 = FUNC_5(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1);

out:
 FUNC_1(&VAR_2->lock, VAR_3);
 return VAR_4;
}
