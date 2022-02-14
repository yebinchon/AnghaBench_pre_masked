
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxfw_dev {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* status_notify ) (struct mlxfw_dev*,char const*,char const*,int ,int ) ;} ;


 int FUNC_0 (struct mlxfw_dev*,char const*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mlxfw_dev *VAR_0,
    const char *VAR_1, const char *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 if (!VAR_0->ops->status_notify)
  return;
 VAR_0->ops->status_notify(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4);
}
