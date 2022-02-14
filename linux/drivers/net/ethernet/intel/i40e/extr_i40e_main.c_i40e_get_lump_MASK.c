
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct i40e_lump_tracking {int search_hint; int num_entries; int* list; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_1(struct i40e_pf *VAR_3, struct i40e_lump_tracking *VAR_4,
    u16 VAR_5, u16 VAR_6)
{
 int VAR_7 = -VAR_1;
 int VAR_8, VAR_9;

 if (!VAR_4 || VAR_5 == 0 || VAR_6 >= VAR_2) {
  FUNC_0(&VAR_3->pdev->dev,
    "param err: pile=%s needed=%d id=0x%04x\n",
    VAR_4 ? "<valid>" : "<null>", VAR_5, VAR_6);
  return -VAR_0;
 }


 VAR_8 = VAR_4->search_hint;
 while (VAR_8 < VAR_4->num_entries) {

  if (VAR_4->list[VAR_8] & VAR_2) {
   VAR_8++;
   continue;
  }


  for (VAR_9 = 0; (VAR_9 < VAR_5) && ((VAR_8+VAR_9) < VAR_4->num_entries); VAR_9++) {
   if (VAR_4->list[VAR_8+VAR_9] & VAR_2)
    break;
  }

  if (VAR_9 == VAR_5) {

   for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
    VAR_4->list[VAR_8+VAR_9] = VAR_6 | VAR_2;
   VAR_7 = VAR_8;
   VAR_4->search_hint = VAR_8 + VAR_9;
   break;
  }


  VAR_8 += VAR_9;
 }

 return VAR_7;
}
