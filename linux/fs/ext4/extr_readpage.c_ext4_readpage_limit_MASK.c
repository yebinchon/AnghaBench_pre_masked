
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
typedef int loff_t ;
struct TYPE_2__ {int s_maxbytes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static inline loff_t FUNC_4(struct inode *VAR_1)
{
 if (FUNC_0(VAR_0) &&
     (FUNC_1(VAR_1) || FUNC_2(VAR_1)))
  return VAR_1->i_sb->s_maxbytes;

 return FUNC_3(VAR_1);
}
