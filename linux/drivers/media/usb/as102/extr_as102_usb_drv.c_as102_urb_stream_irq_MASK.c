
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int transfer_buffer; int actual_length; struct as102_dev_t* context; } ;
struct as102_dev_t {scalar_t__ streaming; int dvb_dmx; } ;


 int VAR_0 ;
 int FUNC_0 (struct as102_dev_t*,struct urb*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(struct urb *VAR_1)
{
 struct as102_dev_t *VAR_2 = VAR_1->context;

 if (VAR_1->actual_length > 0) {
  FUNC_1(&VAR_2->dvb_dmx,
     VAR_1->transfer_buffer,
     VAR_1->actual_length);
 } else {
  if (VAR_1->actual_length == 0)
   FUNC_2(VAR_1->transfer_buffer, 0, VAR_0);
 }


 if (VAR_2->streaming)
  FUNC_0(VAR_2, VAR_1);
}
