
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct peak_usb_device {int state; int netdev; TYPE_1__* udev; } ;
typedef int ptrdiff_t ;
struct TYPE_3__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (struct peak_usb_device*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int ,int *,int,int *,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_7(struct peak_usb_device *VAR_6, void *VAR_7)
{
 void *VAR_8 = FUNC_3(VAR_6);
 int VAR_9 = 0;
 u8 *VAR_10;
 int VAR_11;
 ptrdiff_t VAR_12;


 if (!(VAR_6->state & VAR_4))
  return 0;




 VAR_12 = VAR_7 - VAR_8;
 if (VAR_12 <= (VAR_0 - sizeof(u64))) {
  FUNC_0(VAR_7, 0xff, sizeof(u64));
  VAR_12 += sizeof(u64);
 }

 VAR_10 = VAR_8;
 VAR_11 = VAR_12;


 if (FUNC_4(VAR_6->udev->speed != VAR_5))
  VAR_11 = FUNC_1(VAR_11, VAR_2);

 do {
  VAR_9 = FUNC_5(VAR_6->udev,
       FUNC_6(VAR_6->udev,
         VAR_3),
       VAR_10, VAR_11,
       ((void*)0), VAR_1);
  if (VAR_9) {
   FUNC_2(VAR_6->netdev,
       "sending command failure: %d\n", VAR_9);
   break;
  }

  VAR_10 += VAR_11;
  VAR_12 -= VAR_11;

  if (VAR_12 < VAR_2)
   VAR_11 = VAR_12;

 } while (VAR_11 > 0);

 return VAR_9;
}
