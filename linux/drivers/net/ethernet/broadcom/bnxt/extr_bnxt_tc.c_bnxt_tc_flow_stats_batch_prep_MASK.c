
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rhashtable_iter {int dummy; } ;
struct bnxt_tc_stats_batch {void* flow_node; } ;
struct bnxt_tc_info {struct rhashtable_iter iter; } ;
struct bnxt {struct bnxt_tc_info* tc_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct rhashtable_iter*) ;
 int FUNC_3 (struct rhashtable_iter*) ;
 int FUNC_4 (struct rhashtable_iter*) ;

__attribute__((used)) static int
FUNC_5(struct bnxt *VAR_2,
         struct bnxt_tc_stats_batch VAR_3[],
         int *VAR_4)
{
 struct bnxt_tc_info *VAR_5 = VAR_2->tc_info;
 struct rhashtable_iter *VAR_6 = &VAR_5->iter;
 void *VAR_7;
 int VAR_8, VAR_9;

 FUNC_3(VAR_6);

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = FUNC_2(VAR_6);
  if (FUNC_0(VAR_7)) {
   VAR_9 = 0;
   if (FUNC_1(VAR_7) == -VAR_1) {
    continue;
   } else {
    VAR_8 = FUNC_1(VAR_7);
    goto done;
   }
  }


  if (!VAR_7)
   goto done;

  VAR_3[VAR_9].flow_node = VAR_7;
 }
done:
 FUNC_4(VAR_6);
 *VAR_4 = VAR_9;
 return VAR_8;
}
