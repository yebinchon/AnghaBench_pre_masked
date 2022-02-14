
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef int journal_t ;


 int VAR_0 ;
 int * FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct address_space*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct address_space*,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

__attribute__((used)) static sector_t FUNC_11(struct address_space *VAR_4, sector_t VAR_5)
{
 struct inode *VAR_6 = VAR_4->host;
 journal_t *VAR_7;
 int VAR_8;




 if (FUNC_2(VAR_6))
  return 0;

 if (FUNC_9(VAR_4, VAR_2) &&
   FUNC_10(VAR_6->i_sb, VAR_0)) {





  FUNC_4(VAR_4);
 }

 if (FUNC_0(VAR_6) &&
     FUNC_3(VAR_6, VAR_1)) {
  FUNC_1(VAR_6, VAR_1);
  VAR_7 = FUNC_0(VAR_6);
  FUNC_7(VAR_7);
  VAR_8 = FUNC_6(VAR_7);
  FUNC_8(VAR_7);

  if (VAR_8)
   return 0;
 }

 return FUNC_5(VAR_4, VAR_5, VAR_3);
}
