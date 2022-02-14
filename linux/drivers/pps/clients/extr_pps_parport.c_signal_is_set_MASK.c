
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read_status ) (struct parport*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct parport*) ;

__attribute__((used)) static inline int FUNC_1(struct parport *VAR_1)
{
 return (VAR_1->ops->read_status(VAR_1) & VAR_0) != 0;
}
