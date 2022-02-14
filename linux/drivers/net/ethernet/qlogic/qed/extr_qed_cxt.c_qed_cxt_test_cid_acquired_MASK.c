
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {struct qed_cid_acquired_map** acquired_vf; struct qed_cid_acquired_map* acquired; } ;
struct qed_cid_acquired_map {scalar_t__ start_cid; scalar_t__ max_count; int cid_map; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_2(struct qed_hwfn *VAR_2,
          u32 VAR_3,
          u8 VAR_4,
          enum protocol_type *VAR_5,
          struct qed_cid_acquired_map **VAR_6)
{
 struct qed_cxt_mngr *VAR_7 = VAR_2->p_cxt_mngr;
 u32 VAR_8;


 for (*VAR_5 = 0; *VAR_5 < VAR_0; (*VAR_5)++) {
  if (VAR_4 == VAR_1)
   *VAR_6 = &VAR_7->acquired[*VAR_5];
  else
   *VAR_6 = &VAR_7->acquired_vf[*VAR_5][VAR_4];

  if (!((*VAR_6)->cid_map))
   continue;
  if (VAR_3 >= (*VAR_6)->start_cid &&
      VAR_3 < (*VAR_6)->start_cid + (*VAR_6)->max_count)
   break;
 }

 if (*VAR_5 == VAR_0) {
  FUNC_0(VAR_2, "Invalid CID %d vfid %02x", VAR_3, VAR_4);
  goto fail;
 }

 VAR_8 = VAR_3 - (*VAR_6)->start_cid;
 if (!FUNC_1(VAR_8, (*VAR_6)->cid_map)) {
  FUNC_0(VAR_2, "CID %d [vifd %02x] not acquired",
     VAR_3, VAR_4);
  goto fail;
 }

 return 1;
fail:
 *VAR_5 = VAR_0;
 *VAR_6 = ((void*)0);
 return 0;
}
