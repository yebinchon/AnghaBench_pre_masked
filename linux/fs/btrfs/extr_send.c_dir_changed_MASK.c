
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct send_ctx {int parent_root; int send_root; } ;


 int FUNC_0 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_0, u64 VAR_1)
{
 u64 VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->send_root, VAR_1, ((void*)0), &VAR_3, ((void*)0), ((void*)0),
        ((void*)0), ((void*)0));
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_0->parent_root, VAR_1, ((void*)0), &VAR_2, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
 if (VAR_4)
  return VAR_4;

 return (VAR_2 != VAR_3) ? 1 : 0;
}
