
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct max2175 {TYPE_4__* hsls; TYPE_2__* rx_mode; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_8__ {TYPE_3__ cur; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_6__ {TYPE_1__ cur; } ;


 int FUNC_0 (struct max2175*,int ,int *) ;
 int FUNC_1 (struct max2175*,int ) ;
 int FUNC_2 (struct max2175*,int ,int ) ;
 int FUNC_3 (struct max2175*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct max2175 *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 int VAR_3;


 VAR_3 = FUNC_0(VAR_0, VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_3(VAR_0, "set_freq_and_mode: freq %u rx_mode %d\n", VAR_1, VAR_2);


 FUNC_1(VAR_0, VAR_2);
 VAR_0->rx_mode->cur.val = VAR_2;


 return FUNC_2(VAR_0, VAR_1, VAR_0->hsls->cur.val);
}
