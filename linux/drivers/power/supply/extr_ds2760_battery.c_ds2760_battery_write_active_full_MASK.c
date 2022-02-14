
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct ds2760_device_info {unsigned char* raw; int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,unsigned char*,size_t,int) ;

__attribute__((used)) static void FUNC_3(struct ds2760_device_info *VAR_2,
          int VAR_3)
{
 unsigned char VAR_4[2] = {
  VAR_3 >> 8,
  VAR_3 & 0xff
 };

 if (VAR_4[0] == VAR_2->raw[VAR_0] &&
     VAR_4[1] == VAR_2->raw[VAR_0 + 1])
  return;

 FUNC_2(VAR_2->dev, VAR_4, VAR_0, sizeof(VAR_4));
 FUNC_1(VAR_2->dev, VAR_1);
 FUNC_0(VAR_2->dev, VAR_1);



 VAR_2->raw[VAR_0] = VAR_4[0];
 VAR_2->raw[VAR_0 + 1] = VAR_4[1];
}
