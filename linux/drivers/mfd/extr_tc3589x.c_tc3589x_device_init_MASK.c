
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc3589x {int dev; int domain; TYPE_1__* pdata; } ;
struct TYPE_2__ {unsigned int block; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int ,int ,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct tc3589x *VAR_4)
{
 int VAR_5 = 0;
 unsigned int VAR_6 = VAR_4->pdata->block;

 if (VAR_6 & VAR_0) {
  VAR_5 = FUNC_3(VAR_4->dev, -1, VAR_2,
          FUNC_0(VAR_2), ((void*)0),
          0, VAR_4->domain);
  if (VAR_5) {
   FUNC_1(VAR_4->dev, "failed to add gpio child\n");
   return VAR_5;
  }
  FUNC_2(VAR_4->dev, "added gpio block\n");
 }

 if (VAR_6 & VAR_1) {
  VAR_5 = FUNC_3(VAR_4->dev, -1, VAR_3,
          FUNC_0(VAR_3), ((void*)0),
          0, VAR_4->domain);
  if (VAR_5) {
   FUNC_1(VAR_4->dev, "failed to keypad child\n");
   return VAR_5;
  }
  FUNC_2(VAR_4->dev, "added keypad block\n");
 }

 return VAR_5;
}
