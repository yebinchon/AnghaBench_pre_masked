
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct block_device {int dummy; } ;
typedef enum pr_type { ____Placeholder_pr_type } pr_type ;


 int VAR_0 ;
 int FUNC_0 (struct block_device*,int,int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_1, u64 VAR_2, u64 VAR_3,
  enum pr_type VAR_4, bool VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_4) << 8 | (VAR_5 ? 2 : 1);
 return FUNC_0(VAR_1, VAR_6, VAR_2, VAR_3, VAR_0);
}
