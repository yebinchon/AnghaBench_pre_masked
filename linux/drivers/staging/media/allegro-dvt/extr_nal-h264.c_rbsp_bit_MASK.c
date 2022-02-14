
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbsp {TYPE_1__* ops; scalar_t__ error; } ;
struct TYPE_2__ {scalar_t__ (* rbsp_bit ) (struct rbsp*,int*) ;} ;


 scalar_t__ FUNC_0 (struct rbsp*,int*) ;

__attribute__((used)) static inline void FUNC_1(struct rbsp *VAR_0, int *VAR_1)
{
 if (VAR_0->error)
  return;
 VAR_0->error = VAR_0->ops->rbsp_bit(VAR_0, VAR_1);
}
