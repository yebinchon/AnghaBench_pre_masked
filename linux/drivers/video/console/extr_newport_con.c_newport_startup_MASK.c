
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ word; } ;
struct TYPE_8__ {TYPE_2__ _xstart; int xstarti; } ;
struct TYPE_6__ {int config; } ;
struct TYPE_9__ {TYPE_3__ set; TYPE_1__ cset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 TYPE_4__* VAR_6 ;

__attribute__((used)) static const char *FUNC_5(void)
{
 int VAR_7;

 VAR_6->cset.config = VAR_2;

 if (FUNC_4(VAR_6))
  goto out_unmap;

 VAR_6->set.xstarti = VAR_3;
 if (VAR_6->set._xstart.word != FUNC_0(VAR_3))
  goto out_unmap;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  VAR_4[VAR_7] = VAR_0;

 FUNC_3();
 FUNC_1();
 FUNC_2();
 VAR_5 = 1;

 return "SGI Newport";

out_unmap:
 return ((void*)0);
}
