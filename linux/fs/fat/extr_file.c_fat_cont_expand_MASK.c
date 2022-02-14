
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int *,int) ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct inode*,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2, loff_t VAR_3)
{
 struct address_space *VAR_4 = VAR_2->i_mapping;
 loff_t VAR_5 = VAR_2->i_size, VAR_6 = VAR_3 - VAR_2->i_size;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (VAR_7)
  goto out;

 FUNC_1(VAR_2, ((void*)0), VAR_0|VAR_1);
 FUNC_5(VAR_2);
 if (FUNC_0(VAR_2)) {
  int VAR_8;





  VAR_7 = FUNC_3(VAR_4, VAR_5,
            VAR_5 + VAR_6 - 1);
  VAR_8 = FUNC_6(VAR_4);
  if (!VAR_7)
   VAR_7 = VAR_8;
  VAR_8 = FUNC_7(VAR_2, 1);
  if (!VAR_7)
   VAR_7 = VAR_8;
  if (!VAR_7) {
   VAR_7 = FUNC_2(VAR_4, VAR_5,
             VAR_5 + VAR_6 - 1);
  }
 }
out:
 return VAR_7;
}
