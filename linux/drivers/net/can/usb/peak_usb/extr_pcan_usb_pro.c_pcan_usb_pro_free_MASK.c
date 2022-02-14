
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peak_usb_device {int next_siblings; int prev_siblings; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct peak_usb_device*) ;

__attribute__((used)) static void FUNC_2(struct peak_usb_device *VAR_0)
{

 if (!VAR_0->prev_siblings && !VAR_0->next_siblings)
  FUNC_0(FUNC_1(VAR_0));
}
