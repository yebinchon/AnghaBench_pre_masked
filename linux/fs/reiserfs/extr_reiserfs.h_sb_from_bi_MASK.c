
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_info {int tb; } ;


 struct super_block* FUNC_0 (int ) ;

__attribute__((used)) static inline struct super_block *FUNC_1(struct buffer_info *VAR_0)
{
 return VAR_0 ? FUNC_0(VAR_0->tb) : ((void*)0);
}
