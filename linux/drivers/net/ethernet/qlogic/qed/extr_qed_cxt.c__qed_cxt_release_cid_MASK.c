
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_cid_acquired_map {int cid_map; scalar_t__ start_cid; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;


 int FUNC_0 (struct qed_hwfn*,char*,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,scalar_t__,scalar_t__,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct qed_hwfn*,scalar_t__,int ,int*,struct qed_cid_acquired_map**) ;

void FUNC_4(struct qed_hwfn *VAR_3, u32 VAR_4, u8 VAR_5)
{
 struct qed_cid_acquired_map *VAR_6 = ((void*)0);
 enum protocol_type VAR_7;
 bool VAR_8;
 u32 VAR_9;

 if (VAR_5 != VAR_1 && VAR_5 > VAR_0) {
  FUNC_0(VAR_3,
     "Trying to return incorrect CID belonging to VF %02x\n",
     VAR_5);
  return;
 }


 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5,
            &VAR_7, &VAR_6);

 if (!VAR_8)
  return;

 VAR_9 = VAR_4 - VAR_6->start_cid;
 FUNC_2(VAR_9, VAR_6->cid_map);

 FUNC_1(VAR_3, VAR_2,
     "Released CID 0x%08x [rel. %08x] vfid %02x type %d\n",
     VAR_4, VAR_9, VAR_5, VAR_7);
}
