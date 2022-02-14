
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct musb {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_mode ) (struct musb*,int ) ;} ;


 int FUNC_0 (struct musb*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct musb *VAR_0, u8 VAR_1)
{
 if (!VAR_0->ops->set_mode)
  return 0;

 return VAR_0->ops->set_mode(VAR_0, VAR_1);
}
