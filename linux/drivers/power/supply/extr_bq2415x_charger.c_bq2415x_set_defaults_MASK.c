
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ resistor_sense; } ;
struct bq2415x_device {TYPE_1__ init_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bq2415x_device*,int ) ;
 int FUNC_1 (struct bq2415x_device*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_2(struct bq2415x_device *VAR_10)
{
 FUNC_0(VAR_10, VAR_0);
 FUNC_0(VAR_10, VAR_1);
 FUNC_0(VAR_10, VAR_3);

 FUNC_1(VAR_10, VAR_7);
 FUNC_1(VAR_10, VAR_9);
 FUNC_1(VAR_10, VAR_5);

 if (VAR_10->init_data.resistor_sense > 0) {
  FUNC_1(VAR_10, VAR_6);
  FUNC_1(VAR_10, VAR_8);
  FUNC_0(VAR_10, VAR_4);
 }

 FUNC_0(VAR_10, VAR_2);
 return 0;
}
