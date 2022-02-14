
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_llh_info {int* ppfid_array; size_t num_ppfid; void** pp_filters; } ;
struct qed_dev {int ppfid_bitmap; struct qed_llh_info* p_llh_info; } ;


 int FUNC_0 (struct qed_dev*,int ,char*,size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct qed_dev *VAR_5)
{
 struct qed_llh_info *VAR_6;
 u32 VAR_7, VAR_8;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_5->p_llh_info = VAR_6;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (!(VAR_5->ppfid_bitmap & (0x1 << VAR_8)))
   continue;

  VAR_6->ppfid_array[VAR_6->num_ppfid] = VAR_8;
  FUNC_0(VAR_5, VAR_4, "ppfid_array[%d] = %hhd\n",
      VAR_6->num_ppfid, VAR_8);
  VAR_6->num_ppfid++;
 }

 VAR_7 = VAR_6->num_ppfid * sizeof(*VAR_6->pp_filters);
 VAR_6->pp_filters = FUNC_1(VAR_7, VAR_1);
 if (!VAR_6->pp_filters)
  return -VAR_0;

 VAR_7 = VAR_3 *
     sizeof(**VAR_6->pp_filters);
 for (VAR_8 = 0; VAR_8 < VAR_6->num_ppfid; VAR_8++) {
  VAR_6->pp_filters[VAR_8] = FUNC_1(VAR_7, VAR_1);
  if (!VAR_6->pp_filters[VAR_8])
   return -VAR_0;
 }

 return 0;
}
