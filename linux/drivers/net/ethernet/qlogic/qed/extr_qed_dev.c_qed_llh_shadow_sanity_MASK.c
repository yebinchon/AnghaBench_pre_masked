
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qed_llh_info {scalar_t__ num_ppfid; } ;
struct qed_dev {struct qed_llh_info* p_llh_info; } ;


 int FUNC_0 (struct qed_dev*,char*,char const*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct qed_dev *VAR_2,
     u8 VAR_3, u8 VAR_4, const char *VAR_5)
{
 struct qed_llh_info *VAR_6 = VAR_2->p_llh_info;

 if (VAR_3 >= VAR_6->num_ppfid) {
  FUNC_0(VAR_2,
     "LLH shadow [%s]: using ppfid %d while only %d ppfids are available\n",
     VAR_5, VAR_3, VAR_6->num_ppfid);
  return -VAR_0;
 }

 if (VAR_4 >= VAR_1) {
  FUNC_0(VAR_2,
     "LLH shadow [%s]: using filter_idx %d while only %d filters are available\n",
     VAR_5, VAR_4, VAR_1);
  return -VAR_0;
 }

 return 0;
}
