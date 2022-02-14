
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_quehead {struct sym_quehead* flink; } ;



__attribute__((used)) static inline struct sym_quehead *FUNC_0(struct sym_quehead *VAR_0)
{
 return (VAR_0->flink == VAR_0) ? 0 : VAR_0->flink;
}
