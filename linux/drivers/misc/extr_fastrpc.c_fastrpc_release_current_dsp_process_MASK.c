
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int tgid ;
struct fastrpc_user {int tgid; } ;
struct fastrpc_invoke_args {int length; int fd; scalar_t__ reserved; scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (struct fastrpc_user*,int,int ,int ,struct fastrpc_invoke_args*) ;

__attribute__((used)) static int FUNC_2(struct fastrpc_user *VAR_2)
{
 struct fastrpc_invoke_args VAR_3[1];
 int VAR_4 = 0;
 u32 VAR_5;

 VAR_4 = VAR_2->tgid;
 VAR_3[0].ptr = (u64)(uintptr_t) &VAR_4;
 VAR_3[0].length = sizeof(VAR_4);
 VAR_3[0].fd = -1;
 VAR_3[0].reserved = 0;
 VAR_5 = FUNC_0(VAR_1, 1, 0);

 return FUNC_1(VAR_2, 1, VAR_0,
           VAR_5, &VAR_3[0]);
}
