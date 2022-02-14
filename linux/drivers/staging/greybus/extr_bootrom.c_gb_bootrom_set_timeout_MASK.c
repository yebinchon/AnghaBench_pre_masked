
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_bootrom {int next_request; int dwork; } ;
typedef enum next_request_type { ____Placeholder_next_request_type } next_request_type ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct gb_bootrom *VAR_0,
       enum next_request_type VAR_1,
       unsigned long VAR_2)
{
 VAR_0->next_request = VAR_1;
 FUNC_1(&VAR_0->dwork, FUNC_0(VAR_2));
}
