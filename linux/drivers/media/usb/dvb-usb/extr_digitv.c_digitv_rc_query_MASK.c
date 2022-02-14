
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_6__ {int rc_map_size; TYPE_4__* rc_map_table; } ;
struct TYPE_7__ {TYPE_1__ legacy; } ;
struct TYPE_8__ {TYPE_2__ rc; } ;
struct dvb_usb_device {TYPE_3__ props; } ;
struct TYPE_9__ {int keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,scalar_t__*) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int ,scalar_t__*,int,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_4, u32 *VAR_5, int *VAR_6)
{
 int VAR_7;
 u8 VAR_8[5];
 u8 VAR_9[4] = { 0 };

 *VAR_5 = 0;
 *VAR_6 = VAR_1;

 FUNC_1(VAR_4,VAR_2,0,((void*)0),0,&VAR_8[1],4);



 FUNC_1(VAR_4,VAR_3,0,VAR_9,4,((void*)0),0);


 if (VAR_8[1] != 0)
 {
    for (VAR_7 = 0; VAR_7 < VAR_4->props.rc.legacy.rc_map_size; VAR_7++) {
   if (FUNC_2(&VAR_4->props.rc.legacy.rc_map_table[VAR_7]) == VAR_8[1] &&
       FUNC_3(&VAR_4->props.rc.legacy.rc_map_table[VAR_7]) == VAR_8[2]) {
    *VAR_5 = VAR_4->props.rc.legacy.rc_map_table[VAR_7].keycode;
    *VAR_6 = VAR_0;
    return 0;
   }
  }
 }

 if (VAR_8[0] != 0)
  FUNC_0("key: %*ph\n", 5, VAR_8);
 return 0;
}
