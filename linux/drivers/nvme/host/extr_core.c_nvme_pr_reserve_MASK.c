
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct block_device {int dummy; } ;
typedef enum pr_type { ____Placeholder_pr_type } pr_type ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct block_device*,int,int ,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct block_device *VAR_3, u64 VAR_4,
  enum pr_type VAR_5, unsigned VAR_6)
{
 u32 VAR_7;

 if (VAR_6 & ~VAR_1)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_5) << 8;
 VAR_7 |= ((VAR_6 & VAR_1) ? 1 << 3 : 0);
 return FUNC_0(VAR_3, VAR_7, VAR_4, 0, VAR_2);
}
