
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct scb {int sg_list_busaddr; TYPE_1__* hscb; scalar_t__ sg_list; } ;
struct ahd_softc {int flags; } ;
struct ahd_dma_seg {int len; scalar_t__ addr; } ;
struct ahd_dma64_seg {int len; int addr; } ;
struct TYPE_2__ {int sgptr; int datacnt; int dataptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_3, struct scb *VAR_4)
{



 if ((VAR_3->flags & VAR_1) != 0) {
  struct ahd_dma64_seg *VAR_5;

  VAR_5 = (struct ahd_dma64_seg *)VAR_4->sg_list;
  VAR_4->hscb->dataptr = VAR_5->addr;
  VAR_4->hscb->datacnt = VAR_5->len;
 } else {
  struct ahd_dma_seg *VAR_6;
  uint32_t *VAR_7;

  VAR_6 = (struct ahd_dma_seg *)VAR_4->sg_list;
  VAR_7 = (uint32_t*)&VAR_4->hscb->dataptr;
  VAR_7[0] = VAR_6->addr;
  VAR_7[1] = 0;
  if ((VAR_3->flags & VAR_0) != 0) {
   uint64_t VAR_8;

   VAR_8 = FUNC_2(VAR_6->len) & 0x7F000000;
   VAR_4->hscb->dataptr |= FUNC_1(VAR_8 << 8);
  }
  VAR_4->hscb->datacnt = VAR_6->len;
 }






 VAR_4->hscb->sgptr = FUNC_0(VAR_4->sg_list_busaddr|VAR_2);
}
