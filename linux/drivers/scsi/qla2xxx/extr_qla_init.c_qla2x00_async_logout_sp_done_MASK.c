
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* free ) (TYPE_1__*) ;TYPE_3__* fcport; } ;
typedef TYPE_1__ srb_t ;
struct TYPE_6__ {int flags; int login_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(srb_t *VAR_2, int VAR_3)
{
 VAR_2->fcport->flags &= ~(VAR_1 | VAR_0);
 VAR_2->fcport->login_gen++;
 FUNC_0(VAR_2->fcport, VAR_3);
 VAR_2->free(VAR_2);
}
