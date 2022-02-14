
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_func_sp_obj {int pending; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_func_cmd { ____Placeholder_bnx2x_func_cmd } bnx2x_func_cmd ;


 int FUNC_0 (struct bnx2x*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct bnx2x *VAR_0,
    struct bnx2x_func_sp_obj *VAR_1,
    enum bnx2x_func_cmd VAR_2)
{
 return FUNC_0(VAR_0, VAR_2, &VAR_1->pending);
}
