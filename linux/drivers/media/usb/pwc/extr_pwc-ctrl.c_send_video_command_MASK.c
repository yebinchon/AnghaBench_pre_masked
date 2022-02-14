
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {int cmd_buf; int ctrl_buf; int udev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,unsigned char const*,int) ;
 int FUNC_2 (int ,int ,int ,int,int ,int,int ,int,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline int FUNC_4(struct pwc_device *VAR_6,
 int VAR_7, const unsigned char *VAR_8, int VAR_9)
{
 int VAR_10;

 FUNC_1(VAR_6->ctrl_buf, VAR_8, VAR_9);

 VAR_10 = FUNC_2(VAR_6->udev, FUNC_3(VAR_6->udev, 0),
   VAR_0,
   VAR_2 | VAR_4 | VAR_3,
   VAR_5, VAR_7,
   VAR_6->ctrl_buf, VAR_9, VAR_1);
 if (VAR_10 >= 0)
  FUNC_1(VAR_6->cmd_buf, VAR_8, VAR_9);
 else
  FUNC_0("send_video_command error %d\n", VAR_10);

 return VAR_10;
}
