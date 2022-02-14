
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int i_mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (struct inode*,scalar_t__,int) ;
 int FUNC_6 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, loff_t VAR_4, loff_t VAR_5)
{
 loff_t VAR_6;
 int VAR_7;

 if (VAR_4 + VAR_5 >= FUNC_7(VAR_3))
  return -VAR_0;


 if (VAR_4 & (VAR_1 - 1) || VAR_5 & (VAR_1 - 1))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_6(VAR_3->i_mapping, VAR_4, VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  return VAR_7;


 FUNC_1(&FUNC_0(VAR_3)->i_mmap_sem);
 FUNC_6(VAR_3->i_mapping, VAR_4, VAR_2);
 FUNC_8(VAR_3, VAR_4);

 VAR_6 = FUNC_7(VAR_3) - VAR_5;
 FUNC_8(VAR_3, VAR_6);

 VAR_7 = FUNC_5(VAR_3, VAR_6, 1);
 FUNC_9(&FUNC_0(VAR_3)->i_mmap_sem);
 if (!VAR_7)
  FUNC_4(VAR_3, VAR_6);
 return VAR_7;
}
