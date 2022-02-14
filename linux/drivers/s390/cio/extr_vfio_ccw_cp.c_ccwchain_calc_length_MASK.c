
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {scalar_t__ i2k; int c64; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct channel_program {TYPE_2__ orb; struct ccw1* guest_cp; } ;
struct ccw1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ccw1*) ;
 scalar_t__ FUNC_1 (struct ccw1*) ;
 int FUNC_2 (struct ccw1*,int ,int) ;

__attribute__((used)) static int FUNC_3(u64 VAR_3, struct channel_program *VAR_4)
{
 struct ccw1 *VAR_5 = VAR_4->guest_cp;
 int VAR_6 = 0;

 do {
  VAR_6++;






  if ((!VAR_4->orb.cmd.c64 || VAR_4->orb.cmd.i2k) && FUNC_1(VAR_5))
   return -VAR_2;
  if (!FUNC_0(VAR_5) && !FUNC_2(VAR_5, VAR_3, VAR_6))
   break;

  VAR_5++;
 } while (VAR_6 < VAR_0 + 1);

 if (VAR_6 == VAR_0 + 1)
  VAR_6 = -VAR_1;

 return VAR_6;
}
