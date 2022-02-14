
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int oem_ver; scalar_t__ eetrack; int version; } ;
struct i40e_hw {TYPE_1__ nvm; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*,int,char*,int,int,scalar_t__,...) ;

__attribute__((used)) static inline char *FUNC_1(struct i40e_hw *VAR_13)
{
 static char VAR_14[32];
 u32 VAR_15;

 VAR_15 = VAR_13->nvm.oem_ver;

 if (VAR_13->nvm.eetrack == VAR_4) {
  u8 VAR_16, VAR_17;
  u16 VAR_18;

  VAR_16 = (u8)(VAR_15 >> VAR_5);
  VAR_17 = (u8)((VAR_15 & VAR_7) >>
   VAR_8);
  VAR_18 = (u16)(VAR_15 & VAR_6);

  FUNC_0(VAR_14, sizeof(VAR_14), "%x.%x.%x", VAR_16, VAR_17, VAR_18);
 } else {
  u8 VAR_19, VAR_20;
  u16 VAR_21;

  VAR_19 = (u8)(VAR_15 >> VAR_12);
  VAR_21 = (u16)((VAR_15 >> VAR_10) &
    VAR_9);
  VAR_20 = (u8)(VAR_15 & VAR_11);

  FUNC_0(VAR_14, sizeof(VAR_14),
    "%x.%02x 0x%x %d.%d.%d",
    (VAR_13->nvm.version & VAR_0) >>
    VAR_1,
    (VAR_13->nvm.version & VAR_2) >>
    VAR_3,
    VAR_13->nvm.eetrack, VAR_19, VAR_21, VAR_20);
 }

 return VAR_14;
}
