
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_3__ {int jump_id; int len_lw; } ;
struct nfp_fl_set_ipv6_addr {TYPE_1__ head; int reserved; TYPE_2__* ipv6; } ;
typedef int __be32 ;
struct TYPE_4__ {int mask; int exact; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_1, u8 VAR_2, __be32 VAR_3, __be32 VAR_4,
        struct nfp_fl_set_ipv6_addr *VAR_5)
{
 VAR_5->ipv6[VAR_2].mask |= VAR_4;
 VAR_5->ipv6[VAR_2].exact &= ~VAR_4;
 VAR_5->ipv6[VAR_2].exact |= VAR_3 & VAR_4;

 VAR_5->reserved = FUNC_0(0);
 VAR_5->head.jump_id = VAR_1;
 VAR_5->head.len_lw = sizeof(*VAR_5) >> VAR_0;
}
