
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_softc {int rng_last; struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,int ,int) ;
 int FUNC_3 (struct ath_softc*) ;
 int FUNC_4 (struct ath_softc*) ;

__attribute__((used)) static int FUNC_5(struct ath_softc *VAR_6, u32 *VAR_7, u32 VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12, VAR_13 = VAR_6->rng_last;
 struct ath_hw *VAR_14 = VAR_6->sc_ah;

 FUNC_4(VAR_6);

 FUNC_2(VAR_14, VAR_0, VAR_1, 1);
 FUNC_0(VAR_14, VAR_0, VAR_4);
 FUNC_2(VAR_14, VAR_3, VAR_2, 0);

 for (VAR_9 = 0, VAR_10 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_11 = FUNC_1(VAR_14, VAR_5) & 0xffff;
  VAR_12 = FUNC_1(VAR_14, VAR_5) & 0xffff;


  if (VAR_11 && VAR_12 && VAR_13 != VAR_11 && VAR_11 != VAR_12 && VAR_11 != 0xffff &&
      VAR_12 != 0xffff)
   VAR_7[VAR_10++] = (VAR_11 << 16) | VAR_12;

  VAR_13 = VAR_12;
 }

 FUNC_3(VAR_6);

 VAR_6->rng_last = VAR_13;

 return VAR_10 << 2;
}
