
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resistor_sense; } ;
struct bq2415x_device {TYPE_1__ init_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bq2415x_device*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct bq2415x_device *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_5->init_data.resistor_sense <= 0)
  return -VAR_4;

 VAR_7 = (VAR_6 * VAR_5->init_data.resistor_sense - 37400) / 6800;
 if (VAR_7 < 0)
  VAR_7 = 0;
 else if (VAR_7 > 7)
  VAR_7 = 7;

 return FUNC_0(VAR_5, VAR_2, VAR_7,
   VAR_1 | VAR_0,
   VAR_3);
}
