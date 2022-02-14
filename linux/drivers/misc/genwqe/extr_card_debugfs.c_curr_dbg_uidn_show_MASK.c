
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct genwqe_dev* private; } ;
struct genwqe_reg {int dummy; } ;
struct genwqe_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,struct genwqe_reg*,int) ;
 int FUNC_1 (struct genwqe_dev*,int,struct genwqe_reg*,int) ;
 int FUNC_2 (struct genwqe_dev*,int) ;
 int FUNC_3 (struct genwqe_dev*) ;
 int FUNC_4 (struct genwqe_dev*) ;
 struct genwqe_reg* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct genwqe_reg*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_3, void *VAR_4, int VAR_5)
{
 struct genwqe_dev *VAR_6 = VAR_3->private;
 int VAR_7;
 struct genwqe_reg *VAR_8;

 VAR_7 = FUNC_2(VAR_6, VAR_5);
 if (VAR_7 < 0)
  return -VAR_0;

 if (VAR_7 == 0)
  return 0;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_6);
 FUNC_1(VAR_6, VAR_5, VAR_8, VAR_7);
 FUNC_3(VAR_6);

 FUNC_0(VAR_3, VAR_8, VAR_7);
 FUNC_6(VAR_8);
 return 0;
}
