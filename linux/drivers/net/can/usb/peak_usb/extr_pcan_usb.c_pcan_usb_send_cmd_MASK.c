
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct peak_usb_device {int state; int netdev; void** cmd_buf; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void**,void**,int ) ;
 int FUNC_1 (int ,char*,void*,void*,int) ;
 int FUNC_2 (int ,int ,void**,int ,int*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct peak_usb_device *VAR_8, u8 VAR_9, u8 VAR_10, u8 *VAR_11)
{
 int VAR_12;
 int VAR_13;


 if (!(VAR_8->state & VAR_7))
  return 0;

 VAR_8->cmd_buf[VAR_2] = VAR_9;
 VAR_8->cmd_buf[VAR_4] = VAR_10;

 if (VAR_11)
  FUNC_0(VAR_8->cmd_buf + VAR_0,
   VAR_11, VAR_1);

 VAR_12 = FUNC_2(VAR_8->udev,
   FUNC_3(VAR_8->udev, VAR_6),
   VAR_8->cmd_buf, VAR_3, &VAR_13,
   VAR_5);
 if (VAR_12)
  FUNC_1(VAR_8->netdev,
   "sending cmd f=0x%x n=0x%x failure: %d\n",
   VAR_9, VAR_10, VAR_12);
 return VAR_12;
}
