
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ntb_dev {int dummy; } ;
struct intel_ntb_dev {int db_vec_count; int db_valid_mask; } ;


 int FUNC_0 (struct intel_ntb_dev*,int) ;
 struct intel_ntb_dev* FUNC_1 (struct ntb_dev*) ;

u64 FUNC_2(struct ntb_dev *VAR_0, int VAR_1)
{
 struct intel_ntb_dev *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 < 0 || VAR_1 > VAR_2->db_vec_count)
  return 0;

 return VAR_2->db_valid_mask & FUNC_0(VAR_2, VAR_1);
}
