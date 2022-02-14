
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tdfx_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned short VAR_10 ;
 int FUNC_0 (struct tdfx_par*,int) ;
 int FUNC_1 (struct tdfx_par*,int ) ;
 int FUNC_2 (struct tdfx_par*,int ,int) ;

__attribute__((used)) static unsigned long FUNC_3(struct tdfx_par *VAR_11, unsigned short VAR_12)
{
 u32 VAR_13 = FUNC_1(VAR_11, VAR_0);
 u32 VAR_14 = FUNC_1(VAR_11, VAR_5);
 u32 VAR_15;
 int VAR_16 = (VAR_13 & VAR_1) ? 8 : 4;
 int VAR_17;
 int VAR_18 = VAR_14 & VAR_6;

 if (VAR_12 < VAR_10) {

  VAR_17 = 2;
  if (VAR_18 && !(VAR_13 & VAR_2))
   VAR_17 = 1;
 } else {

  VAR_18 = 0;
  VAR_17 = VAR_13 & VAR_3;
  VAR_17 = 1 << (VAR_17 >> VAR_4);
 }


 VAR_15 = FUNC_1(VAR_11, VAR_7);
 VAR_15 |= VAR_18 ? 0 : VAR_8;
 VAR_15 |= VAR_9;

 FUNC_0(VAR_11, 1);
 FUNC_2(VAR_11, VAR_7, VAR_15);
 return VAR_16 * VAR_17 * 1024l * 1024;
}
