
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int work_struct; } ;
struct gspca_dev {scalar_t__ present; int usb_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gspca_dev*,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *)VAR_0;


 FUNC_2(&VAR_0->usb_lock);

 FUNC_0(&VAR_1->work_struct);
 FUNC_1(&VAR_0->usb_lock);

 if (VAR_0->present)
  FUNC_3(VAR_0, 0);
}
