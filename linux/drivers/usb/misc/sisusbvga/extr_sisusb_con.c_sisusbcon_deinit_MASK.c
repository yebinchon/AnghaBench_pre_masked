
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {size_t vc_num; } ;
struct sisusb_usb_data {int kref; int lock; int * font_backup; scalar_t__* havethisconsole; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int ** VAR_1 ;
 int VAR_2 ;
 struct sisusb_usb_data* FUNC_3 (size_t) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct vc_data *VAR_3)
{
 struct sisusb_usb_data *VAR_4;
 int VAR_5;





 VAR_4 = FUNC_3(VAR_3->vc_num);
 if (!VAR_4)
  return;

 FUNC_1(&VAR_4->lock);


 VAR_1[VAR_3->vc_num] = ((void*)0);

 VAR_4->havethisconsole[VAR_3->vc_num] = 0;


 if (VAR_4->font_backup) {
  for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   if (VAR_4->havethisconsole[VAR_3->vc_num])
    break;
  }
  if (VAR_5 == VAR_0) {
   FUNC_4(VAR_4->font_backup);
   VAR_4->font_backup = ((void*)0);
  }
 }

 FUNC_2(&VAR_4->lock);


 FUNC_0(&VAR_4->kref, VAR_2);
}
