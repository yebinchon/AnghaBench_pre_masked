
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hwq {int dummy; } ;
struct afu {struct hwq* hwqs; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline struct hwq *FUNC_1(struct afu *VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_2 >= VAR_0);

 return &VAR_1->hwqs[VAR_2];
}
