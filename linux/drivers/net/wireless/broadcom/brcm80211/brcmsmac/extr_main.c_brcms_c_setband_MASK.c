
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint ;
struct brcms_c_info {TYPE_1__* pub; int * bandstate; int band; } ;
struct TYPE_2__ {int up; } ;


 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct brcms_c_info*) ;

__attribute__((used)) static void FUNC_2(struct brcms_c_info *VAR_0,
        uint VAR_1)
{
 VAR_0->band = VAR_0->bandstate[VAR_1];

 if (!VAR_0->pub->up)
  return;


 FUNC_1(VAR_0);


 FUNC_0(VAR_0);
}
