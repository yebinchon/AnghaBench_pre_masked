
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pkt {scalar_t__ actual; int trans; scalar_t__ length; struct usbhs_pipe* pipe; } ;
struct usbhs_pipe {int fifo; } ;


 int FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*,int ) ;
 int FUNC_2 (struct usbhs_pipe*,int ) ;
 int FUNC_3 (struct usbhs_pkt*) ;
 int FUNC_4 (struct usbhs_pipe*,int ) ;
 int FUNC_5 (struct usbhs_pkt*,int*) ;

__attribute__((used)) static int FUNC_6(struct usbhs_pkt *VAR_0, int *VAR_1)
{
 struct usbhs_pipe *VAR_2 = VAR_0->pipe;
 int VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_2, VAR_2->fifo);
 FUNC_3(VAR_0);
 FUNC_4(VAR_2, VAR_2->fifo);

 VAR_0->actual += VAR_0->trans;

 if ((VAR_0->actual == VAR_0->length) ||
     (VAR_0->trans < VAR_3)) {
  *VAR_1 = 1;
  FUNC_1(VAR_2, 0);
 } else {

  FUNC_1(VAR_2, 0);
  FUNC_5(VAR_0, VAR_1);
 }

 return 0;
}
