
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct svc_export {int ex_flags; int * ex_uuid; } ;
struct TYPE_4__ {TYPE_1__* s_type; int s_dev; } ;
struct TYPE_3__ {int fs_flags; } ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct svc_export*) ;
 int FUNC_1 (struct svc_export*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(u8 VAR_2, struct svc_export *VAR_3)
{
 switch (VAR_2) {
 case 135:
  if (!FUNC_2(FUNC_0(VAR_3)->s_dev))
   return 0;

 case 133:
 case 134:
  return FUNC_0(VAR_3)->s_type->fs_flags & VAR_0;
 case 132:
  return VAR_3->ex_flags & VAR_1;
 case 128:
 case 131:
  if (!FUNC_1(VAR_3))
   return 0;

 case 129:
 case 130:
  return VAR_3->ex_uuid != ((void*)0);
 }
 return 1;
}
