
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vchiu_queue {scalar_t__ read; scalar_t__ write; } ;



int FUNC_0(struct vchiu_queue *VAR_0)
{
 return VAR_0->read == VAR_0->write;
}
