
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ port; void* revision; void* class; } ;
typedef TYPE_1__ avmcard ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

void FUNC_1(avmcard *VAR_2)
{
 VAR_2->class = FUNC_0(VAR_2->port + VAR_0);
 VAR_2->revision = FUNC_0(VAR_2->port + VAR_1);
}
