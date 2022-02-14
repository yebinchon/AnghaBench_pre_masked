
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chiprev; int devid; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; int fw_name; } ;
struct brcmf_fw_request {TYPE_2__* items; } ;
struct brcmf_fw_name {char* member_0; int member_1; } ;
struct TYPE_4__ {int type; } ;


 int FUNC_0 (struct brcmf_fw_name*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 struct brcmf_fw_request* FUNC_1 (int ,int ,struct brcmf_fw_name*,int ,struct brcmf_fw_name*,int ) ;
 struct brcmf_fw_name* VAR_2 ;

__attribute__((used)) static struct brcmf_fw_request *
FUNC_2(struct brcmf_usbdev_info *VAR_3)
{
 struct brcmf_fw_request *VAR_4;
 struct brcmf_fw_name VAR_5[] = {
  { ".bin", VAR_3->fw_name },
 };

 VAR_4 = FUNC_1(VAR_3->bus_pub.devid,
           VAR_3->bus_pub.chiprev,
           VAR_2,
           FUNC_0(VAR_2),
           VAR_5, FUNC_0(VAR_5));
 if (!VAR_4)
  return ((void*)0);

 VAR_4->items[VAR_1].type = VAR_0;

 return VAR_4;
}
