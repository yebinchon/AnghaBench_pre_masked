
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_struct {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct hvsi_struct *VAR_2)
{

 return (VAR_2->state == VAR_0)
   || (VAR_2->state == VAR_1);
}
