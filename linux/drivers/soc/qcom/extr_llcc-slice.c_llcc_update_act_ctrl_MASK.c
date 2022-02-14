
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int bcast_regmap; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int ,int,int,int,int ,int ) ;
 int FUNC_5 (int ,int,int) ;

__attribute__((used)) static int FUNC_6(u32 VAR_3,
    u32 VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (FUNC_0(VAR_2))
  return FUNC_3(VAR_2);

 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_2(VAR_3);


 VAR_4 |= VAR_0;
 VAR_9 = FUNC_5(VAR_2->bcast_regmap, VAR_6,
    VAR_4);
 if (VAR_9)
  return VAR_9;


 VAR_4 &= ~VAR_0;
 VAR_9 = FUNC_5(VAR_2->bcast_regmap, VAR_6,
    VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_2->bcast_regmap, VAR_7,
          VAR_8, !(VAR_8 & VAR_5),
          0, VAR_1);
 return VAR_9;
}
