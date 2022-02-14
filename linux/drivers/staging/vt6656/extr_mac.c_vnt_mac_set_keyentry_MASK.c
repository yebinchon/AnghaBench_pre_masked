
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_private {TYPE_3__* usb; } ;
struct TYPE_4__ {int addr; int key_ctl; } ;
struct TYPE_5__ {int * swap; TYPE_1__ write; } ;
struct vnt_mac_set_key {int key; TYPE_2__ u; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,int,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct vnt_private*,int ,int,int,int,int *) ;

void FUNC_6(struct vnt_private *VAR_4, u16 VAR_5, u32 VAR_6,
     u32 VAR_7, u8 *VAR_8, u8 *VAR_9)
{
 struct vnt_mac_set_key VAR_10;
 u16 VAR_11;

 VAR_11 = VAR_2;
 VAR_11 += VAR_6 * VAR_1;

 VAR_10.u.write.key_ctl = FUNC_0(VAR_5);
 FUNC_2(VAR_10.u.write.addr, VAR_8);


 FUNC_4(VAR_10.u.swap[0], VAR_10.u.swap[1]);

 FUNC_3(VAR_10.key, VAR_9, VAR_3);

 FUNC_1(&VAR_4->usb->dev, "offset %d key ctl %d set key %24ph\n",
  VAR_11, VAR_5, (u8 *)&VAR_10);

 FUNC_5(VAR_4, VAR_0, VAR_11,
   (u16)VAR_7, sizeof(struct vnt_mac_set_key),
   (u8 *)&VAR_10);
}
