
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt76_usb {int usb_ctrl_mtx; scalar_t__ data; } ;
struct mt76_dev {struct mt76_usb usb; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mt76_dev*,int ,int,int ,scalar_t__,scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__ const,scalar_t__*) ;

__attribute__((used)) static void FUNC_5(struct mt76_dev *VAR_3, u32 VAR_4,
         const void *VAR_5, int VAR_6)
{
 struct mt76_usb *VAR_7 = &VAR_3->usb;
 const u32 *VAR_8 = VAR_5;
 int VAR_9, VAR_10;

 FUNC_2(&VAR_7->usb_ctrl_mtx);
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6, 4); VAR_9++) {
  FUNC_4(VAR_8[VAR_9], (u32 *)VAR_7->data);
  VAR_10 = FUNC_1(VAR_3, VAR_0,
          VAR_1 | VAR_2,
          0, VAR_4 + VAR_9 * 4, VAR_7->data,
          sizeof(u32));
  if (VAR_10 < 0)
   break;
 }
 FUNC_3(&VAR_7->usb_ctrl_mtx);
}
