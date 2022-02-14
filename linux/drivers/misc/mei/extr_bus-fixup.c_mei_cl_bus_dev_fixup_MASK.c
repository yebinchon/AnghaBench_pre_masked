
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
struct mei_fixup {int (* hook ) (struct mei_cl_device*) ;int uuid; } ;
struct mei_cl_device {int me_cl; } ;


 size_t FUNC_0 (struct mei_fixup*) ;
 int const VAR_0 ;
 struct mei_fixup* VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct mei_cl_device*) ;
 scalar_t__ FUNC_3 (int ,int const) ;

void FUNC_4(struct mei_cl_device *VAR_2)
{
 struct mei_fixup *VAR_3;
 const uuid_le *VAR_4 = FUNC_1(VAR_2->me_cl);
 size_t VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {

  VAR_3 = &VAR_1[VAR_5];
  if (FUNC_3(VAR_3->uuid, VAR_0) == 0 ||
      FUNC_3(VAR_3->uuid, *VAR_4) == 0)
   VAR_3->hook(VAR_2);
 }
}
