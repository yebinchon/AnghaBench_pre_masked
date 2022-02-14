
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct tidaw {scalar_t__ addr; int count; int flags; } ;
struct tcw {int dummy; } ;
typedef scalar_t__ addr_t ;


 int FUNC_0 (struct tidaw*,int ,int) ;
 scalar_t__ FUNC_1 (struct tcw*) ;

struct tidaw *FUNC_2(struct tcw *VAR_0, int VAR_1, u8 VAR_2,
       void *VAR_3, u32 VAR_4)
{
 struct tidaw *VAR_5;


 VAR_5 = ((struct tidaw *) FUNC_1(VAR_0)) + VAR_1;
 FUNC_0(VAR_5, 0, sizeof(struct tidaw));
 VAR_5->flags = VAR_2;
 VAR_5->count = VAR_4;
 VAR_5->addr = (u64) ((addr_t) VAR_3);
 return VAR_5;
}
