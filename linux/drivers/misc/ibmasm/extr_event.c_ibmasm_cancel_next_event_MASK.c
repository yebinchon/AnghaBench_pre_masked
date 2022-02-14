
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_reader {int cancelled; int wait; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct event_reader *VAR_0)
{
        VAR_0->cancelled = 1;
        FUNC_0(&VAR_0->wait);
}
