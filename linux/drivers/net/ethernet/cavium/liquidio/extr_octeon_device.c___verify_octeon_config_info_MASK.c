
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_device {int chip_id; } ;






 int FUNC_0 (struct octeon_device*,void*) ;

__attribute__((used)) static int FUNC_1(struct octeon_device *VAR_0, void *VAR_1)
{
 switch (VAR_0->chip_id) {
 case 129:
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 case 131:
 case 130:
  return 0;
 default:
  break;
 }

 return 1;
}
