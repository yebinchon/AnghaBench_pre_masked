
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;
typedef enum mv88e6xxx_frame_mode { ____Placeholder_mv88e6xxx_frame_mode } mv88e6xxx_frame_mode ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int ) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_7, int VAR_8,
      enum mv88e6xxx_frame_mode VAR_9)
{
 int VAR_10;
 u16 VAR_11;

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_1, &VAR_11);
 if (VAR_10)
  return VAR_10;

 VAR_11 &= ~VAR_4;

 switch (VAR_9) {
 case 129:
  VAR_11 |= VAR_5;
  break;
 case 131:
  VAR_11 |= VAR_2;
  break;
 case 128:
  VAR_11 |= VAR_6;
  break;
 case 130:
  VAR_11 |= VAR_3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_7, VAR_8, VAR_1, VAR_11);
}
