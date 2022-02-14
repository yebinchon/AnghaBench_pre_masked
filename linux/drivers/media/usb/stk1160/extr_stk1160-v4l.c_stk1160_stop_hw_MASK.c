
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk1160 {int v4l2_dev; int udev; scalar_t__ alt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct stk1160*,scalar_t__,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct stk1160 *VAR_3)
{

 if (!VAR_3->udev)
  return;


 VAR_3->alt = 0;
 FUNC_0("setting alternate %d\n", VAR_3->alt);
 FUNC_2(VAR_3->udev, 0, 0);


 FUNC_1(VAR_3, VAR_0, 0x00);
 FUNC_1(VAR_3, VAR_0+3, 0x00);


 FUNC_3(&VAR_3->v4l2_dev, 0, VAR_2, VAR_1, 0);
}
