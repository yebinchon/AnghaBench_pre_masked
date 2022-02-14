
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int* lip; unsigned int* fip; int fport; int lport; int proto; int tos; int frag; int ovlan; int ivlan; int ethtype; int macidx; int matchtype; int fcoe; int iport; } ;
struct TYPE_3__ {unsigned int* lip; unsigned int* fip; scalar_t__ fport; scalar_t__ lport; scalar_t__ proto; scalar_t__ tos; scalar_t__ frag; scalar_t__ ovlan; scalar_t__ ivlan; scalar_t__ ethtype; scalar_t__ macidx; scalar_t__ matchtype; scalar_t__ fcoe; scalar_t__ iport; } ;
struct ch_filter_specification {TYPE_2__ mask; TYPE_1__ val; } ;


 unsigned int FUNC_0 (unsigned int*) ;
 int FUNC_1 (unsigned int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ch_filter_specification *VAR_0)
{
 unsigned int VAR_1 = 0, VAR_2 = 0;
 unsigned int VAR_3 = 0, VAR_4 = 0;
 unsigned int VAR_5;

 if (VAR_0->val.iport && !VAR_0->mask.iport)
  VAR_0->mask.iport |= ~0;
 if (VAR_0->val.fcoe && !VAR_0->mask.fcoe)
  VAR_0->mask.fcoe |= ~0;
 if (VAR_0->val.matchtype && !VAR_0->mask.matchtype)
  VAR_0->mask.matchtype |= ~0;
 if (VAR_0->val.macidx && !VAR_0->mask.macidx)
  VAR_0->mask.macidx |= ~0;
 if (VAR_0->val.ethtype && !VAR_0->mask.ethtype)
  VAR_0->mask.ethtype |= ~0;
 if (VAR_0->val.ivlan && !VAR_0->mask.ivlan)
  VAR_0->mask.ivlan |= ~0;
 if (VAR_0->val.ovlan && !VAR_0->mask.ovlan)
  VAR_0->mask.ovlan |= ~0;
 if (VAR_0->val.frag && !VAR_0->mask.frag)
  VAR_0->mask.frag |= ~0;
 if (VAR_0->val.tos && !VAR_0->mask.tos)
  VAR_0->mask.tos |= ~0;
 if (VAR_0->val.proto && !VAR_0->mask.proto)
  VAR_0->mask.proto |= ~0;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0->val.lip); VAR_5++) {
  VAR_1 |= VAR_0->val.lip[VAR_5];
  VAR_2 |= VAR_0->mask.lip[VAR_5];
  VAR_3 |= VAR_0->val.fip[VAR_5];
  VAR_4 |= VAR_0->mask.fip[VAR_5];
 }

 if (VAR_1 && !VAR_2)
  FUNC_1(VAR_0->mask.lip, ~0, sizeof(VAR_0->mask.lip));

 if (VAR_3 && !VAR_4)
  FUNC_1(VAR_0->mask.fip, ~0, sizeof(VAR_0->mask.lip));

 if (VAR_0->val.lport && !VAR_0->mask.lport)
  VAR_0->mask.lport = ~0;
 if (VAR_0->val.fport && !VAR_0->mask.fport)
  VAR_0->mask.fport = ~0;
}
