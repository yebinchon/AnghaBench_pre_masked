
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_tgt_cmd {scalar_t__ bufflen; } ;



__attribute__((used)) static inline int FUNC_0(struct qla_tgt_cmd *VAR_0)
{
 return VAR_0->bufflen > 0;
}
