
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct meson_spicc_device {TYPE_1__* pdev; int core; } ;
struct TYPE_2__ {int dev; } ;


 unsigned long FUNC_0 (unsigned long,unsigned int) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,unsigned long,unsigned long,unsigned long,unsigned int) ;
 int FUNC_3 (int *,char*,unsigned long) ;

__attribute__((used)) static u32 FUNC_4(struct meson_spicc_device *VAR_1, u32 VAR_2,
       u32 VAR_3)
{
 unsigned long VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_4 = FUNC_1(VAR_1->core);


 for (VAR_6 = 0 ; VAR_6 < 7 ; ++VAR_6) {

  VAR_5 = VAR_4 >> (VAR_6 + 2);

  if (VAR_5 <= VAR_3)
   break;
 }


 if (VAR_6 > 7) {
  VAR_7 = 7;
  FUNC_3(&VAR_1->pdev->dev, "unable to get close to speed %u\n",
         VAR_3);
 } else
  VAR_7 = VAR_6;

 FUNC_2(&VAR_1->pdev->dev, "parent %lu, speed %u -> %lu (%u)\n",
  VAR_4, VAR_3, VAR_5, VAR_7);

 VAR_2 &= ~VAR_0;
 VAR_2 |= FUNC_0(VAR_0, VAR_7);

 return VAR_2;
}
