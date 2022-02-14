
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hb_count; } ;
struct bfa_ioc_s {int hb_count; TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc_s*,int ) ;
 int FUNC_1 (struct bfa_ioc_s*,int ) ;
 int VAR_1 ;

void
FUNC_2(struct bfa_ioc_s *VAR_2)
{
 FUNC_1(VAR_2, VAR_1);
 VAR_2->stats.hb_count = VAR_2->hb_count;
 FUNC_0(VAR_2, VAR_0);
}
