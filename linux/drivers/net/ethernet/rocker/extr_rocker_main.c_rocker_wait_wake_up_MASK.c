
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_wait {int done; int wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct rocker_wait *VAR_0)
{
 VAR_0->done = 1;
 FUNC_0(&VAR_0->wait);
}
