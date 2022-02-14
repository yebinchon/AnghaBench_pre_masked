
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct pwc_device {int ctrl_buf; int vcinterface; int udev; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct pwc_device *VAR_4,
 u8 VAR_5, u16 VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4->udev, FUNC_2(VAR_4->udev, 0),
  VAR_5,
  VAR_1 | VAR_3 | VAR_2,
  VAR_6, VAR_4->vcinterface,
  VAR_4->ctrl_buf, VAR_7, VAR_0);
 if (VAR_8 < 0)
  FUNC_0("recv_control_msg error %d req %02x val %04x\n",
     VAR_8, VAR_5, VAR_6);
 return VAR_8;
}
