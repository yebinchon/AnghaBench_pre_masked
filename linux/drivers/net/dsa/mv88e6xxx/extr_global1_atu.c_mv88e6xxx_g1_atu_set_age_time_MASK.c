
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {int dev; TYPE_1__* info; } ;
struct TYPE_2__ {unsigned int age_time_coeff; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int) ;

int FUNC_3(struct mv88e6xxx_chip *VAR_2,
      unsigned int VAR_3)
{
 const unsigned int VAR_4 = VAR_2->info->age_time_coeff;
 const unsigned int VAR_5 = 0x01 * VAR_4;
 const unsigned int VAR_6 = 0xff * VAR_4;
 u8 VAR_7;
 u16 VAR_8;
 int VAR_9;

 if (VAR_3 < VAR_5 || VAR_3 > VAR_6)
  return -VAR_0;


 VAR_7 = (VAR_3 + VAR_4 / 2) / VAR_4;

 VAR_9 = FUNC_1(VAR_2, VAR_1, &VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_8 &= ~0xff0;
 VAR_8 |= VAR_7 << 4;

 VAR_9 = FUNC_2(VAR_2, VAR_1, VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_2->dev, "AgeTime set to 0x%02x (%d ms)\n", VAR_7,
  VAR_7 * VAR_4);

 return 0;
}
