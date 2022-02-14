
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_struct {int sysrq; int port; } ;


 int FUNC_0 (char) ;
 int FUNC_1 (int *,char,int ) ;

__attribute__((used)) static void FUNC_2(struct hvsi_struct *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3=0; VAR_3 < VAR_2; VAR_3++) {
  char VAR_4 = VAR_1[VAR_3];
  FUNC_1(&VAR_0->port, VAR_4, 0);
 }
}
