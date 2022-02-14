
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_5__ {int rc_map_size; TYPE_4__* rc_map_table; } ;
struct TYPE_6__ {TYPE_1__ legacy; } ;
struct TYPE_7__ {TYPE_2__ rc; } ;
struct dvb_usb_device {TYPE_3__ props; int udev; } ;
struct TYPE_8__ {int keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct dvb_usb_device*,scalar_t__,int*) ;
 int FUNC_4 (int ,int ,int,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_6, u32 *VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 u8 *VAR_11;

 VAR_11 = FUNC_2(2, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_6->udev, VAR_2, 0x0, VAR_4,
    VAR_11, 1);
 if (VAR_10 != 0)
  goto out;

 VAR_10 = FUNC_4(VAR_6->udev, VAR_2, 0x0, VAR_3,
    VAR_11 + 1, 1);
 if (VAR_10 != 0)
  goto out;

 FUNC_3(VAR_6, VAR_11[0], VAR_8);

 for (VAR_9 = 0; VAR_9 < VAR_6->props.rc.legacy.rc_map_size; VAR_9++)
  if (FUNC_5(&VAR_6->props.rc.legacy.rc_map_table[VAR_9]) == VAR_11[1]) {
   *VAR_7 = VAR_6->props.rc.legacy.rc_map_table[VAR_9].keycode;
   goto out;
  }

 if (VAR_11[1] != 0)
  FUNC_0("Unknown rc key %02x\n", VAR_11[1]);

 *VAR_8 = VAR_5;

 out:
 FUNC_1(VAR_11);
 return VAR_10;
}
