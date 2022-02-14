
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_ftdi {int command_head; struct u132_command* command; } ;
struct u132_command {int follows; int header; int length; char address; char width; int * buffer; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct usb_ftdi *VAR_1,
      char *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = VAR_3;
 int VAR_8 = VAR_1->command_head;
 while (VAR_7-- > 0) {
  struct u132_command *VAR_9 = &VAR_1->command[VAR_0 &
             VAR_8++];
  int VAR_10 = VAR_9->follows;
  u8 *VAR_11 = VAR_9->buffer;
  if (VAR_9->header & 0x80) {
   VAR_5 |= 1 << (0x3 & (VAR_9->header >> 5));
  }
  VAR_2[VAR_6++] = VAR_9->header;
  VAR_2[VAR_6++] = (VAR_9->length >> 0) & 0x00FF;
  VAR_2[VAR_6++] = (VAR_9->length >> 8) & 0x00FF;
  VAR_2[VAR_6++] = VAR_9->address;
  VAR_2[VAR_6++] = VAR_9->width;
  while (VAR_10-- > 0) {
   VAR_2[VAR_6++] = *VAR_11++;
  }
 }
 return VAR_5;
}
