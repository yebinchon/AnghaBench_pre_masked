
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mode; } ;
struct dentry {int d_flags; } ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static void FUNC_5(struct dentry *VAR_2, struct inode *VAR_3)
{
 if (FUNC_1(VAR_3->i_mode))

  FUNC_0(VAR_3)->cache_validity |= VAR_1;

 if (VAR_2->d_flags & VAR_0) {
  FUNC_3(VAR_2, VAR_3);
  FUNC_4(VAR_3);
 }
 FUNC_2(VAR_3);
}
