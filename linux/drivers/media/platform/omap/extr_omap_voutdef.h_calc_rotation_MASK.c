
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_vout_device {int rotation; int mirror; } ;


 int VAR_0 ;




__attribute__((used)) static inline int FUNC_0(const struct omap_vout_device *VAR_1)
{
 if (!VAR_1->mirror)
  return VAR_1->rotation;

 switch (VAR_1->rotation) {
 case 128:
  return 129;
 case 129:
  return 128;
 case 130:
  return VAR_0;
 default:
  return 130;
 }
}
