
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct max2175 {TYPE_2__* rx_modes; TYPE_1__* rx_mode; } ;
struct TYPE_4__ {int band; } ;
struct TYPE_3__ {unsigned int maximum; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct max2175*,char*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct max2175 *VAR_1, u32 VAR_2, u32 *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = FUNC_0(VAR_2);


 for (VAR_4 = 0; VAR_4 <= VAR_1->rx_mode->maximum; VAR_4++) {
  if (VAR_1->rx_modes[VAR_4].band == VAR_5) {
   *VAR_3 = VAR_4;
   FUNC_1(VAR_1, "rx_mode_from_freq: freq %u mode %d\n",
    VAR_2, *VAR_3);
   return 0;
  }
 }

 return -VAR_0;
}
