
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct max2175 {TYPE_2__* hsls; TYPE_3__* rx_modes; int freq; } ;
struct TYPE_6__ {int freq; } ;
struct TYPE_4__ {int val; } ;
struct TYPE_5__ {TYPE_1__ cur; } ;


 scalar_t__ FUNC_0 (struct max2175*,size_t,int ) ;
 int FUNC_1 (struct max2175*,size_t) ;
 int FUNC_2 (struct max2175*,int ,int ) ;
 int FUNC_3 (struct max2175*,char*,size_t,int ) ;

__attribute__((used)) static void FUNC_4(struct max2175 *VAR_0, u32 VAR_1)
{

 FUNC_1(VAR_0, VAR_1);

 FUNC_3(VAR_0, "s_ctrl_rx_mode: %u curr freq %u\n", VAR_1, VAR_0->freq);


 if (FUNC_0(VAR_0, VAR_1, VAR_0->freq))
  FUNC_2(VAR_0, VAR_0->freq, VAR_0->hsls->cur.val);
 else

  FUNC_2(VAR_0, VAR_0->rx_modes[VAR_1].freq,
         VAR_0->hsls->cur.val);
}
