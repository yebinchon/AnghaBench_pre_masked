
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_ftdi {int expected; char* response; scalar_t__ ed_found; scalar_t__ received; int u132_lock; } ;
struct u132_target {int actual; int non_null; int repeat_number; scalar_t__ abandoning; scalar_t__ active; int condition_code; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ftdi*,struct u132_target*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static char *FUNC_3(struct usb_ftdi *VAR_1,
      struct u132_target *VAR_2, u16 VAR_3, int VAR_4, int VAR_5,
      char *VAR_6)
{
 FUNC_1(&VAR_1->u132_lock);
 VAR_2->condition_code = VAR_0;
 VAR_2->actual = (VAR_3 >> 0) & 0x01FF;
 VAR_2->non_null = (VAR_3 >> 15) & 0x0001;
 VAR_2->repeat_number = (VAR_3 >> 11) & 0x000F;
 FUNC_2(&VAR_1->u132_lock);
 if (VAR_2->active)
  FUNC_0(VAR_1, VAR_2, ((void*)0), 0);
 VAR_2->abandoning = 0;
 VAR_1->received = 0;
 VAR_1->expected = 4;
 VAR_1->ed_found = 0;
 return VAR_1->response;
}
