
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct max2175 {scalar_t__ xtal_freq; int mode_resolved; TYPE_4__* i2s_en; TYPE_2__* hsls; scalar_t__ am_hiz; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_8__ {TYPE_3__ cur; } ;
struct TYPE_5__ {int val; } ;
struct TYPE_6__ {TYPE_1__ cur; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct max2175*,int ) ;
 int FUNC_1 (struct max2175*) ;
 int FUNC_2 (struct max2175*,int ) ;
 int FUNC_3 (struct max2175*,int ) ;
 int FUNC_4 (struct max2175*,int ) ;
 int FUNC_5 (struct max2175*,int,int,int) ;
 int FUNC_6 (struct max2175*,int,int,int ,int) ;
 int FUNC_7 (struct max2175*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct max2175 *VAR_1, u32 VAR_2)
{
 FUNC_7(VAR_1, "set_rx_mode: %u am_hiz %u\n", VAR_2, VAR_1->am_hiz);
 if (VAR_1->xtal_freq == VAR_0)
  FUNC_2(VAR_1, VAR_2);
 else
  FUNC_4(VAR_1, VAR_2);

 if (VAR_1->am_hiz) {
  FUNC_7(VAR_1, "setting AM HiZ related config\n");
  FUNC_5(VAR_1, 50, 5, 1);
  FUNC_5(VAR_1, 90, 7, 1);
  FUNC_6(VAR_1, 73, 1, 0, 2);
  FUNC_6(VAR_1, 80, 5, 0, 33);
 }


 FUNC_1(VAR_1);


 FUNC_3(VAR_1, VAR_1->hsls->cur.val);


 FUNC_0(VAR_1, VAR_1->i2s_en->cur.val);

 VAR_1->mode_resolved = 1;

 return 0;
}
