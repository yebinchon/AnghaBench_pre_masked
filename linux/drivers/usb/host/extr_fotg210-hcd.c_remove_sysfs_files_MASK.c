
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fotg210_hcd {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 TYPE_2__* FUNC_1 (struct fotg210_hcd*) ;

__attribute__((used)) static inline void FUNC_2(struct fotg210_hcd *VAR_1)
{
 struct device *VAR_2 = FUNC_1(VAR_1)->self.controller;

 FUNC_0(VAR_2, &VAR_0);
}
