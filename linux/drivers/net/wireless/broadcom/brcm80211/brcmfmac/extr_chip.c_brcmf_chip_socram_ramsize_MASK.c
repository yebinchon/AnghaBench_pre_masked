
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
typedef int u32 ;
struct TYPE_7__ {int rev; } ;
struct brcmf_core_priv {TYPE_2__* chip; TYPE_3__ pub; } ;
struct TYPE_5__ {int chip; int chiprev; } ;
struct TYPE_6__ {TYPE_1__ pub; } ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct brcmf_core_priv*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (struct brcmf_core_priv*,int,int*) ;

__attribute__((used)) static void FUNC_6(struct brcmf_core_priv *VAR_7, u32 *VAR_8,
          u32 *VAR_9)
{
 u32 VAR_10;
 uint VAR_11, VAR_12, VAR_13;
 bool VAR_14;
 int VAR_15;

 *VAR_8 = 0;
 *VAR_9 = 0;

 if (FUNC_1(VAR_7->pub.rev < 4))
  return;

 if (!FUNC_3(&VAR_7->pub))
  FUNC_4(&VAR_7->pub, 0, 0, 0);


 VAR_10 = FUNC_2(VAR_7, FUNC_0(VAR_10));
 VAR_11 = (VAR_10 & VAR_3) >> VAR_5;

 if ((VAR_7->pub.rev <= 7) || (VAR_7->pub.rev == 12)) {
  VAR_12 = (VAR_10 & VAR_2);
  VAR_13 = (VAR_10 & VAR_0) >> VAR_1;
  if (VAR_13 != 0)
   VAR_11--;
  *VAR_8 = VAR_11 * (1 << (VAR_12 + VAR_6));
  if (VAR_13 != 0)
   *VAR_8 += (1 << ((VAR_13 - 1) + VAR_6));
 } else {

  if (VAR_7->pub.rev >= 23) {
   VAR_11 = (VAR_10 & (VAR_3 | VAR_4))
    >> VAR_5;
  } else {
   VAR_11 = (VAR_10 & VAR_3) >> VAR_5;
  }
  for (VAR_15 = 0; VAR_15 < VAR_11; VAR_15++) {
   VAR_14 = FUNC_5(VAR_7, VAR_15, &VAR_12);
   *VAR_8 += VAR_12;
   if (VAR_14)
    *VAR_9 += VAR_12;
  }
 }


 switch (VAR_7->chip->pub.chip) {
 case 129:
  if (VAR_7->chip->pub.chiprev < 2)
   *VAR_9 = (32 * 1024);
  break;
 case 128:



  *VAR_9 = (64 * 1024);
  break;
 default:
  break;
 }
}
