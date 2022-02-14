
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netsec_desc_ring {scalar_t__ head; scalar_t__ tail; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct netsec_desc_ring *VAR_1)
{
 int VAR_2;

 if (VAR_1->head >= VAR_1->tail)
  VAR_2 = VAR_1->head - VAR_1->tail;
 else
  VAR_2 = VAR_1->head + VAR_0 - VAR_1->tail;

 return VAR_2;
}
