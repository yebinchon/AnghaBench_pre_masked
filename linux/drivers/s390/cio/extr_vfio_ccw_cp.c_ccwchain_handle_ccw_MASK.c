
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int fmt; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;
struct channel_program {int guest_cp; TYPE_2__ orb; int mdev; } ;
struct ccwchain {int ch_ccw; int ch_iova; } ;
struct ccw1 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ccwchain* FUNC_0 (struct channel_program*,int) ;
 int FUNC_1 (int ,struct channel_program*) ;
 int FUNC_2 (struct ccwchain*) ;
 int FUNC_3 (struct ccwchain*,struct channel_program*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static int FUNC_7(u32 VAR_2, struct channel_program *VAR_3)
{
 struct ccwchain *VAR_4;
 int VAR_5, VAR_6;


 VAR_5 = FUNC_5(VAR_3->mdev, VAR_3->guest_cp, VAR_2,
        VAR_0 * sizeof(struct ccw1));
 if (VAR_5)
  return VAR_5;


 if (!VAR_3->orb.cmd.fmt)
  FUNC_4(VAR_3->guest_cp, VAR_0);


 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;


 VAR_4 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_4)
  return -VAR_1;
 VAR_4->ch_iova = VAR_2;


 FUNC_6(VAR_4->ch_ccw, VAR_3->guest_cp, VAR_5 * sizeof(struct ccw1));


 VAR_6 = FUNC_3(VAR_4, VAR_3);

 if (VAR_6)
  FUNC_2(VAR_4);

 return VAR_6;
}
