
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct address_space *VAR_0, loff_t VAR_1)
{
 struct inode *VAR_2 = VAR_0->host;

 FUNC_0(VAR_2->i_sb);

 if (VAR_1 > VAR_2->i_size) {
  FUNC_3(VAR_2, VAR_2->i_size);
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_2->i_sb);
}
