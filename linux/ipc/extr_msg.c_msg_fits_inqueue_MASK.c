
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msg_queue {scalar_t__ q_cbytes; scalar_t__ q_qbytes; scalar_t__ q_qnum; } ;



__attribute__((used)) static inline bool FUNC_0(struct msg_queue *VAR_0, size_t VAR_1)
{
 return VAR_1 + VAR_0->q_cbytes <= VAR_0->q_qbytes &&
  1 + VAR_0->q_qnum <= VAR_0->q_qbytes;
}
