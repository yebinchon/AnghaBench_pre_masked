
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dentry {int d_sb; } ;
struct TYPE_4__ {int idotdot; } ;
struct TYPE_5__ {TYPE_1__ header; } ;
struct TYPE_6__ {TYPE_2__ i_dtroot; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 unsigned long FUNC_4 (int ) ;

struct dentry *FUNC_5(struct dentry *VAR_0)
{
 unsigned long VAR_1;

 VAR_1 =
  FUNC_4(FUNC_0(FUNC_1(VAR_0))->i_dtroot.header.idotdot);

 return FUNC_2(FUNC_3(VAR_0->d_sb, VAR_1));
}
