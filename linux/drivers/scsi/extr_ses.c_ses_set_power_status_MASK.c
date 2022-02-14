
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int dummy; } ;
struct enclosure_component {int power_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,struct enclosure_component*,unsigned char*) ;
 unsigned char* FUNC_1 (struct enclosure_device*,struct enclosure_component*) ;
 int FUNC_2 (struct enclosure_device*) ;
 int FUNC_3 (struct enclosure_device*,struct enclosure_component*,unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct enclosure_device *VAR_2,
    struct enclosure_component *VAR_3,
    int VAR_4)
{
 unsigned char VAR_5[4];
 unsigned char *VAR_6;

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_3);

 if (!VAR_6)
  return -VAR_1;

 FUNC_0(VAR_5, VAR_3, VAR_6);

 switch (VAR_4) {

 case 0:
  VAR_5[3] |= 0x10;
  break;
 case 1:
  VAR_5[3] &= 0xef;
  break;
 default:
  return -VAR_0;
 }
 VAR_3->power_status = VAR_4;
 return FUNC_3(VAR_2, VAR_3, VAR_5);
}
