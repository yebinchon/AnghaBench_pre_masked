
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orangefs_inode_s {unsigned long bitlock; scalar_t__ mapping_time; } ;
struct inode {int i_lock; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct orangefs_inode_s* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct address_space*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,unsigned long*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,unsigned long*) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 int FUNC_11 (struct address_space*,int ,int ,int ) ;
 int FUNC_12 (unsigned long*,int,int ) ;
 int FUNC_13 (unsigned long*,int) ;

int FUNC_14(struct inode *VAR_4)
{
 struct orangefs_inode_s *VAR_5 = FUNC_0(VAR_4);
 struct address_space *VAR_6 = VAR_4->i_mapping;
 unsigned long *VAR_7 = &VAR_5->bitlock;
 int VAR_8;

 while (1) {
  VAR_8 = FUNC_12(VAR_7, 1, VAR_1);
  if (VAR_8)
   return VAR_8;
  FUNC_7(&VAR_4->i_lock);
  if (FUNC_9(1, VAR_7)) {
   FUNC_8(&VAR_4->i_lock);
   continue;
  }
  if (!FUNC_10(VAR_2, VAR_5->mapping_time))
   break;
  FUNC_8(&VAR_4->i_lock);
  return 0;
 }

 FUNC_4(1, VAR_7);
 FUNC_6();
 FUNC_8(&VAR_4->i_lock);

 FUNC_11(VAR_6, 0, 0, 0);
 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8)
  VAR_8 = FUNC_3(VAR_6);

 VAR_5->mapping_time = VAR_2 +
     VAR_3*VAR_0/1000;

 FUNC_1(1, VAR_7);
 FUNC_5();
 FUNC_13(VAR_7, 1);

 return VAR_8;
}
