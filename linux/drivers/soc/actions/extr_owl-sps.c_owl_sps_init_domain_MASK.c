
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; int power_off; int power_on; int name; } ;
struct owl_sps_domain {TYPE_4__ genpd; TYPE_2__* info; struct owl_sps* sps; } ;
struct TYPE_7__ {TYPE_4__** domains; } ;
struct owl_sps {TYPE_3__ genpd_data; TYPE_1__* info; int dev; } ;
struct TYPE_6__ {int genpd_flags; int name; } ;
struct TYPE_5__ {TYPE_2__* domains; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct owl_sps_domain* FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct owl_sps *VAR_4, int VAR_5)
{
 struct owl_sps_domain *VAR_6;

 VAR_6 = FUNC_0(VAR_4->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->info = &VAR_4->info->domains[VAR_5];
 VAR_6->sps = VAR_4;

 VAR_6->genpd.name = VAR_6->info->name;
 VAR_6->genpd.power_on = VAR_3;
 VAR_6->genpd.power_off = VAR_2;
 VAR_6->genpd.flags = VAR_6->info->genpd_flags;
 FUNC_1(&VAR_6->genpd, ((void*)0), 0);

 VAR_4->genpd_data.domains[VAR_5] = &VAR_6->genpd;

 return 0;
}
