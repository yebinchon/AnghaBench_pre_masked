
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pvr2_hdw {int* cmd_buffer; int ctl_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (struct pvr2_hdw*,int*,int,int*,int) ;
 int FUNC_5 (int ,char*,int,int,unsigned int) ;
 int FUNC_6 (char*,int,int) ;

__attribute__((used)) static int FUNC_7(struct pvr2_hdw *VAR_4,
    u8 VAR_5,
    u8 *VAR_6,
    u16 VAR_7,
    u8 *VAR_8,
    u16 VAR_9)
{

 int VAR_10;


 if (!VAR_6) VAR_7 = 0;
 if (VAR_7 > (sizeof(VAR_4->cmd_buffer) - 4)) {
  FUNC_5(VAR_3,
      "Killing an I2C read to %u that has wlen too large (desired=%u limit=%u)",
      VAR_5,
      VAR_7,(unsigned int)(sizeof(VAR_4->cmd_buffer) - 4));
  return -VAR_1;
 }
 if (VAR_8 && (VAR_9 > (sizeof(VAR_4->cmd_buffer) - 1))) {
  FUNC_5(VAR_3,
      "Killing an I2C read to %u that has rlen too large (desired=%u limit=%u)",
      VAR_5,
      VAR_9,(unsigned int)(sizeof(VAR_4->cmd_buffer) - 1));
  return -VAR_1;
 }

 FUNC_1(VAR_4->ctl_lock);


 FUNC_3(VAR_4->cmd_buffer, 0, sizeof(VAR_4->cmd_buffer));


 VAR_4->cmd_buffer[0] = VAR_2;
 VAR_4->cmd_buffer[1] = VAR_7;
 VAR_4->cmd_buffer[2] = VAR_9;

 VAR_4->cmd_buffer[3] = VAR_5;
 if (VAR_7) FUNC_2(VAR_4->cmd_buffer + 4, VAR_6, VAR_7);


 VAR_10 = FUNC_4(VAR_4,
    VAR_4->cmd_buffer,
    4 + VAR_7,
    VAR_4->cmd_buffer,
    VAR_9 + 1);
 if (!VAR_10) {
  if (VAR_4->cmd_buffer[0] != 8) {
   VAR_10 = -VAR_0;
   if (VAR_4->cmd_buffer[0] != 7) {
    FUNC_6("unexpected status from i2_read[%d]: %d",
       VAR_5,VAR_4->cmd_buffer[0]);
   }
  }
 }


 if (VAR_8 && VAR_9) {
  if (VAR_10) {

   FUNC_3(VAR_8, 0, VAR_9);
  } else {
   FUNC_2(VAR_8, VAR_4->cmd_buffer + 1, VAR_9);
  }
 }

 FUNC_0(VAR_4->ctl_lock);

 return VAR_10;
}
