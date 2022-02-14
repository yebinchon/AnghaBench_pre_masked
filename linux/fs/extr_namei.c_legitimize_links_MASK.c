
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saved {int seq; int link; } ;
struct nameidata {int depth; struct saved* stack; } ;


 int FUNC_0 (struct nameidata*) ;
 int FUNC_1 (struct nameidata*,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct nameidata *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0->depth; VAR_1++) {
  struct saved *VAR_2 = VAR_0->stack + VAR_1;
  if (FUNC_2(!FUNC_1(VAR_0, &VAR_2->link, VAR_2->seq))) {
   FUNC_0(VAR_0);
   VAR_0->depth = VAR_1 + 1;
   return 0;
  }
 }
 return 1;
}
