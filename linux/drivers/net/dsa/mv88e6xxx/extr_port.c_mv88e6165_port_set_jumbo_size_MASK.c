
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int ) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_6, int VAR_7,
      size_t VAR_8)
{
 u16 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_1, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9 &= ~VAR_5;

 if (VAR_8 <= 1522)
  VAR_9 |= VAR_3;
 else if (VAR_8 <= 2048)
  VAR_9 |= VAR_4;
 else if (VAR_8 <= 10240)
  VAR_9 |= VAR_2;
 else
  return -VAR_0;

 return FUNC_1(VAR_6, VAR_7, VAR_1, VAR_9);
}
