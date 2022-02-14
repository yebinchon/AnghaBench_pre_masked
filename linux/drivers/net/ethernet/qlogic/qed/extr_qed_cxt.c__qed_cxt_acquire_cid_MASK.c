
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {struct qed_cxt_mngr* p_cxt_mngr; } ;
struct qed_cxt_mngr {struct qed_cid_acquired_map** acquired_vf; struct qed_cid_acquired_map* acquired; } ;
struct qed_cid_acquired_map {scalar_t__ max_count; scalar_t__ start_cid; int cid_map; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,scalar_t__,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

int FUNC_4(struct qed_hwfn *VAR_5,
    enum protocol_type VAR_6, u32 *VAR_7, u8 VAR_8)
{
 struct qed_cxt_mngr *VAR_9 = VAR_5->p_cxt_mngr;
 struct qed_cid_acquired_map *VAR_10;
 u32 VAR_11;

 if (VAR_6 >= VAR_1) {
  FUNC_0(VAR_5, "Invalid protocol type %d", VAR_6);
  return -VAR_0;
 }

 if (VAR_8 >= VAR_2 && VAR_8 != VAR_3) {
  FUNC_0(VAR_5, "VF [%02x] is out of range\n", VAR_8);
  return -VAR_0;
 }


 if (VAR_8 == VAR_3)
  VAR_10 = &VAR_9->acquired[VAR_6];
 else
  VAR_10 = &VAR_9->acquired_vf[VAR_6][VAR_8];

 if (!VAR_10->cid_map) {
  FUNC_0(VAR_5, "Invalid protocol type %d", VAR_6);
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_10->cid_map, VAR_10->max_count);

 if (VAR_11 >= VAR_10->max_count) {
  FUNC_0(VAR_5, "no CID available for protocol %d\n", VAR_6);
  return -VAR_0;
 }

 FUNC_2(VAR_11, VAR_10->cid_map);

 *VAR_7 = VAR_11 + VAR_10->start_cid;

 FUNC_1(VAR_5, VAR_4,
     "Acquired cid 0x%08x [rel. %08x] vfid %02x type %d\n",
     *VAR_7, VAR_11, VAR_8, VAR_6);

 return 0;
}
