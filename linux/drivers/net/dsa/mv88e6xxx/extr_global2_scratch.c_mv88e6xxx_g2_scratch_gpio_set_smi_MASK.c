
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_7,
          bool VAR_8)
{
 int VAR_9 = VAR_5;
 int VAR_10 = VAR_1;
 int VAR_11 = VAR_3;
 bool VAR_12;
 u8 VAR_13;
 int VAR_14;
 u8 VAR_15;

 VAR_14 = FUNC_0(VAR_7, VAR_11, &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_13 = VAR_15 & VAR_4;

 if (VAR_13 == 0x01 || VAR_13 == 0x02)
  return -VAR_0;

 VAR_14 = FUNC_0(VAR_7, VAR_10, &VAR_15);
 if (VAR_14)
  return VAR_14;

 VAR_12 = !!(VAR_15 & VAR_2);

 VAR_14 = FUNC_0(VAR_7, VAR_9, &VAR_15);
 if (VAR_14)
  return VAR_14;


 if (!VAR_12)
  VAR_8 = !VAR_8;

 if (VAR_8)
  VAR_15 |= VAR_6;
 else
  VAR_15 &= ~VAR_6;

 return FUNC_1(VAR_7, VAR_9, VAR_15);
}
