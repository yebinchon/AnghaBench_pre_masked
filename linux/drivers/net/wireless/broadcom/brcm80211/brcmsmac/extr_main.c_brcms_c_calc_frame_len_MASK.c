
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct brcms_c_info {TYPE_1__* band; } ;
struct TYPE_2__ {scalar_t__ bandtype; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static uint
FUNC_8(struct brcms_c_info *VAR_13, u32 VAR_14,
     u8 VAR_15, uint VAR_16)
{
 uint VAR_17, VAR_18, VAR_19, VAR_20;
 uint VAR_21 = FUNC_4(VAR_14);

 if (FUNC_0(VAR_14)) {
  uint VAR_22 = VAR_14 & VAR_12;
  int VAR_23 = FUNC_3(VAR_22) + FUNC_7(VAR_14);
  VAR_16 -= VAR_10 + (VAR_23 * VAR_11);

  if (VAR_13->band->bandtype == VAR_8)
   VAR_16 -= VAR_9;

  VAR_20 = FUNC_2(VAR_22, FUNC_5(VAR_14),
       FUNC_6(VAR_14)) * 4;
  VAR_17 = VAR_16 / VAR_3;
  VAR_18 =
      ((VAR_17 * VAR_20) -
       ((VAR_1 + VAR_4) * 1000)) / 8000;
 } else if (FUNC_1(VAR_14)) {
  VAR_16 -= VAR_0;
  VAR_16 -= VAR_2;

  VAR_19 = VAR_21 * 2;
  VAR_17 = VAR_16 / VAR_3;
  VAR_18 =
      ((VAR_17 * VAR_19) -
       (VAR_1 + VAR_4)) / 8;
 } else {
  if (VAR_15 & VAR_7)
   VAR_16 -= VAR_5;
  else
   VAR_16 -= VAR_6;
  VAR_18 = VAR_16 * VAR_21;

  VAR_18 = VAR_18 / 8 / 2;
 }
 return VAR_18;
}
