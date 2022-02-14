
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kwqe {int kwqe_op_flag; } ;
struct cnic_dev {int (* submit_kwqes ) (struct cnic_dev*,struct kwqe**,int) ;} ;
typedef int l2kwqe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kwqe*,int ,int) ;
 int FUNC_1 (struct cnic_dev*,struct kwqe**,int) ;

__attribute__((used)) static void FUNC_2(struct cnic_dev *VAR_4)
{
 struct kwqe *VAR_5[1], VAR_6;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_5[0] = &VAR_6;
 VAR_6.kwqe_op_flag = (VAR_3 << VAR_0) |
         (VAR_2 <<
          VAR_1) | 2;
 VAR_4->submit_kwqes(VAR_4, VAR_5, 1);
}
