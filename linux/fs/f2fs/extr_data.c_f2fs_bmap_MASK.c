
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct address_space*) ;
 int FUNC_2 (struct address_space*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct address_space*,int ) ;

__attribute__((used)) static sector_t FUNC_4(struct address_space *VAR_2, sector_t VAR_3)
{
 struct inode *VAR_4 = VAR_2->host;

 if (FUNC_0(VAR_4))
  return 0;


 if (FUNC_3(VAR_2, VAR_0))
  FUNC_1(VAR_2);

 return FUNC_2(VAR_2, VAR_3, VAR_1);
}
