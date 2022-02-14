
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_eth {TYPE_1__* soc; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct mtk_eth*) ;
 int FUNC_2 (struct mtk_eth*) ;
 int FUNC_3 (struct mtk_eth*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_eth *VAR_13)
{
 u32 VAR_14 = (VAR_12 == 2) ? VAR_7 : 0;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15) {
  FUNC_1(VAR_13);
  return VAR_15;
 }

 if (FUNC_0(VAR_13->soc->caps, VAR_5)) {
  FUNC_3(VAR_13,
   VAR_11 | VAR_10 |
   VAR_0 | VAR_2 |
   VAR_9 | VAR_7 |
   VAR_8,
   VAR_6);

  FUNC_3(VAR_13,
   VAR_9 | VAR_14 |
   VAR_8 | VAR_1,
   VAR_3);
 } else {
  FUNC_3(VAR_13, VAR_11 | VAR_10 | VAR_9 |
   VAR_1 | VAR_4,
   VAR_3);
 }

 return 0;
}
