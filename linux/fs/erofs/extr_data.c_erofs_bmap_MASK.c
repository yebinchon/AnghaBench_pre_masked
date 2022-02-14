
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int sector_t ;
typedef scalar_t__ erofs_blk_t ;
struct TYPE_2__ {scalar_t__ datalayout; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct address_space*,int,int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static sector_t FUNC_3(struct address_space *VAR_4, sector_t VAR_5)
{
 struct inode *VAR_6 = VAR_4->host;

 if (FUNC_0(VAR_6)->datalayout == VAR_0) {
  erofs_blk_t VAR_7 = FUNC_2(VAR_6) >> VAR_1;

  if (VAR_5 >> VAR_2 >= VAR_7)
   return 0;
 }

 return FUNC_1(VAR_4, VAR_5, VAR_3);
}
