
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zs_scc {int initialised; int zlock; } ;
struct zs_port {int regs; struct zs_scc* scc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct zs_port*,int ,int) ;
 int FUNC_2 (struct zs_port*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct zs_port*,int ,int ) ;
 int FUNC_7 (struct zs_port*,int) ;

__attribute__((used)) static void FUNC_8(struct zs_port *VAR_3)
{
 struct zs_scc *VAR_4 = VAR_3->scc;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_3(&VAR_4->zlock, VAR_6);
 VAR_5 = !FUNC_0(VAR_6);
 if (!VAR_4->initialised) {

  FUNC_2(VAR_3, VAR_1);

  FUNC_7(VAR_3, VAR_5);
  FUNC_6(VAR_3, VAR_2, VAR_0);
  FUNC_5(10);
  FUNC_6(VAR_3, VAR_2, 0);
  VAR_4->initialised = 1;
 }
 FUNC_1(VAR_3, VAR_3->regs, VAR_5);
 FUNC_4(&VAR_4->zlock, VAR_6);
}
