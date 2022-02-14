
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcloop_lport {int unreg_done; int localport; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fcloop_lport*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct fcloop_lport *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->unreg_done);

 VAR_1 = FUNC_2(VAR_0->localport);

 FUNC_3(&VAR_0->unreg_done);

 FUNC_1(VAR_0);

 return VAR_1;
}
