
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_napi {int dummy; } ;
struct bnxt_cp_ring_info {int cp_raw_cons; int cp_db; struct bnxt_napi* bnapi; } ;
struct bnxt {int dummy; } ;


 int FUNC_0 (struct bnxt*,struct bnxt_cp_ring_info*,int) ;
 int FUNC_1 (struct bnxt*,struct bnxt_napi*) ;
 int FUNC_2 (struct bnxt*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct bnxt *VAR_0, struct bnxt_cp_ring_info *VAR_1,
     int VAR_2)
{
 struct bnxt_napi *VAR_3 = VAR_1->bnapi;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);





 FUNC_2(VAR_0, &VAR_1->cp_db, VAR_1->cp_raw_cons);

 FUNC_1(VAR_0, VAR_3);
 return VAR_4;
}
