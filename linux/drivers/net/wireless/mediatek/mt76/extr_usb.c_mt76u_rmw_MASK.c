
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int usb_ctrl_mtx; } ;
struct mt76_dev {TYPE_1__ usb; } ;


 int FUNC_0 (struct mt76_dev*,int) ;
 int FUNC_1 (struct mt76_dev*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u32 FUNC_4(struct mt76_dev *VAR_0, u32 VAR_1,
       u32 VAR_2, u32 VAR_3)
{
 FUNC_2(&VAR_0->usb.usb_ctrl_mtx);
 VAR_3 |= FUNC_0(VAR_0, VAR_1) & ~VAR_2;
 FUNC_1(VAR_0, VAR_1, VAR_3);
 FUNC_3(&VAR_0->usb.usb_ctrl_mtx);

 return VAR_3;
}
