
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct switchtec_ntb {int db_valid_mask; } ;
struct ntb_dev {int dummy; } ;


 struct switchtec_ntb* FUNC_0 (struct ntb_dev*) ;

__attribute__((used)) static u64 FUNC_1(struct ntb_dev *VAR_0, int VAR_1)
{
 struct switchtec_ntb *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 < 0 || VAR_1 > 1)
  return 0;

 return VAR_2->db_valid_mask;
}
