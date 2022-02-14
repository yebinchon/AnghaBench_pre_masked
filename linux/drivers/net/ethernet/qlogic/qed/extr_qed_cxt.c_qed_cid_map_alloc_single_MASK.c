
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct qed_hwfn {int dummy; } ;
struct qed_cid_acquired_map {void* max_count; void* start_cid; int cid_map; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,void*,void*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_4,
    u32 VAR_5,
    u32 VAR_6,
    u32 VAR_7, struct qed_cid_acquired_map *VAR_8)
{
 u32 VAR_9;

 if (!VAR_7)
  return 0;

 VAR_9 = FUNC_0(VAR_7,
       sizeof(unsigned long) * VAR_0) *
        sizeof(unsigned long);
 VAR_8->cid_map = FUNC_2(VAR_9, VAR_2);
 if (!VAR_8->cid_map)
  return -VAR_1;

 VAR_8->max_count = VAR_7;
 VAR_8->start_cid = VAR_6;

 FUNC_1(VAR_4, VAR_3,
     "Type %08x start: %08x count %08x\n",
     VAR_5, VAR_8->start_cid, VAR_8->max_count);

 return 0;
}
