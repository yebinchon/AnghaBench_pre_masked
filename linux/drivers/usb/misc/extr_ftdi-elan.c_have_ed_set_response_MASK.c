
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_ftdi {char* response; int expected; int ed_found; scalar_t__ received; int u132_lock; } ;
struct u132_target {int non_null; int repeat_number; scalar_t__ abandoning; scalar_t__ actual; } ;


 int FUNC_0 (struct usb_ftdi*,struct u132_target*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static char *FUNC_3(struct usb_ftdi *VAR_0,
      struct u132_target *VAR_1, u16 VAR_2, int VAR_3, int VAR_4,
      char *VAR_5)
{
 int VAR_6 = (VAR_2 >> 0) & 0x07FF;
 FUNC_1(&VAR_0->u132_lock);
 VAR_1->actual = 0;
 VAR_1->non_null = (VAR_2 >> 15) & 0x0001;
 VAR_1->repeat_number = (VAR_2 >> 11) & 0x000F;
 if (VAR_4 == 0x02 || VAR_4 == 0x03) {
  if (VAR_6 == 0 || VAR_1->abandoning > 0) {
   VAR_1->abandoning = 0;
   FUNC_2(&VAR_0->u132_lock);
   FUNC_0(VAR_0, VAR_1, 4 + VAR_0->response,
           VAR_6);
   VAR_0->received = 0;
   VAR_0->expected = 4;
   VAR_0->ed_found = 0;
   return VAR_0->response;
  } else {
   VAR_0->expected = 4 + VAR_6;
   VAR_0->ed_found = 1;
   FUNC_2(&VAR_0->u132_lock);
   return VAR_5;
  }
 } else {
  VAR_1->abandoning = 0;
  FUNC_2(&VAR_0->u132_lock);
  FUNC_0(VAR_0, VAR_1, 4 + VAR_0->response,
          VAR_6);
  VAR_0->received = 0;
  VAR_0->expected = 4;
  VAR_0->ed_found = 0;
  return VAR_0->response;
 }
}
