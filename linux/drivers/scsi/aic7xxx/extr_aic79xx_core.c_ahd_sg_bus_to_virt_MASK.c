
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;
typedef int uint32_t ;
struct scb {int sg_list_busaddr; scalar_t__ sg_list; } ;
struct ahd_softc {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct ahd_softc*) ;

__attribute__((used)) static void *
FUNC_1(struct ahd_softc *VAR_0, struct scb *VAR_1, uint32_t VAR_2)
{
 dma_addr_t VAR_3;


 VAR_3 = VAR_2 - (VAR_1->sg_list_busaddr - FUNC_0(VAR_0));
 return ((uint8_t *)VAR_1->sg_list + VAR_3);
}
