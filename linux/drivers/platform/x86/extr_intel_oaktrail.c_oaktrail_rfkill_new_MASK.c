
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct rfkill {int dummy; } ;
typedef enum rfkill_type { ____Placeholder_rfkill_type } rfkill_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct rfkill* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned long*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 struct rfkill* FUNC_2 (char*,int *,int,int *,void*) ;
 int FUNC_3 (struct rfkill*) ;
 int FUNC_4 (struct rfkill*,int) ;
 int FUNC_5 (struct rfkill*) ;

__attribute__((used)) static struct rfkill *FUNC_6(char *VAR_4, enum rfkill_type VAR_5,
       unsigned long VAR_6)
{
 struct rfkill *VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_4, &VAR_2->dev, VAR_5,
      &VAR_3, (void *)VAR_6);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_1(VAR_1, &VAR_8);
 FUNC_4(VAR_7, (VAR_8 & VAR_6) != 1);

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9) {
  FUNC_3(VAR_7);
  return FUNC_0(VAR_9);
 }

 return VAR_7;
}
