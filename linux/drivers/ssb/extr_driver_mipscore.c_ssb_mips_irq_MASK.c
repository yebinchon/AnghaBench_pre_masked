
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_device {struct ssb_bus* bus; } ;
struct TYPE_2__ {struct ssb_device* dev; } ;
struct ssb_bus {TYPE_1__ mipscore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct ssb_device*) ;
 int FUNC_1 (struct ssb_device*,int ) ;

unsigned int FUNC_2(struct ssb_device *VAR_4)
{
 struct ssb_bus *VAR_5 = VAR_4->bus;
 struct ssb_device *VAR_6 = VAR_5->mipscore.dev;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 unsigned int VAR_10;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 == 0x3f)
  return 6;
 VAR_8 = FUNC_1(VAR_5->mipscore.dev, VAR_1);
 for (VAR_10 = 1; VAR_10 <= 4; VAR_10++) {
  VAR_9 = ((VAR_8 & VAR_2[VAR_10]) >> VAR_3[VAR_10]);
  if (VAR_9 == VAR_7)
   break;
 }
 if (VAR_10 == 5) {
  if ((1 << VAR_7) & FUNC_1(VAR_6, VAR_0))
   VAR_10 = 0;
 }

 return VAR_10;
}
