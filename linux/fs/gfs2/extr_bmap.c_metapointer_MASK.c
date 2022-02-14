
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metapath {int* mp_list; } ;
typedef int __be64 ;


 int * FUNC_0 (unsigned int,struct metapath const*) ;

__attribute__((used)) static inline __be64 *FUNC_1(unsigned int VAR_0, const struct metapath *VAR_1)
{
 __be64 *VAR_2 = FUNC_0(VAR_0, VAR_1);
 return VAR_2 + VAR_1->mp_list[VAR_0];
}
