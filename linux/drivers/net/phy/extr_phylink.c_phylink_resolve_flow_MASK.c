
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phylink_link_state {int pause; } ;
struct TYPE_2__ {int pause; int advertising; } ;
struct phylink {TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct phylink *VAR_8,
     struct phylink_link_state *VAR_9)
{
 int VAR_10 = 0;

 if (VAR_8->link_config.pause & VAR_1) {
  int VAR_11 = 0;

  if (FUNC_0(VAR_8->link_config.advertising, VAR_7))
   VAR_11 |= VAR_4;
  if (FUNC_0(VAR_8->link_config.advertising, VAR_0))
   VAR_11 |= VAR_2;

  VAR_11 &= VAR_9->pause;

  if (VAR_11 & VAR_4)
   VAR_10 = VAR_5 | VAR_3;
  else if (VAR_11 & VAR_2)
   VAR_10 = VAR_9->pause & VAR_4 ?
     VAR_5 : VAR_3;
 } else {
  VAR_10 = VAR_8->link_config.pause & VAR_6;
 }

 VAR_9->pause &= ~VAR_6;
 VAR_9->pause |= VAR_10;
}
