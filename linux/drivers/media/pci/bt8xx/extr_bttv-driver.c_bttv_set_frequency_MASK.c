
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct v4l2_frequency {scalar_t__ type; int frequency; } const v4l2_frequency ;
struct TYPE_2__ {int freq; } ;
struct bttv {int tv_freq; TYPE_1__ tea; int radio_freq; scalar_t__ has_tea575x; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bttv*,int ,int ,struct v4l2_frequency const*) ;
 int VAR_1 ;
 int FUNC_1 (struct bttv*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct bttv *VAR_4, const struct v4l2_frequency *VAR_5)
{
 struct v4l2_frequency VAR_6 = *VAR_5;

 FUNC_0(VAR_4, VAR_3, VAR_2, VAR_5);


 FUNC_0(VAR_4, VAR_3, VAR_1, &VAR_6);
 if (VAR_6.type == VAR_0) {
  FUNC_1(VAR_4);
  VAR_4->radio_freq = VAR_6.frequency;
  if (VAR_4->has_tea575x) {
   VAR_4->tea.freq = VAR_4->radio_freq;
   FUNC_2(&VAR_4->tea);
  }
 } else {
  VAR_4->tv_freq = VAR_6.frequency;
 }
}
