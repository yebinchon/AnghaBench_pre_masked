
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int usb_ctrl_mtx; } ;
struct mt76_dev {TYPE_1__ usb; } ;


 int FUNC_0 (struct mt76_dev*,int ,int ,int ,int ,void*,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mt76_dev*,int ,int ) ;

int FUNC_4(struct mt76_dev *VAR_0, u8 VAR_1,
    u8 VAR_2, u16 VAR_3, u16 VAR_4,
    void *VAR_5, size_t VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_0->usb.usb_ctrl_mtx);
 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3(VAR_0, VAR_4, VAR_3);
 FUNC_2(&VAR_0->usb.usb_ctrl_mtx);

 return VAR_7;
}
