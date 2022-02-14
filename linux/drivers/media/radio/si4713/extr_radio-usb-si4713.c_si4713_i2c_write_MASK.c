
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct si4713_usb_device {int dummy; } ;
struct TYPE_3__ {char command_id; int payload; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct si4713_usb_device*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct si4713_usb_device *VAR_3, char *VAR_4, int VAR_5)
{
 int VAR_6 = -VAR_1;
 int VAR_7;

 if (VAR_5 > VAR_0 - 5)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); VAR_7++) {
  if (VAR_4[0] == VAR_2[VAR_7].command_id)
   VAR_6 = FUNC_1(VAR_3, VAR_2[VAR_7].payload,
      VAR_4, VAR_5);
 }

 return VAR_6 < 0 ? VAR_6 : 0;
}
