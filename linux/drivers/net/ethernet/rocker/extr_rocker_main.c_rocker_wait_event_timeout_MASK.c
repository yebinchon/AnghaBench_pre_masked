
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_wait {int done; int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct rocker_wait *VAR_1,
          unsigned long VAR_2)
{
 FUNC_0(VAR_1->wait, VAR_1->done, VAR_0 / 10);
 if (!VAR_1->done)
  return 0;
 return 1;
}
