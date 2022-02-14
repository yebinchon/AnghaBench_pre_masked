
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_hardware {int up; int bmac_phytxant; } ;


 int FUNC_0 (struct brcms_hardware*) ;

void FUNC_1(struct brcms_hardware *VAR_0, u16 VAR_1)
{

 VAR_0->bmac_phytxant = VAR_1;


 if (!VAR_0->up)
  return;
 FUNC_0(VAR_0);

}
