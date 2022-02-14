
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int dummy; } ;
struct TYPE_2__ {int major; int minor; int rev; } ;
struct aqc111_data {TYPE_1__ fw_ver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usbnet*,int ,int ,int,int,int*) ;

__attribute__((used)) static void FUNC_1(struct usbnet *VAR_4,
       struct aqc111_data *VAR_5)
{
 FUNC_0(VAR_4, VAR_0, VAR_1,
   1, 1, &VAR_5->fw_ver.major);
 FUNC_0(VAR_4, VAR_0, VAR_2,
   1, 1, &VAR_5->fw_ver.minor);
 FUNC_0(VAR_4, VAR_0, VAR_3,
   1, 1, &VAR_5->fw_ver.rev);

 if (VAR_5->fw_ver.major & 0x80)
  VAR_5->fw_ver.major &= ~0x80;
}
