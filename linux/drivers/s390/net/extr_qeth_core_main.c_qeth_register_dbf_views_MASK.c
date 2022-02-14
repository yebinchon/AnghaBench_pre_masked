
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; int * id; int view; int len; int areas; int pages; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

  VAR_2[VAR_4].id = FUNC_0(VAR_2[VAR_4].name,
      VAR_2[VAR_4].pages,
      VAR_2[VAR_4].areas,
      VAR_2[VAR_4].len);
  if (VAR_2[VAR_4].id == ((void*)0)) {
   FUNC_3();
   return -VAR_0;
  }


  VAR_3 = FUNC_1(VAR_2[VAR_4].id, VAR_2[VAR_4].view);
  if (VAR_3) {
   FUNC_3();
   return VAR_3;
  }


  FUNC_2(VAR_2[VAR_4].id, VAR_2[VAR_4].level);
 }

 return 0;
}
