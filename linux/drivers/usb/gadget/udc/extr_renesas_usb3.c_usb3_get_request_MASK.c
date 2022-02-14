
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3_request {int dummy; } ;
struct renesas_usb3_ep {int dummy; } ;
struct renesas_usb3 {int lock; } ;


 struct renesas_usb3_request* FUNC_0 (struct renesas_usb3_ep*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct renesas_usb3* FUNC_3 (struct renesas_usb3_ep*) ;

__attribute__((used)) static struct renesas_usb3_request *FUNC_4(struct renesas_usb3_ep
           *VAR_0)
{
 struct renesas_usb3 *VAR_1 = FUNC_3(VAR_0);
 struct renesas_usb3_request *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_1->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->lock, VAR_3);

 return VAR_2;
}
