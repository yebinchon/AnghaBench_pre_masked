
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_msgq_rspq {scalar_t__ flags; scalar_t__ consumer_index; scalar_t__ producer_index; } ;



__attribute__((used)) static void
FUNC_0(struct bfa_msgq_rspq *VAR_0)
{
 VAR_0->producer_index = 0;
 VAR_0->consumer_index = 0;
 VAR_0->flags = 0;
}
