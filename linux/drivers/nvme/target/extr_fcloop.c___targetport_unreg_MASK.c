
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcloop_tport {int targetport; } ;
struct fcloop_nport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct fcloop_nport *VAR_1, struct fcloop_tport *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_2->targetport);
}
