
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov5695 {int client; int ctrl_handler; TYPE_1__* cur_mode; } ;
struct TYPE_2__ {int reg_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ov5695 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4->client, VAR_3);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_4->client, VAR_4->cur_mode->reg_list);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_0(&VAR_4->ctrl_handler);
 if (VAR_5)
  return VAR_5;

 return FUNC_2(VAR_4->client, VAR_1,
    VAR_2, VAR_0);
}
