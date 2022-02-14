
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; TYPE_1__* i_fop; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* open ) (struct inode*,struct file*) ;int release; } ;


 int FUNC_0 (int) ;


 int VAR_0 ;

 int FUNC_1 (int) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,struct file*,int,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int ,int) ;
 int VAR_1 ;
 int FUNC_7 (char*,struct inode*,struct file*,int) ;
 int FUNC_8 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_2, struct file *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_2->i_mode & VAR_0) {
 case 128:
  FUNC_3(VAR_2);
  FUNC_2(VAR_2, VAR_3);

 case 130:
  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_4,
      FUNC_1(VAR_2->i_mode));
  if (VAR_5)
   return VAR_5;
  break;

 case 129:
  FUNC_7("init_file %p %p 0%o (symlink)\n", VAR_2, VAR_3,
       VAR_2->i_mode);
  FUNC_6(FUNC_5(VAR_2), VAR_4);
  break;

 default:
  FUNC_7("init_file %p %p 0%o (special)\n", VAR_2, VAR_3,
       VAR_2->i_mode);




  FUNC_6(FUNC_5(VAR_2), VAR_4);
  FUNC_0(VAR_2->i_fop->release == VAR_1);


  VAR_5 = VAR_2->i_fop->open(VAR_2, VAR_3);
 }
 return VAR_5;
}
