
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {scalar_t__ nrpages; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct address_space*,scalar_t__,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static u64 FUNC_5(struct inode *VAR_3, pgoff_t VAR_4)
{
 struct address_space *VAR_5 = VAR_3->i_mapping;
 pgoff_t VAR_6;


 VAR_6 = FUNC_0(FUNC_1(VAR_3), VAR_1);
 if (VAR_6 != VAR_3->i_mapping->nrpages) {
  FUNC_3();
  VAR_6 = FUNC_2(VAR_5, VAR_4 + 1, VAR_2);
  FUNC_4();
 }

 if (!VAR_6)
  return FUNC_1(VAR_3) - (VAR_4 << VAR_0);
 else
  return (VAR_6 - VAR_4) << VAR_0;
}
