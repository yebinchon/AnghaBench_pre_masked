
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_file {int dummy; } ;
struct ce_array {int n; int flags; int decays_done; int pfns_poisoned; int ces_entered; int * array; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct ce_array VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_5, void *VAR_6)
{
 struct ce_array *VAR_7 = &VAR_2;
 int VAR_8;

 FUNC_3(&VAR_3);

 FUNC_5(VAR_5, "{ n: %d\n", VAR_7->n);
 for (VAR_8 = 0; VAR_8 < VAR_7->n; VAR_8++) {
  u64 VAR_9 = FUNC_2(VAR_7->array[VAR_8]);

  FUNC_5(VAR_5, " %3d: [%016llx|%s|%03llx]\n",
      VAR_8, VAR_9, VAR_1[FUNC_1(VAR_7->array[VAR_8])], FUNC_0(VAR_7->array[VAR_8]));
 }

 FUNC_5(VAR_5, "}\n");

 FUNC_5(VAR_5, "Stats:\nCEs: %llu\nofflined pages: %llu\n",
     VAR_7->ces_entered, VAR_7->pfns_poisoned);

 FUNC_5(VAR_5, "Flags: 0x%x\n", VAR_7->flags);

 FUNC_5(VAR_5, "Decay interval: %lld seconds\n", VAR_4);
 FUNC_5(VAR_5, "Decays: %lld\n", VAR_7->decays_done);

 FUNC_5(VAR_5, "Action threshold: %lld\n", VAR_0);

 FUNC_4(&VAR_3);

 return 0;
}
