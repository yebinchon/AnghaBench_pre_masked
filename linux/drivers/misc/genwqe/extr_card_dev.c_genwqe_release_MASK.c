
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct genwqe_file {struct genwqe_dev* cd; } ;
struct genwqe_dev {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (struct genwqe_dev*,struct genwqe_file*) ;
 int FUNC_1 (int,struct file*,int ) ;
 int FUNC_2 (struct genwqe_file*) ;
 int FUNC_3 (struct genwqe_file*) ;
 int FUNC_4 (struct genwqe_file*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct genwqe_file *VAR_2 = (struct genwqe_file *)VAR_1->private_data;
 struct genwqe_dev *VAR_3 = VAR_2->cd;


 FUNC_2(VAR_2);
 FUNC_3(VAR_2);


 FUNC_1(-1, VAR_1, 0);






 FUNC_0(VAR_3, VAR_2);
 FUNC_4(VAR_2);
 return 0;
}
