
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_link {int list; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 struct media_link* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static struct media_link *FUNC_2(struct list_head *VAR_1)
{
 struct media_link *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);

 FUNC_1(&VAR_2->list, VAR_1);

 return VAR_2;
}
