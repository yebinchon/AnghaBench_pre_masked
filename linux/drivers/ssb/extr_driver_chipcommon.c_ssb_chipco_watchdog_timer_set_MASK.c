
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_chipcommon {int capabilities; } ;
typedef enum ssb_clkmode { ____Placeholder_ssb_clkmode } ssb_clkmode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ssb_chipcommon*,int ,int) ;
 int FUNC_1 (struct ssb_chipcommon*,int) ;
 int FUNC_2 (struct ssb_chipcommon*) ;

u32 FUNC_3(struct ssb_chipcommon *VAR_5, u32 VAR_6)
{
 u32 VAR_7;
 enum ssb_clkmode VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_5->capabilities & VAR_0) {
  if (VAR_6 == 1)
   VAR_6 = 2;
  else if (VAR_6 > VAR_7)
   VAR_6 = VAR_7;
  FUNC_0(VAR_5, VAR_1, VAR_6);
 } else {
  VAR_8 = VAR_6 ? VAR_4 : VAR_3;
  FUNC_1(VAR_5, VAR_8);
  if (VAR_6 > VAR_7)
   VAR_6 = VAR_7;

  FUNC_0(VAR_5, VAR_2, VAR_6);
 }
 return VAR_6;
}
