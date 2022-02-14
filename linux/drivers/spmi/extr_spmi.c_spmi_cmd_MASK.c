
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * type; } ;
struct spmi_controller {int (* cmd ) (struct spmi_controller*,int ,int ) ;TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spmi_controller*,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static inline int
FUNC_2(struct spmi_controller *VAR_2, u8 VAR_3, u8 VAR_4)
{
 int VAR_5;

 if (!VAR_2 || !VAR_2->cmd || VAR_2->dev.type != &VAR_1)
  return -VAR_0;

 VAR_5 = VAR_2->cmd(VAR_2, VAR_3, VAR_4);
 FUNC_1(VAR_3, VAR_4, VAR_5);
 return VAR_5;
}
