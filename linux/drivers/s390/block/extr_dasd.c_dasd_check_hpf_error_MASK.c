
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sesq; } ;
struct TYPE_4__ {TYPE_1__ tm; } ;
struct irb {TYPE_2__ scsw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct irb *VAR_2)
{
 return (FUNC_0(&VAR_2->scsw) &&
     (VAR_2->scsw.tm.sesq == VAR_0 ||
      VAR_2->scsw.tm.sesq == VAR_1));
}
