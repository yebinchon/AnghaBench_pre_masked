
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scb {scalar_t__ sg_list_phys; struct ahc_dma_seg* sg_list; } ;
struct ahc_dma_seg {int dummy; } ;



__attribute__((used)) static uint32_t
FUNC_0(struct scb *VAR_0, struct ahc_dma_seg *VAR_1)
{
 int VAR_2;


 VAR_2 = VAR_1 - &VAR_0->sg_list[1];

 return (VAR_0->sg_list_phys + (VAR_2 * sizeof(*VAR_0->sg_list)));
}
