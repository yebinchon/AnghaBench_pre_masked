
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_exeq_elem {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 struct bnx2x_exeq_elem* FUNC_1 (int,int ) ;

__attribute__((used)) static inline struct bnx2x_exeq_elem *FUNC_2(
 struct bnx2x *VAR_2)
{
 FUNC_0(VAR_0, "Allocating a new exe_queue element\n");
 return FUNC_1(sizeof(struct bnx2x_exeq_elem), VAR_1);
}
