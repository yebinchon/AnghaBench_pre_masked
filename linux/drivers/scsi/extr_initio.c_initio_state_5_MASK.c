
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef unsigned long u16 ;
struct sg_entry {int len; int data; } ;
struct scsi_ctrl_blk {int buflen; int flags; size_t sgidx; unsigned long sgmax; int bufptr; scalar_t__ sglen; struct sg_entry* sglist; int hastat; } ;
struct initio_host {int jsstatus0; scalar_t__ phase; scalar_t__ addr; TYPE_1__* active_tc; struct scsi_ctrl_blk* active; } ;
struct TYPE_2__ {int js_period; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct initio_host*) ;

__attribute__((used)) static int FUNC_6(struct initio_host * VAR_20)
{
 struct scsi_ctrl_blk *VAR_21 = VAR_20->active;
 long VAR_22, VAR_23;





 VAR_22 = FUNC_2(VAR_20->addr + VAR_11) & 0x0FFFFFF;

 if (FUNC_1(VAR_20->addr + VAR_15) & 0x20) {


  if (VAR_20->jsstatus0 & VAR_7)
   VAR_21->hastat = VAR_1;
  if (FUNC_1(VAR_20->addr + VAR_17) & VAR_19) {

   FUNC_3(FUNC_1(VAR_20->addr + VAR_16) | 0x80, VAR_20->addr + VAR_16);

   while (FUNC_1(VAR_20->addr + VAR_17) & VAR_19)
    FUNC_0();
  }
 } else {

  if ((FUNC_1(VAR_20->addr + VAR_14) & VAR_8) == 0) {
   if (VAR_20->active_tc->js_period & VAR_5)
    VAR_22 += (FUNC_1(VAR_20->addr + VAR_13) & 0x1F) << 1;
   else
    VAR_22 += (FUNC_1(VAR_20->addr + VAR_13) & 0x1F);
  }
  if (FUNC_1(VAR_20->addr + VAR_17) & VAR_19) {
   FUNC_3(VAR_3, VAR_20->addr + VAR_15);

   while ((FUNC_1(VAR_20->addr + VAR_9) & VAR_18) == 0)
    FUNC_0();
  }
  if ((VAR_22 == 1) && (VAR_20->phase == VAR_0)) {
   FUNC_3(VAR_6, VAR_20->addr + VAR_10);
   if (FUNC_5(VAR_20) == -1)
    return -1;
   VAR_22 = 0;
  } else {
   if ((FUNC_1(VAR_20->addr + VAR_14) & VAR_8) == 0)
    FUNC_3(VAR_4, VAR_20->addr + VAR_12);
  }
 }
 if (VAR_22 == 0) {
  VAR_21->buflen = 0;
  return 6;
 }

 VAR_23 = (long) VAR_21->buflen - VAR_22;
 VAR_21->buflen = (u32) VAR_22;
 if (VAR_21->flags & VAR_2) {
  struct sg_entry *VAR_24;
  unsigned long VAR_25;

  VAR_24 = &VAR_21->sglist[VAR_21->sgidx];
  for (VAR_25 = VAR_21->sgidx; VAR_25 < VAR_21->sgmax; VAR_24++, VAR_25++) {
   VAR_23 -= (long) VAR_24->len;
   if (VAR_23 < 0) {
    VAR_23 += (long) VAR_24->len;
    VAR_24->data += (u32) VAR_23;
    VAR_24->len -= (u32) VAR_23;
    VAR_21->bufptr += ((u32) (VAR_25 - VAR_21->sgidx) << 3);

    VAR_21->sglen = (u8) (VAR_21->sgmax - VAR_25);

    VAR_21->sgidx = (u16) VAR_25;

    return 4;
   }

  }
  return 6;
 } else {
  VAR_21->bufptr += (u32) VAR_23;
 }
 return 4;
}
