
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phylink {int mac_link_dropped; } ;


 int FUNC_0 (struct phylink*,char*,char*) ;
 int FUNC_1 (struct phylink*) ;

void FUNC_2(struct phylink *VAR_0, bool VAR_1)
{
 if (!VAR_1)
  VAR_0->mac_link_dropped = 1;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0, "mac link %s\n", VAR_1 ? "up" : "down");
}
