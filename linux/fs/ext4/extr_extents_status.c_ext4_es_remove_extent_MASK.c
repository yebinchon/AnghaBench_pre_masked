
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; } ;
typedef scalar_t__ ext4_lblk_t ;
struct TYPE_2__ {int i_es_lock; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,scalar_t__,scalar_t__,int*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,int ) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct inode *VAR_0, ext4_lblk_t VAR_1,
     ext4_lblk_t VAR_2)
{
 ext4_lblk_t VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;

 FUNC_6(VAR_0, VAR_1, VAR_2);
 FUNC_3("remove [%u/%u) from extent status tree of inode %lu\n",
   VAR_1, VAR_2, VAR_0->i_ino);

 if (!VAR_2)
  return VAR_4;

 VAR_3 = VAR_1 + VAR_2 - 1;
 FUNC_0(VAR_3 < VAR_1);






 FUNC_7(&FUNC_1(VAR_0)->i_es_lock);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_3, &VAR_5);
 FUNC_8(&FUNC_1(VAR_0)->i_es_lock);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0, VAR_5);
 return VAR_4;
}
