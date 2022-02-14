
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct switchtec_ntb {int db_mask; int db_shift; int db_valid_mask; } ;
struct ntb_dev {int dummy; } ;


 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static u64 FUNC_1(struct ntb_dev *VAR_0)
{
 struct switchtec_ntb *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->db_mask >> VAR_1->db_shift) & VAR_1->db_valid_mask;
}
