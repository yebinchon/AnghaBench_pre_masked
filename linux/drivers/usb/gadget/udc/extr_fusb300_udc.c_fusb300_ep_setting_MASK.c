
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fusb300_ep_info {int type; int epnum; } ;
struct fusb300_ep {int type; int epnum; } ;



__attribute__((used)) static void FUNC_0(struct fusb300_ep *VAR_0,
          struct fusb300_ep_info VAR_1)
{
 VAR_0->epnum = VAR_1.epnum;
 VAR_0->type = VAR_1.type;
}
