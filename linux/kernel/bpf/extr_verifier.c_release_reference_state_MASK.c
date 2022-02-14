
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bpf_func_state {int acquired_refs; TYPE_1__* refs; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bpf_func_state *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_4 = VAR_1->acquired_refs - 1;
 for (VAR_3 = 0; VAR_3 < VAR_1->acquired_refs; VAR_3++) {
  if (VAR_1->refs[VAR_3].id == VAR_2) {
   if (VAR_4 && VAR_3 != VAR_4)
    FUNC_0(&VAR_1->refs[VAR_3], &VAR_1->refs[VAR_4],
           sizeof(*VAR_1->refs));
   FUNC_1(&VAR_1->refs[VAR_4], 0, sizeof(*VAR_1->refs));
   VAR_1->acquired_refs--;
   return 0;
  }
 }
 return -VAR_0;
}
