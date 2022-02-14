
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int max_id; } ;
struct TYPE_5__ {int size; scalar_t__ ret; struct tegra_bpmp_message* data; } ;
struct TYPE_4__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {TYPE_3__ get_max_id; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
struct tegra_bpmp {int dummy; } ;
struct mrq_pg_response {TYPE_3__ get_max_id; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
struct mrq_pg_request {TYPE_3__ get_max_id; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
typedef int response ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp *VAR_3)
{
 struct mrq_pg_response VAR_4;
 struct mrq_pg_request VAR_5;
 struct tegra_bpmp_message VAR_6;
 int VAR_7;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd = VAR_0;

 FUNC_0(&VAR_4, 0, sizeof(VAR_4));

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.mrq = VAR_2;
 VAR_6.tx.data = &VAR_5;
 VAR_6.tx.size = sizeof(VAR_5);
 VAR_6.rx.data = &VAR_4;
 VAR_6.rx.size = sizeof(VAR_4);

 VAR_7 = FUNC_1(VAR_3, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_6.rx.ret < 0)
  return -VAR_1;

 return VAR_4.get_max_id.max_id;
}
