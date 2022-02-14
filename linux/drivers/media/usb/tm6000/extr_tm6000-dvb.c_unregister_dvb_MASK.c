
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int * transfer_buffer; } ;
struct tm6000_dvb {int mutex; int adapter; int demux; int dmxdev; scalar_t__ frontend; struct urb* bulk_urb; } ;
struct tm6000_core {struct tm6000_dvb* dvb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct urb*) ;

__attribute__((used)) static void FUNC_9(struct tm6000_core *VAR_0)
{
 struct tm6000_dvb *VAR_1 = VAR_0->dvb;

 if (VAR_1->bulk_urb) {
  struct urb *VAR_2 = VAR_1->bulk_urb;

  FUNC_5(VAR_2->transfer_buffer);
  VAR_2->transfer_buffer = ((void*)0);
  FUNC_8(VAR_2);
  FUNC_7(VAR_2);
 }


 if (VAR_1->frontend) {
  FUNC_4(VAR_1->frontend);
  FUNC_2(VAR_1->frontend);
 }

 FUNC_1(&VAR_1->dmxdev);
 FUNC_0(&VAR_1->demux);
 FUNC_3(&VAR_1->adapter);
 FUNC_6(&VAR_1->mutex);

}
