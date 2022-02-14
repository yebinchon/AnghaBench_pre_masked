
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {TYPE_3__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ s_maxbytes; } ;
struct TYPE_5__ {scalar_t__ s_bitmap_maxbytes; } ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*) ;


 int VAR_1 ;
 int FUNC_1 (struct inode*,int ) ;
 scalar_t__ FUNC_2 (struct file*,scalar_t__,int,scalar_t__,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (struct inode*,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (struct file*,scalar_t__,scalar_t__) ;

loff_t FUNC_9(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_2->f_mapping->host;
 loff_t VAR_6;

 if (!(FUNC_1(VAR_5, VAR_0)))
  VAR_6 = FUNC_0(VAR_5->i_sb)->s_bitmap_maxbytes;
 else
  VAR_6 = VAR_5->i_sb->s_maxbytes;

 switch (VAR_4) {
 default:
  return FUNC_2(VAR_2, VAR_3, VAR_4,
      VAR_6, FUNC_3(VAR_5));
 case 128:
  FUNC_4(VAR_5);
  VAR_3 = FUNC_7(VAR_5, VAR_3, &VAR_1);
  FUNC_5(VAR_5);
  break;
 case 129:
  FUNC_4(VAR_5);
  VAR_3 = FUNC_6(VAR_5, VAR_3, &VAR_1);
  FUNC_5(VAR_5);
  break;
 }

 if (VAR_3 < 0)
  return VAR_3;
 return FUNC_8(VAR_2, VAR_3, VAR_6);
}
