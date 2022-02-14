
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_urb; int stream_started; TYPE_3__** urb; int * transfer_buffer; } ;
struct em28xx {TYPE_2__ adev; TYPE_1__* intf; } ;
struct TYPE_6__ {int transfer_buffer_length; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct em28xx*) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;

__attribute__((used)) static int FUNC_6(struct em28xx *VAR_1)
{
 int VAR_2, VAR_3;

 FUNC_2("Starting isoc transfers\n");


 for (VAR_2 = 0; VAR_2 < VAR_1->adev.num_urb; VAR_2++) {
  FUNC_4(VAR_1->adev.transfer_buffer[VAR_2], 0x80,
         VAR_1->adev.urb[VAR_2]->transfer_buffer_length);

  VAR_3 = FUNC_5(VAR_1->adev.urb[VAR_2], VAR_0);
  if (VAR_3) {
   FUNC_1(&VAR_1->intf->dev,
    "submit of audio urb failed (error=%i)\n",
    VAR_3);
   FUNC_3(VAR_1);
   FUNC_0(&VAR_1->adev.stream_started, 0);
   return VAR_3;
  }
 }

 return 0;
}
