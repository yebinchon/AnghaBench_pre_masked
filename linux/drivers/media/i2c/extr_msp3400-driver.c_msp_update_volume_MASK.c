
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct msp_state {TYPE_4__* volume; TYPE_3__* muted; } ;
struct TYPE_7__ {int val; } ;
struct TYPE_10__ {TYPE_1__ cur; int val; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_9__ {TYPE_2__ cur; int val; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

void FUNC_3(struct msp_state *VAR_0)
{

 FUNC_1(VAR_0->volume);
 VAR_0->volume->val = VAR_0->volume->cur.val;
 VAR_0->muted->val = VAR_0->muted->cur.val;
 FUNC_0(VAR_0->volume);
 FUNC_2(VAR_0->volume);
}
