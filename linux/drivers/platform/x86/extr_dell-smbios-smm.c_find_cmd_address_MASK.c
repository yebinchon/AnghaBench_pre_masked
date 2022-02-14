
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmi_header {int type; } ;


 int FUNC_0 (struct dmi_header const*) ;

__attribute__((used)) static void FUNC_1(const struct dmi_header *VAR_0, void *VAR_1)
{
 switch (VAR_0->type) {
 case 0xda:
  FUNC_0(VAR_0);
  break;
 }
}
