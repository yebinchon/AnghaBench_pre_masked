
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_block {int status_idx; } ;
struct cnic_dev {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_dev*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, void *VAR_2)
{
 struct cnic_dev *VAR_3 = VAR_1;

 if (FUNC_2(!FUNC_1(VAR_0, &VAR_3->flags))) {
  struct status_block *VAR_4 = VAR_2;

  return VAR_4->status_idx;
 }

 return FUNC_0(VAR_3);
}
