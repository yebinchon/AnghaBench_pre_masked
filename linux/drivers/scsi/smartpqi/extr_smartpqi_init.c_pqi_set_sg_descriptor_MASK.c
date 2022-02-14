
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scatterlist {int dummy; } ;
struct pqi_sg_descriptor {int flags; int length; int address; } ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct scatterlist*) ;
 unsigned int FUNC_3 (struct scatterlist*) ;

__attribute__((used)) static inline void FUNC_4(
 struct pqi_sg_descriptor *VAR_0, struct scatterlist *VAR_1)
{
 u64 VAR_2 = (u64)FUNC_2(VAR_1);
 unsigned int VAR_3 = FUNC_3(VAR_1);

 FUNC_1(VAR_2, &VAR_0->address);
 FUNC_0(VAR_3, &VAR_0->length);
 FUNC_0(0, &VAR_0->flags);
}
