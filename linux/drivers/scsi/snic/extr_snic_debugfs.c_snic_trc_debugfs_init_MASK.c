
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trc_file; int enable; int trc_enable; } ;
struct TYPE_4__ {int trc_root; TYPE_1__ trc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int ,int *) ;
 int FUNC_1 (char*,int,int ,int *,int *) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;

void FUNC_2(void)
{
 VAR_3->trc.trc_enable = FUNC_0("tracing_enable",
       VAR_0 | VAR_1 | VAR_2,
       VAR_3->trc_root,
       &VAR_3->trc.enable);

 VAR_3->trc.trc_file = FUNC_1("trace",
            VAR_0 | VAR_1 | VAR_2,
            VAR_3->trc_root, ((void*)0),
            &VAR_4);
}
