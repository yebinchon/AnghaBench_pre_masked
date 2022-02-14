
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mtime; int i_ctime; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct address_space*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct address_space*) ;
 int FUNC_8 (struct inode*,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0, loff_t VAR_1)
{
 struct address_space *VAR_2 = VAR_0->i_mapping;
 loff_t VAR_3 = FUNC_5(VAR_0), VAR_4 = VAR_1 - FUNC_5(VAR_0);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_4(VAR_0, VAR_1);
 if (VAR_5 != 0)
  return VAR_5;

 VAR_0->i_ctime = VAR_0->i_mtime = FUNC_1(VAR_0);
 FUNC_6(VAR_0);

 if (FUNC_0(VAR_0)) {
  VAR_5 = FUNC_3(VAR_2, VAR_3,
            VAR_3 + VAR_4 - 1);
  VAR_6 = FUNC_7(VAR_2);
  VAR_5 = (VAR_5) ? (VAR_5) : (VAR_6);
  VAR_6 = FUNC_8(VAR_0, 1);
  VAR_5 = (VAR_5) ? (VAR_5) : (VAR_6);
  if (!VAR_5)
   VAR_5 = FUNC_2(VAR_2, VAR_3,
             VAR_3 + VAR_4 - 1);
 }
 return VAR_5;
}
