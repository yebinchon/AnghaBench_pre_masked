
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct iattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ journal_info; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct iattr*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct inode *VAR_2, struct iattr *VAR_3)
{
 int VAR_4;

 if (VAR_1->journal_info)
  return FUNC_1(VAR_2, VAR_3);

 VAR_4 = FUNC_2(FUNC_0(VAR_2), VAR_0, 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_3(FUNC_0(VAR_2));
 return VAR_4;
}
