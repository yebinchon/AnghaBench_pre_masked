
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spear_smi {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct spear_smi*,int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct spear_smi *VAR_4, u32 VAR_5,
  unsigned long VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 VAR_7 = VAR_3 + VAR_6;
 do {
  VAR_8 = FUNC_2(VAR_4, VAR_5);
  if (VAR_8 < 0) {
   if (VAR_8 == -VAR_1)
    continue;
   return VAR_8;
  } else if (!(VAR_8 & VAR_2)) {
   return 0;
  }

  FUNC_0();
 } while (!FUNC_3(VAR_3, VAR_7));

 FUNC_1(&VAR_4->pdev->dev, "smi controller is busy, timeout\n");
 return -VAR_0;
}
