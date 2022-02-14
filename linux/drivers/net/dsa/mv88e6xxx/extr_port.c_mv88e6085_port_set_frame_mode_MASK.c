
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
 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int *) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int ) ;

int FUNC_2(struct mv88e6xxx_chip *VAR_5, int VAR_6,
      enum mv88e6xxx_frame_mode VAR_7)
{
 int VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_1, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_9 &= ~VAR_3;

 switch (VAR_7) {
 case 128:
  VAR_9 |= VAR_4;
  break;
 case 129:
  VAR_9 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_5, VAR_6, VAR_1, VAR_9);
}
