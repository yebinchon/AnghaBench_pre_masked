
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kcq_info {int * status_idx_ptr; } ;
struct cnic_dev {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cnic_dev*,struct kcq_info*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct cnic_dev*,int) ;

__attribute__((used)) static u32 FUNC_4(struct cnic_dev *VAR_0, struct kcq_info *VAR_1)
{
 u32 VAR_2 = *VAR_1->status_idx_ptr;
 int VAR_3;


 FUNC_2();
 while ((VAR_3 = FUNC_1(VAR_0, VAR_1))) {

  FUNC_3(VAR_0, VAR_3);


  FUNC_0();

  VAR_2 = *VAR_1->status_idx_ptr;

  FUNC_2();
 }
 return VAR_2;
}
