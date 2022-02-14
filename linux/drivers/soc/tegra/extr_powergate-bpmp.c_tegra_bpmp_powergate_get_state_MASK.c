
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int size; scalar_t__ ret; struct tegra_bpmp_message* data; } ;
struct TYPE_4__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {unsigned int id; TYPE_3__ get_state; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
struct tegra_bpmp {int dummy; } ;
struct mrq_pg_response {unsigned int id; TYPE_3__ get_state; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
struct mrq_pg_request {unsigned int id; TYPE_3__ get_state; TYPE_2__ rx; TYPE_1__ tx; int mrq; int cmd; } ;
typedef int response ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp *VAR_4,
       unsigned int VAR_5)
{
 struct mrq_pg_response VAR_6;
 struct mrq_pg_request VAR_7;
 struct tegra_bpmp_message VAR_8;
 int VAR_9;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.cmd = VAR_0;
 VAR_7.id = VAR_5;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.mrq = VAR_2;
 VAR_8.tx.data = &VAR_7;
 VAR_8.tx.size = sizeof(VAR_7);
 VAR_8.rx.data = &VAR_6;
 VAR_8.rx.size = sizeof(VAR_6);

 VAR_9 = FUNC_1(VAR_4, &VAR_8);
 if (VAR_9 < 0)
  return VAR_3;
 else if (VAR_8.rx.ret < 0)
  return -VAR_1;

 return VAR_6.get_state.state;
}
