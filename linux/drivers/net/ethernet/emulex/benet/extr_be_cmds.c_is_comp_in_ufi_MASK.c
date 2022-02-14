
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flash_section_info_g2 {TYPE_2__* fsec_entry; } ;
struct flash_section_info {TYPE_1__* fsec_entry; } ;
struct be_adapter {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {int type; } ;


 scalar_t__ FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct be_adapter *VAR_1,
      struct flash_section_info *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;
 struct flash_section_info_g2 *VAR_6 = ((void*)0);

 if (FUNC_0(VAR_1))
  VAR_6 = (struct flash_section_info_g2 *)VAR_2;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_6)
   VAR_5 = FUNC_1(VAR_6->fsec_entry[VAR_4].type);
  else
   VAR_5 = FUNC_1(VAR_2->fsec_entry[VAR_4].type);

  if (VAR_5 == VAR_3)
   return 1;
 }
 return 0;
}
