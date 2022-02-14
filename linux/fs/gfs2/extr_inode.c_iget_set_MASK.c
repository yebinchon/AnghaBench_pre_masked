
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct inode {void* i_ino; } ;
struct TYPE_2__ {void* i_no_addr; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 u64 VAR_2 = *(u64 *)VAR_1;

 FUNC_0(VAR_0)->i_no_addr = VAR_2;
 VAR_0->i_ino = VAR_2;
 return 0;
}
