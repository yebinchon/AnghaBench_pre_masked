
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int size; int start; } ;
struct fjes_hw {TYPE_1__ hw_res; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static u8 *FUNC_3(struct fjes_hw *VAR_1)
{
 u8 *VAR_2;

 if (!FUNC_2(VAR_1->hw_res.start, VAR_1->hw_res.size,
    VAR_0)) {
  FUNC_1("request_mem_region failed\n");
  return ((void*)0);
 }

 VAR_2 = (u8 *)FUNC_0(VAR_1->hw_res.start, VAR_1->hw_res.size);

 return VAR_2;
}
