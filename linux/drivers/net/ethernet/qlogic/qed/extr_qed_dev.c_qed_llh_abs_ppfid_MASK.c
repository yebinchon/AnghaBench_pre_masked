
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qed_llh_info {size_t num_ppfid; size_t* ppfid_array; } ;
struct qed_dev {struct qed_llh_info* p_llh_info; } ;


 int FUNC_0 (struct qed_dev*,char*,size_t,size_t) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct qed_dev *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 struct qed_llh_info *VAR_4 = VAR_1->p_llh_info;

 if (VAR_2 >= VAR_4->num_ppfid) {
  FUNC_0(VAR_1,
     "ppfid %d is not valid, available indices are 0..%hhd\n",
     VAR_2, VAR_4->num_ppfid - 1);
  *VAR_3 = 0;
  return -VAR_0;
 }

 *VAR_3 = VAR_4->ppfid_array[VAR_2];

 return 0;
}
