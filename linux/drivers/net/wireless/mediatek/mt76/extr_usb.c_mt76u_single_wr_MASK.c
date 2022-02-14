
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {int usb_ctrl_mtx; } ;
struct mt76_dev {TYPE_1__ usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76_dev*,int const,int,int const,scalar_t__ const,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct mt76_dev *VAR_2, const u8 VAR_3,
       const u16 VAR_4, const u32 VAR_5)
{
 FUNC_1(&VAR_2->usb.usb_ctrl_mtx);
 FUNC_0(VAR_2, VAR_3,
          VAR_0 | VAR_1,
          VAR_5 & 0xffff, VAR_4, ((void*)0), 0);
 FUNC_0(VAR_2, VAR_3,
          VAR_0 | VAR_1,
          VAR_5 >> 16, VAR_4 + 2, ((void*)0), 0);
 FUNC_2(&VAR_2->usb.usb_ctrl_mtx);
}
