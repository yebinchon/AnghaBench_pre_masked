
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
typedef int __u32 ;
struct TYPE_2__ {int (* s_hash_function ) (char const*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (char const*,int) ;

__attribute__((used)) static __u32 FUNC_3(struct super_block *VAR_3,
     const char *VAR_4, int VAR_5)
{
 __u32 VAR_6;

 if (!VAR_5 || (VAR_5 == 1 && VAR_4[0] == '.'))
  return VAR_1;
 if (VAR_5 == 2 && VAR_4[0] == '.' && VAR_4[1] == '.')
  return VAR_0;

 VAR_6 = FUNC_1(VAR_3)->s_hash_function(VAR_4, VAR_5);


 VAR_6 = FUNC_0(VAR_6);
 if (VAR_6 == 0)




  VAR_6 = 128;
 return VAR_6 + VAR_2;
}
