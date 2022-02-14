
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dsd64 {int length; int address; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_4(struct dsd64 **VAR_0, struct scatterlist *VAR_1)
{
 FUNC_1(FUNC_2(VAR_1), &(*VAR_0)->address);
 FUNC_0(FUNC_3(VAR_1), &(*VAR_0)->length);
 (*VAR_0)++;
}
