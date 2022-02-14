
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ time64_t ;
struct afs_call {int reply_time; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static time64_t FUNC_1(struct afs_call *VAR_1, u32 VAR_2)
{
 return FUNC_0(VAR_1->reply_time, VAR_0) + VAR_2;
}
