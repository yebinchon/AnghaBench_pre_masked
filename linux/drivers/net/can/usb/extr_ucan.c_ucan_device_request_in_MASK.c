
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ucan_priv {int ctl_msg_buffer; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ucan_priv *VAR_4,
      u8 VAR_5, u16 VAR_6, u16 VAR_7)
{
 return FUNC_0(VAR_4->udev,
          FUNC_1(VAR_4->udev, 0),
          VAR_5,
          VAR_1 | VAR_3 | VAR_2,
          VAR_6,
          0,
          VAR_4->ctl_msg_buffer,
          VAR_7,
          VAR_0);
}
