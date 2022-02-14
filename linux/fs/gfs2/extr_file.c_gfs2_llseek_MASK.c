
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (struct file*,int ,int) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_4 (struct file*,int ) ;
 int FUNC_5 (struct file*,int ) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 struct gfs2_inode *VAR_6 = FUNC_0(VAR_3->f_mapping->host);
 struct gfs2_holder VAR_7;
 loff_t VAR_8;

 switch (VAR_5) {
 case 130:
  VAR_8 = FUNC_3(VAR_6->i_gl, VAR_2, VAR_1,
        &VAR_7);
  if (!VAR_8) {
   VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
   FUNC_2(&VAR_7);
  }
  break;

 case 131:
  VAR_8 = FUNC_4(VAR_3, VAR_4);
  break;

 case 129:
  VAR_8 = FUNC_5(VAR_3, VAR_4);
  break;

 case 132:
 case 128:




  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
  break;
 default:
  VAR_8 = -VAR_0;
 }

 return VAR_8;
}
