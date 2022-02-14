
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int dummy; } ;
struct enclosure_component {int locate; } ;


 unsigned char* FUNC_0 (struct enclosure_device*,struct enclosure_component*) ;
 int FUNC_1 (struct enclosure_device*) ;

__attribute__((used)) static void FUNC_2(struct enclosure_device *VAR_0,
      struct enclosure_component *VAR_1)
{
 unsigned char *VAR_2;

 if (!FUNC_1(VAR_0)) {
  VAR_1->locate = 0;
  return;
 }
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  VAR_1->locate = (VAR_2[2] & 0x02) ? 1 : 0;
}
