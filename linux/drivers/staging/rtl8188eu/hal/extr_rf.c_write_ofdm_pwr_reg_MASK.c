
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adapter*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_1(struct adapter *VAR_14, u8 VAR_15, u32 *VAR_16)
{
 u16 VAR_17[6] = { VAR_6, VAR_7,
          VAR_2, VAR_3,
          VAR_4, VAR_5 };
 u16 VAR_18[6] = { VAR_12, VAR_13,
          VAR_8, VAR_9,
          VAR_10, VAR_11 };
 u8 VAR_19, VAR_20, VAR_21[4];
 u32 VAR_22;
 u16 VAR_23;

 for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
  VAR_22 = VAR_16[VAR_20];
  for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
   VAR_21[VAR_19] = (u8)((VAR_22 & (0x7f<<(VAR_19*8)))>>(VAR_19*8));
   if (VAR_21[VAR_19] > VAR_0)
    VAR_21[VAR_19] = VAR_0;
  }
  VAR_22 = (VAR_21[3]<<24) | (VAR_21[2]<<16) |
       (VAR_21[1]<<8) | VAR_21[0];

  if (VAR_20 == 0)
   VAR_23 = VAR_17[VAR_15];
  else
   VAR_23 = VAR_18[VAR_15];

  FUNC_0(VAR_14, VAR_23, VAR_1, VAR_22);
 }
}
