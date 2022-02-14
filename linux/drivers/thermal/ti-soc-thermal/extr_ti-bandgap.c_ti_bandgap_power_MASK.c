
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_bandgap {TYPE_1__* conf; } ;
struct TYPE_2__ {int sensor_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_bandgap*,int,int ,int ,int) ;
 int FUNC_1 (struct ti_bandgap*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct ti_bandgap *VAR_4, bool VAR_5)
{
 int VAR_6;

 if (!FUNC_1(VAR_4, VAR_1))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_4->conf->sensor_count; VAR_6++)

  FUNC_0(VAR_4, VAR_6, VAR_3, VAR_2, !VAR_5);
 return 0;
}
