
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kaweth_device {scalar_t__ packet_filter_bitmap; int net; TYPE_1__* intf; int scratch; int dev; } ;
typedef scalar_t__ __u16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct kaweth_device*,int ,int ,int,scalar_t__,int ,void*,int ,int ) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct kaweth_device *VAR_5)
{
 int VAR_6;
 __u16 VAR_7 = VAR_5->packet_filter_bitmap;

 VAR_5->packet_filter_bitmap = 0;
 if (VAR_7 == 0)
  return;

 if (FUNC_1())
  return;

 VAR_6 = FUNC_2(VAR_5,
    FUNC_4(VAR_5->dev, 0),
    VAR_0,
    VAR_4 | VAR_2 | VAR_3,
    VAR_7,
    0,
    (void *)&VAR_5->scratch,
    0,
    VAR_1);

 if(VAR_6 < 0) {
  FUNC_0(&VAR_5->intf->dev, "Failed to set Rx mode: %d\n",
   VAR_6);
 }
 else {
  FUNC_3(VAR_5->net, "Set Rx mode to %d\n",
      VAR_7);
 }
}
