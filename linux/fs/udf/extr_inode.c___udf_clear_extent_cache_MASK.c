
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bh; } ;
struct TYPE_4__ {int lstart; TYPE_1__ epos; } ;
struct udf_inode_info {TYPE_2__ cached_extent; } ;
struct inode {int dummy; } ;


 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_0)
{
 struct udf_inode_info *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->cached_extent.lstart != -1) {
  FUNC_1(VAR_1->cached_extent.epos.bh);
  VAR_1->cached_extent.lstart = -1;
 }
}
