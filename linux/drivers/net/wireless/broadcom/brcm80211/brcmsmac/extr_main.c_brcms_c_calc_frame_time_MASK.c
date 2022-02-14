
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct brcms_c_info {TYPE_3__* band; TYPE_2__* pub; TYPE_1__* hw; } ;
struct TYPE_6__ {scalar_t__ bandtype; } ;
struct TYPE_5__ {int unit; } ;
struct TYPE_4__ {int d11core; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static uint FUNC_10(struct brcms_c_info *VAR_16, u32 VAR_17,
        u8 VAR_18, uint VAR_19)
{
 uint VAR_20, VAR_21 = 0, VAR_22, VAR_23;
 uint VAR_24 = FUNC_6(VAR_17);

 if (VAR_24 == 0) {
  FUNC_1(VAR_16->hw->d11core, "wl%d: WAR: using rate of 1 mbps\n",
     VAR_16->pub->unit);
  VAR_24 = VAR_10;
 }

 if (FUNC_2(VAR_17)) {
  uint VAR_25 = VAR_17 & VAR_15;
  int VAR_26 = FUNC_5(VAR_25) + FUNC_9(VAR_17);

  VAR_21 = VAR_13 + (VAR_26 * VAR_14);
  if (VAR_18 == VAR_7)
   VAR_21 += VAR_12;

  VAR_23 = FUNC_4(VAR_25, FUNC_7(VAR_17),
       FUNC_8(VAR_17)) * 4;

  if (FUNC_9(VAR_17) == 0)
   VAR_20 =
       FUNC_0((VAR_1 + 8 * VAR_19 +
      VAR_4) * 1000, VAR_23);
  else

   VAR_20 =
       2 *
       FUNC_0((VAR_1 + 8 * VAR_19 +
      VAR_4) * 1000, 2 * VAR_23);

  VAR_21 += VAR_3 * VAR_20;
  if (VAR_16->band->bandtype == VAR_9)
   VAR_21 += VAR_11;
 } else if (FUNC_3(VAR_24)) {
  VAR_21 = VAR_0;
  VAR_21 += VAR_2;

  VAR_22 = VAR_24 * 2;

  VAR_20 =
      FUNC_0((VAR_1 + 8 * VAR_19 + VAR_4),
    VAR_22);
  VAR_21 += VAR_3 * VAR_20;
  if (VAR_16->band->bandtype == VAR_9)
   VAR_21 += VAR_11;
 } else {




  VAR_19 = VAR_19 * 8 * 2;

  VAR_21 = (VAR_19 + VAR_24 - 1) / VAR_24;
  if (VAR_18 & VAR_8)
   VAR_21 += VAR_5;
  else
   VAR_21 += VAR_6;
 }
 return VAR_21;
}
