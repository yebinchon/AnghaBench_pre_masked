
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct scatterlist*) ;

__attribute__((used)) static inline
int FUNC_1(struct scatterlist *VAR_1)
{
 return FUNC_0(VAR_1) && VAR_1->length <= VAR_0;
}
