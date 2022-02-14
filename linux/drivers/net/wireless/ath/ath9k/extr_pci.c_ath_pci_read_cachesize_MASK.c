
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ath_softc {int dev; } ;
struct ath_common {scalar_t__ priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ath_common *VAR_2, int *VAR_3)
{
 struct ath_softc *VAR_4 = (struct ath_softc *) VAR_2->priv;
 u8 VAR_5;

 FUNC_0(FUNC_1(VAR_4->dev), VAR_1, &VAR_5);
 *VAR_3 = (int)VAR_5;







 if (*VAR_3 == 0)
  *VAR_3 = VAR_0 >> 2;
}
