
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smsusb_device_t {TYPE_1__* udev; } ;
struct TYPE_2__ {char* product; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int *VAR_2)
{
 char *VAR_3 =
  ((struct smsusb_device_t *) VAR_1)->udev->product;

 *VAR_2 = VAR_0;

 if (!VAR_3) {
  VAR_3 = "none";
  FUNC_1("product string not found\n");
 } else if (FUNC_2(VAR_3, "DVBH"))
  *VAR_2 = 1;
 else if (FUNC_2(VAR_3, "BDA"))
  *VAR_2 = 4;
 else if (FUNC_2(VAR_3, "DVBT"))
  *VAR_2 = 0;
 else if (FUNC_2(VAR_3, "TDMB"))
  *VAR_2 = 2;

 FUNC_0("%d \"%s\"\n", *VAR_2, VAR_3);
}
