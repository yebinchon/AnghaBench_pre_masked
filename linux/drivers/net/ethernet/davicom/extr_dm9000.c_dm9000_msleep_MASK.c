
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {scalar_t__ in_timeout; scalar_t__ in_suspend; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

__attribute__((used)) static void FUNC_2(struct board_info *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->in_suspend || VAR_0->in_timeout)
  FUNC_0(VAR_1);
 else
  FUNC_1(VAR_1);
}
