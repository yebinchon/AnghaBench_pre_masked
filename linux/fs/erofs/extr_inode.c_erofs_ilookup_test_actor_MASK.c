
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
typedef scalar_t__ erofs_nid_t ;
struct TYPE_2__ {scalar_t__ const nid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 const erofs_nid_t VAR_2 = *(erofs_nid_t *)VAR_1;

 return FUNC_0(VAR_0)->nid == VAR_2;
}
