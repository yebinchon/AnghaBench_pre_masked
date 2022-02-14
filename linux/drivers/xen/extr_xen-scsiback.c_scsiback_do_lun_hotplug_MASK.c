
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vscsibk_info {TYPE_1__* dev; } ;
struct TYPE_2__ {int nodename; } ;


 scalar_t__ FUNC_0 (char**) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (struct vscsibk_info*,int,char*) ;
 char** FUNC_3 (int ,int ,char*,unsigned int*) ;

__attribute__((used)) static void FUNC_4(struct vscsibk_info *VAR_1, int VAR_2)
{
 int VAR_3;
 char **VAR_4;
 unsigned int VAR_5 = 0;

 VAR_4 = FUNC_3(VAR_0, VAR_1->dev->nodename, "vscsi-devs",
          &VAR_5);
 if (FUNC_0(VAR_4))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
  FUNC_2(VAR_1, VAR_2, VAR_4[VAR_3]);

 FUNC_1(VAR_4);
}
