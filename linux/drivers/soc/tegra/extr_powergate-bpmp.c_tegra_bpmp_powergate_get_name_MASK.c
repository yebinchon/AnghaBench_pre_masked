
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int size; scalar_t__ ret; struct tegra_bpmp_message* data; } ;
struct TYPE_4__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {unsigned int id; TYPE_3__ get_name; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
struct tegra_bpmp {int dummy; } ;
struct mrq_pg_response {unsigned int id; TYPE_3__ get_name; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
struct mrq_pg_request {unsigned int id; TYPE_3__ get_name; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
typedef int response ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_2 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static char *FUNC_3(struct tegra_bpmp *VAR_3,
        unsigned int VAR_4)
{
 struct mrq_pg_response VAR_5;
 struct mrq_pg_request VAR_6;
 struct tegra_bpmp_message VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_0;
 VAR_6.id = VAR_4;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.mrq = VAR_2;
 VAR_7.tx.data = &VAR_6;
 VAR_7.tx.size = sizeof(VAR_6);
 VAR_7.rx.data = &VAR_5;
 VAR_7.rx.size = sizeof(VAR_5);

 VAR_8 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_8 < 0 || VAR_7.rx.ret < 0)
  return ((void*)0);

 return FUNC_0(VAR_5.get_name.name, VAR_1);
}
