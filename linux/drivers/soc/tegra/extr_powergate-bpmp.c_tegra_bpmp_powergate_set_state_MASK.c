
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ ret; } ;
struct TYPE_5__ {int size; struct tegra_bpmp_message* data; } ;
struct TYPE_4__ {int state; } ;
struct tegra_bpmp_message {unsigned int id; TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ set_state; int cmd; } ;
struct tegra_bpmp {int dummy; } ;
struct mrq_pg_request {unsigned int id; TYPE_3__ rx; TYPE_2__ tx; int mrq; TYPE_1__ set_state; int cmd; } ;
typedef int request ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;

__attribute__((used)) static int FUNC_2(struct tegra_bpmp *VAR_3,
       unsigned int VAR_4, u32 VAR_5)
{
 struct mrq_pg_request VAR_6;
 struct tegra_bpmp_message VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.cmd = VAR_0;
 VAR_6.id = VAR_4;
 VAR_6.set_state.state = VAR_5;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.mrq = VAR_2;
 VAR_7.tx.data = &VAR_6;
 VAR_7.tx.size = sizeof(VAR_6);

 VAR_8 = FUNC_1(VAR_3, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;
 else if (VAR_7.rx.ret < 0)
  return -VAR_1;

 return 0;
}
