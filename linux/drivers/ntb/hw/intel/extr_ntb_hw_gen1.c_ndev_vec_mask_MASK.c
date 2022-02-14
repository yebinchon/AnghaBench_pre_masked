
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_ntb_dev {int db_vec_shift; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline u64 FUNC_1(struct intel_ntb_dev *VAR_0, int VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_2 = VAR_0->db_vec_shift;
 VAR_3 = FUNC_0(VAR_2) - 1;

 return VAR_3 << (VAR_2 * VAR_1);
}
