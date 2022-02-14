
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink_link_state {scalar_t__ link; } ;
struct phylink {int dummy; } ;


 int FUNC_0 (struct phylink*,struct phylink_link_state const*) ;

__attribute__((used)) static void FUNC_1(struct phylink *VAR_0,
      const struct phylink_link_state *VAR_1)
{
 if (VAR_1->link)
  FUNC_0(VAR_0, VAR_1);
}
