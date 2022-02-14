
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hermes {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* cmd_wait ) (struct hermes*,int,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hermes*,int,int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct hermes *VAR_1, int VAR_2)
{
 return VAR_1->ops->cmd_wait(VAR_1, VAR_0 | (VAR_2 << 8),
     0, ((void*)0));
}
