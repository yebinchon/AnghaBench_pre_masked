
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_hardware {scalar_t__* di; } ;
struct brcms_c_info {TYPE_1__* pub; struct brcms_hardware* hw; } ;
struct TYPE_2__ {int ieee_hw; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct brcms_c_info *VAR_4)
{
 struct brcms_hardware *VAR_5 = VAR_4->hw;
 uint VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (VAR_5->di[VAR_6]) {
   FUNC_2(VAR_5->di[VAR_6], VAR_0);
   if (VAR_6 < VAR_3)
    FUNC_3(VAR_4->pub->ieee_hw,
           FUNC_0(VAR_6));
  }
 }


 FUNC_1(VAR_5->di[VAR_2]);
}
