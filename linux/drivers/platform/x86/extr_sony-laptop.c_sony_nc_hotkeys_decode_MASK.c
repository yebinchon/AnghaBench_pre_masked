
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sony_nc_event {int data; int event; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,int ) ;
 int FUNC_1 (char*,int ,unsigned int,unsigned int) ;
 struct sony_nc_event* VAR_1 ;
 struct sony_nc_event* VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int,int,unsigned int*) ;

__attribute__((used)) static int FUNC_3(u32 VAR_3, unsigned int VAR_4)
{
 int VAR_5 = -VAR_0;
 unsigned int VAR_6 = 0;
 struct sony_nc_event *VAR_7;

 if (FUNC_2(VAR_4, 0x200, &VAR_6)) {
  FUNC_0("Unable to decode event 0x%.2x 0x%.2x\n", VAR_4,
    VAR_3);
  return -VAR_0;
 }

 VAR_6 &= 0xFF;

 if (VAR_4 == 0x0100)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 for (; VAR_7->data; VAR_7++) {
  if (VAR_7->data == VAR_6) {
   VAR_5 = VAR_7->event;
   break;
  }
 }

 if (!VAR_7->data)
  FUNC_1("Unknown hotkey 0x%.2x/0x%.2x (handle 0x%.2x)\n",
    VAR_3, VAR_6, VAR_4);

 return VAR_5;
}
