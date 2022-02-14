
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct ntb_dev {int dummy; } ;
struct amd_ntb_dev {int db_count; unsigned long long db_valid_mask; } ;


 struct amd_ntb_dev* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static u64 FUNC_1(struct ntb_dev *VAR_0, int VAR_1)
{
 struct amd_ntb_dev *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 < 0 || VAR_1 > VAR_2->db_count)
  return 0;

 return FUNC_0(VAR_0)->db_valid_mask & (1ULL << VAR_1);
}
