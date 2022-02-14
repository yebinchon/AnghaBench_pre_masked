
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_req {struct raw3215_req* next; } ;


 struct raw3215_req* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static inline struct raw3215_req *FUNC_2(void)
{
 struct raw3215_req *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_1, VAR_3);
 VAR_2 = VAR_0;
 VAR_0 = VAR_2->next;
 FUNC_1(&VAR_1, VAR_3);
 return VAR_2;
}
