
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_reqlist {int * buckets; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 struct zfcp_reqlist* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct zfcp_reqlist *FUNC_3(void)
{
 unsigned int VAR_2;
 struct zfcp_reqlist *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct zfcp_reqlist), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->lock);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  FUNC_0(&VAR_3->buckets[VAR_2]);

 return VAR_3;
}
