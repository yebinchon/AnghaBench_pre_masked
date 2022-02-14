
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct tcmu_dev {int name; int commands; } ;
struct tcmu_cmd {int cmd_id; int deadline; struct tcmu_dev* tcmu_dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct tcmu_cmd*,int,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct timer_list*,int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (char*,int,int ,unsigned int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct timer_list*) ;

__attribute__((used)) static int FUNC_7(struct tcmu_cmd *VAR_4, unsigned int VAR_5,
    struct timer_list *VAR_6)
{
 struct tcmu_dev *VAR_7 = VAR_4->tcmu_dev;
 int VAR_8;

 if (VAR_4->cmd_id)
  goto setup_timer;

 VAR_8 = FUNC_0(&VAR_7->commands, VAR_4, 1, VAR_2, VAR_0);
 if (VAR_8 < 0) {
  FUNC_4("tcmu: Could not allocate cmd id.\n");
  return VAR_8;
 }
 VAR_4->cmd_id = VAR_8;

 FUNC_3("allocated cmd %u for dev %s tmo %lu\n", VAR_4->cmd_id,
   VAR_7->name, VAR_5 / VAR_1);

setup_timer:
 if (!VAR_5)
  return 0;

 VAR_4->deadline = FUNC_5(VAR_3 + FUNC_2(VAR_5));
 if (!FUNC_6(VAR_6))
  FUNC_1(VAR_6, VAR_4->deadline);

 return 0;
}
