
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcms_hardware {int band; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct brcms_hardware*,int ,int ) ;

void FUNC_2(struct brcms_hardware *VAR_2, bool VAR_3)
{

 if (!FUNC_0(VAR_2->band))
  return;

 if (VAR_0 == VAR_3)
  FUNC_1(VAR_2, VAR_1, VAR_1);
 else
  FUNC_1(VAR_2, VAR_1, 0);

}
