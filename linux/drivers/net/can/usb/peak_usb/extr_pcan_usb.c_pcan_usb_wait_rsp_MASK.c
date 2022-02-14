
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct peak_usb_device {int state; scalar_t__ cmd_buf; int netdev; int udev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (struct peak_usb_device*,int ,int ,int *) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct peak_usb_device *VAR_6, u8 VAR_7, u8 VAR_8, u8 *VAR_9)
{
 int VAR_10;
 int VAR_11;


 if (!(VAR_6->state & VAR_5))
  return 0;


 VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_8, ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6->udev,
  FUNC_4(VAR_6->udev, VAR_4),
  VAR_6->cmd_buf, VAR_2, &VAR_11,
  VAR_3);
 if (VAR_10)
  FUNC_1(VAR_6->netdev,
   "waiting rsp f=0x%x n=0x%x failure: %d\n", VAR_7, VAR_8, VAR_10);
 else if (VAR_9)
  FUNC_0(VAR_9, VAR_6->cmd_buf + VAR_0,
   VAR_1);

 return VAR_10;
}
