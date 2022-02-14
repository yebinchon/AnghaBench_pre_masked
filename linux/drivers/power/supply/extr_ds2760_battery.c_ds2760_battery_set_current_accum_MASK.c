
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2760_device_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,unsigned char*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ds2760_device_info *VAR_1,
          unsigned int VAR_2)
{
 unsigned char VAR_3[2];


 VAR_2 *= 4L;
 VAR_2 /= 1000;

 VAR_3[0] = VAR_2 >> 8;
 VAR_3[1] = VAR_2 & 0xff;

 if (FUNC_1(VAR_1->dev, VAR_3, VAR_0, 2) < 2)
  FUNC_0(VAR_1->dev, "ACR write failed\n");
}
