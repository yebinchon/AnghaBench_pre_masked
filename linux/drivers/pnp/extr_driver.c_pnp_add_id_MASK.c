
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_id {char* id; struct pnp_id* next; } ;
struct pnp_dev {struct pnp_id* id; } ;


 int VAR_0 ;
 struct pnp_id* FUNC_0 (int,int ) ;
 void* FUNC_1 (char const) ;

struct pnp_id *FUNC_2(struct pnp_dev *VAR_1, const char *VAR_2)
{
 struct pnp_id *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(sizeof(struct pnp_id), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->id[0] = VAR_2[0];
 VAR_3->id[1] = VAR_2[1];
 VAR_3->id[2] = VAR_2[2];
 VAR_3->id[3] = FUNC_1(VAR_2[3]);
 VAR_3->id[4] = FUNC_1(VAR_2[4]);
 VAR_3->id[5] = FUNC_1(VAR_2[5]);
 VAR_3->id[6] = FUNC_1(VAR_2[6]);
 VAR_3->id[7] = '\0';

 VAR_3->next = ((void*)0);
 VAR_4 = VAR_1->id;
 while (VAR_4 && VAR_4->next)
  VAR_4 = VAR_4->next;
 if (VAR_4)
  VAR_4->next = VAR_3;
 else
  VAR_1->id = VAR_3;

 return VAR_3;
}
