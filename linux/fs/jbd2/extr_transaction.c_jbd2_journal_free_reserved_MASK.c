
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int journal_t ;
struct TYPE_4__ {int h_buffer_credits; int h_reserved; int * h_journal; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(handle_t *VAR_0)
{
 journal_t *VAR_1 = VAR_0->h_journal;

 FUNC_0(!VAR_0->h_reserved);
 FUNC_2(VAR_1, VAR_0->h_buffer_credits);
 FUNC_1(VAR_0);
}
