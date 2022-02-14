
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {int vfs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rvu*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct rvu *VAR_0)
{
 int VAR_1 = VAR_0->vfs;

 FUNC_4(VAR_0, FUNC_3(0), FUNC_0(VAR_1));
 FUNC_4(VAR_0, FUNC_1(0), FUNC_0(VAR_1));
 FUNC_4(VAR_0, FUNC_2(0), FUNC_0(VAR_1));
 if (VAR_1 <= 64)
  return;

 FUNC_4(VAR_0, FUNC_3(1),
        FUNC_0(VAR_1 - 64));
 FUNC_4(VAR_0, FUNC_1(1), FUNC_0(VAR_1 - 64));
 FUNC_4(VAR_0, FUNC_2(1), FUNC_0(VAR_1 - 64));
}
