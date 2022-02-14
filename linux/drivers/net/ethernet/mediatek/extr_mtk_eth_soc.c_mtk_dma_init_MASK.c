
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_eth {TYPE_1__* soc; scalar_t__ hwlro; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct mtk_eth*) ;
 int FUNC_2 (struct mtk_eth*) ;
 int FUNC_3 (struct mtk_eth*) ;
 int FUNC_4 (struct mtk_eth*,int,int ) ;
 int FUNC_5 (struct mtk_eth*) ;
 int FUNC_6 (struct mtk_eth*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct mtk_eth *VAR_11)
{
 int VAR_12;
 u32 VAR_13;

 if (FUNC_1(VAR_11))
  return -VAR_0;

 if (FUNC_0(VAR_11->soc->caps, VAR_5)) {



  VAR_12 = FUNC_3(VAR_11);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_11);
 if (VAR_12)
  return VAR_12;

 if (FUNC_0(VAR_11->soc->caps, VAR_5)) {
  VAR_12 = FUNC_4(VAR_11, 0, VAR_10);
  if (VAR_12)
   return VAR_12;
 }

 VAR_12 = FUNC_4(VAR_11, 0, VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_11->hwlro) {
  for (VAR_13 = 1; VAR_13 < VAR_4; VAR_13++) {
   VAR_12 = FUNC_4(VAR_11, VAR_13, VAR_8);
   if (VAR_12)
    return VAR_12;
  }
  VAR_12 = FUNC_2(VAR_11);
  if (VAR_12)
   return VAR_12;
 }

 if (FUNC_0(VAR_11->soc->caps, VAR_5)) {



  FUNC_6(VAR_11, VAR_2 | VAR_1 |
   VAR_3, VAR_6);
  FUNC_6(VAR_11, 0x0, VAR_7);
 }

 return 0;
}
