
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dsd32 {int length; int address; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_3(struct dsd32 **VAR_0, struct scatterlist *VAR_1)
{
 FUNC_0(FUNC_1(VAR_1), &(*VAR_0)->address);
 FUNC_0(FUNC_2(VAR_1), &(*VAR_0)->length);
 (*VAR_0)++;
}
