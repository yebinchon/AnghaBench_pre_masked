
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct iwl_priv {TYPE_1__* trans; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,unsigned long*) ;
 int FUNC_3 (TYPE_1__*,unsigned long*) ;
 int FUNC_4 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_2, u32 VAR_3,
     u32 VAR_4, u32 VAR_5,
     u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10, VAR_11, VAR_12;
 unsigned long VAR_13;

 if (VAR_7 == 0)
  VAR_9 = VAR_3 + (4 * sizeof(u32)) + (VAR_4 * 2 * sizeof(u32));
 else
  VAR_9 = VAR_3 + (4 * sizeof(u32)) + (VAR_4 * 3 * sizeof(u32));


 if (!FUNC_2(VAR_2->trans, &VAR_13))
  return;


 FUNC_4(VAR_2->trans, VAR_0, VAR_9);







 if (FUNC_0(VAR_5 > VAR_6 - VAR_4))
  VAR_5 = VAR_6 - VAR_4;





 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_10 = FUNC_1(VAR_2->trans, VAR_1);
  VAR_11 = FUNC_1(VAR_2->trans, VAR_1);
  if (VAR_7 == 0) {
   FUNC_5(
     VAR_2->trans->dev, 0, VAR_11, VAR_10);
  } else {
   VAR_12 = FUNC_1(VAR_2->trans, VAR_1);
   FUNC_5(
     VAR_2->trans->dev, VAR_11, VAR_12, VAR_10);
  }
 }

 FUNC_3(VAR_2->trans, &VAR_13);
}
