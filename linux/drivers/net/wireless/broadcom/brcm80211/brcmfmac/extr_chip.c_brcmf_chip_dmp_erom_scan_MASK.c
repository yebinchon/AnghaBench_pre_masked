
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct brcmf_core {scalar_t__ rev; } ;
struct brcmf_chip_priv {int ctx; TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* read32 ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (struct brcmf_core*) ;
 int FUNC_2 (struct brcmf_core*) ;
 int VAR_20 ;
 scalar_t__ FUNC_3 (int) ;
 struct brcmf_core* FUNC_4 (struct brcmf_chip_priv*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct brcmf_chip_priv*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (struct brcmf_chip_priv*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_21 ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static
int FUNC_8(struct brcmf_chip_priv *VAR_22)
{
 struct brcmf_core *VAR_23;
 u32 VAR_24;
 u8 VAR_25 = 0;
 u32 VAR_26;
 u16 VAR_27;
 u8 VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 u32 VAR_33, VAR_34;
 int VAR_35;

 VAR_24 = VAR_22->ops->read32(VAR_22->ctx, FUNC_0(VAR_20, VAR_21));

 while (VAR_25 != VAR_16) {
  VAR_26 = FUNC_5(VAR_22, &VAR_24, &VAR_25);
  if (!(VAR_26 & VAR_18))
   continue;

  if (VAR_25 == VAR_15)
   continue;


  if (VAR_25 != VAR_14)
   continue;

  VAR_27 = (VAR_26 & VAR_10) >> VAR_11;


  VAR_26 = FUNC_5(VAR_22, &VAR_24, &VAR_25);
  if (FUNC_3((VAR_26 & VAR_17) != VAR_14))
   return -VAR_19;


  VAR_28 = (VAR_26 & VAR_2) >> VAR_3;
  VAR_29 = (VAR_26 & VAR_6) >> VAR_7;
  VAR_30 = (VAR_26 & VAR_4) >> VAR_5;
  VAR_31 = (VAR_26 & VAR_8) >> VAR_9;
  VAR_32 = (VAR_26 & VAR_12) >> VAR_13;


  if (VAR_30 + VAR_31 == 0 &&
      VAR_27 != VAR_1 &&
      VAR_27 != VAR_0)
   continue;


  VAR_35 = FUNC_6(VAR_22, &VAR_24, &VAR_33, &VAR_34);
  if (VAR_35)
   continue;


  VAR_23 = FUNC_4(VAR_22, VAR_27, VAR_33, VAR_34);
  if (FUNC_1(VAR_23))
   return FUNC_2(VAR_23);

  VAR_23->rev = VAR_32;
 }

 return 0;
}
