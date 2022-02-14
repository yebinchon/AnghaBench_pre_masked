
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int * a_entries; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct posix_acl *VAR_0, int VAR_1, int VAR_2) {
 int VAR_3 = 0, VAR_4;



 while (!VAR_3) {
  VAR_3 = 1;
  for (VAR_4 = VAR_1; VAR_4 < VAR_2; VAR_4++) {
   if (FUNC_0(&VAR_0->a_entries[VAR_4],
        &VAR_0->a_entries[VAR_4+1])) {
    VAR_3 = 0;
    FUNC_1(VAR_0->a_entries[VAR_4],
         VAR_0->a_entries[VAR_4 + 1]);
   }
  }
 }
}
