
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
struct brcms_hardware {int suspended_fifos; scalar_t__* di; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_hardware*,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct brcms_hardware *VAR_1,
       uint VAR_2)
{





 if (VAR_1->di[VAR_2])
  FUNC_1(VAR_1->di[VAR_2]);


 if (VAR_1->suspended_fifos == 0)
  return;
 else {
  VAR_1->suspended_fifos &= ~(1 << VAR_2);
  if (VAR_1->suspended_fifos == 0)
   FUNC_0(VAR_1,
      VAR_0);
 }
}
