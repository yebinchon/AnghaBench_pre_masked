
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct super_block*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct buffer_head *FUNC_5(struct super_block *VAR_0, __u64 VAR_1)
{
 struct buffer_head *VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (FUNC_4(!VAR_2))
  return ((void*)0);
 if (!FUNC_1(VAR_2)) {
  if (FUNC_0(VAR_2) < 0) {
   FUNC_2(VAR_2);
   return ((void*)0);
  }
 }

 return VAR_2;
}
