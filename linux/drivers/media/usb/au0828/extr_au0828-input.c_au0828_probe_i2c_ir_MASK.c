
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int adapter; } ;
struct au0828_dev {TYPE_1__ i2c_client; } ;


 int VAR_0 ;

 int FUNC_0 (int ,unsigned short const) ;

__attribute__((used)) static int FUNC_1(struct au0828_dev *VAR_1)
{
 int VAR_2 = 0;
 static const unsigned short VAR_3[] = {
   0x47, 128
 };

 while (VAR_3[VAR_2] != 128) {
  if (FUNC_0(VAR_1->i2c_client.adapter,
           VAR_3[VAR_2]) == 1)
   return VAR_3[VAR_2];
  VAR_2++;
 }

 return -VAR_0;
}
