
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge_rspq {int gen; } ;
struct rsp_desc {int intr_gen; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct rsp_desc *VAR_1,
      const struct sge_rspq *VAR_2)
{
 return (VAR_1->intr_gen & VAR_0) == VAR_2->gen;
}
