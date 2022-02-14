
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ScsiReqBlk {int* msgout_buf; int msg_count; int state; } ;
struct DeviceCtlBlk {int dev_mode; } ;
struct AdapterCtlBlk {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct AdapterCtlBlk *VAR_6, struct DeviceCtlBlk *VAR_7,
  struct ScsiReqBlk *VAR_8)
{
 u8 VAR_9 = ((VAR_7->dev_mode & VAR_4) &
     (VAR_6->config & VAR_1)) ? 1 : 0;
 u8 *VAR_10 = VAR_8->msgout_buf + VAR_8->msg_count;
 if (VAR_8->msg_count > 1) {
  FUNC_0(VAR_2,
   "build_wdtr: msgout_buf BUSY (%i: %02x %02x)\n",
   VAR_8->msg_count, VAR_8->msgout_buf[0],
   VAR_8->msgout_buf[1]);
  return;
 }
 *VAR_10++ = VAR_3;
 *VAR_10++ = 2;
 *VAR_10++ = VAR_0;
 *VAR_10++ = VAR_9;
 VAR_8->msg_count += 4;
 VAR_8->state |= VAR_5;
}
