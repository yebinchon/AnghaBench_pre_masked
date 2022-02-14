
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_entries; } ;
struct bpf_array {int * pptrs; TYPE_1__ map; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bpf_array *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->map.max_entries; VAR_1++) {
  FUNC_1(VAR_0->pptrs[VAR_1]);
  FUNC_0();
 }
}
