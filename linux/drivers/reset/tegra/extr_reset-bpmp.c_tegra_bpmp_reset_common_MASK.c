
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; struct tegra_bpmp_message* data; } ;
struct tegra_bpmp_message {int cmd; unsigned int reset_id; TYPE_1__ tx; int mrq; } ;
struct tegra_bpmp {int dummy; } ;
struct reset_controller_dev {int dummy; } ;
struct mrq_reset_request {int cmd; unsigned int reset_id; TYPE_1__ tx; int mrq; } ;
typedef int request ;
typedef int msg ;
typedef enum mrq_reset_commands { ____Placeholder_mrq_reset_commands } mrq_reset_commands ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_bpmp_message*,int ,int) ;
 int FUNC_1 (struct tegra_bpmp*,struct tegra_bpmp_message*) ;
 struct tegra_bpmp* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_1,
       enum mrq_reset_commands VAR_2,
       unsigned int VAR_3)
{
 struct tegra_bpmp *VAR_4 = FUNC_2(VAR_1);
 struct mrq_reset_request VAR_5;
 struct tegra_bpmp_message VAR_6;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.cmd = VAR_2;
 VAR_5.reset_id = VAR_3;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.mrq = VAR_0;
 VAR_6.tx.data = &VAR_5;
 VAR_6.tx.size = sizeof(VAR_5);

 return FUNC_1(VAR_4, &VAR_6);
}
