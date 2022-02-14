
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_read {int dummy; } ;
struct afs_call {struct afs_read* read_request; } ;


 int FUNC_0 (struct afs_call*) ;
 int FUNC_1 (struct afs_read*) ;

__attribute__((used)) static void FUNC_2(struct afs_call *VAR_0)
{
 struct afs_read *VAR_1 = VAR_0->read_request;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0);
}
