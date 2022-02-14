
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tg3_firmware_hdr {int base_addr; } ;
struct tg3 {TYPE_1__* fw; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int ,scalar_t__,int ,struct tg3_firmware_hdr*) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 int FUNC_4 (struct tg3*) ;
 scalar_t__ FUNC_5 (struct tg3*) ;

__attribute__((used)) static void FUNC_6(struct tg3 *VAR_2)
{
 struct tg3_firmware_hdr *VAR_3;

 if (!FUNC_1(VAR_2, VAR_0))
  return;

 if (FUNC_5(VAR_2))
  return;

 if (!VAR_2->fw)
  return;
 VAR_3 = (struct tg3_firmware_hdr *)VAR_2->fw->data;
 if (FUNC_0(VAR_3->base_addr) != VAR_1)
  return;

 if (FUNC_3(VAR_2))
  return;


 FUNC_2(VAR_2, 0, VAR_1, 0, VAR_3);

 FUNC_4(VAR_2);
}
