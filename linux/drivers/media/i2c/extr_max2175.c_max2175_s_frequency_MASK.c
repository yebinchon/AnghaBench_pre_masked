
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct max2175 {TYPE_5__* rx_mode; scalar_t__ mode_resolved; int freq; TYPE_3__* hsls; TYPE_1__* bands_rf; } ;
struct TYPE_9__ {int val; } ;
struct TYPE_10__ {TYPE_4__ cur; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_8__ {TYPE_2__ cur; } ;
struct TYPE_6__ {int rangehigh; int rangelow; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct max2175*,int ,int ) ;
 struct max2175* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct max2175*,int ) ;
 int FUNC_4 (struct max2175*,int ,int ) ;
 int FUNC_5 (struct max2175*,char*,int,int ,scalar_t__,...) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_1,
          const struct v4l2_frequency *VAR_2)
{
 struct max2175 *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;
 int VAR_5 = 0;

 FUNC_5(VAR_3, "s_freq: new %u curr %u, mode_resolved %d\n",
  VAR_2->frequency, VAR_3->freq, VAR_3->mode_resolved);

 if (VAR_2->tuner != 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2->frequency, VAR_3->bands_rf->rangelow,
       VAR_3->bands_rf->rangehigh);


 if (VAR_3->mode_resolved &&
     FUNC_1(VAR_3, VAR_3->rx_mode->cur.val, VAR_4))
  VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_3->hsls->cur.val);
 else

  VAR_5 = FUNC_3(VAR_3, VAR_4);

 FUNC_5(VAR_3, "s_freq: ret %d curr %u mode_resolved %d mode %u\n",
  VAR_5, VAR_3->freq, VAR_3->mode_resolved, VAR_3->rx_mode->cur.val);

 return VAR_5;
}
