
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scsi_ctrl_blk {int flags; int buflen; int bufptr; int next_state; scalar_t__ sglen; } ;
struct initio_host {scalar_t__ addr; struct scsi_ctrl_blk* active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct initio_host * VAR_11)
{
 struct scsi_ctrl_blk *VAR_12 = VAR_11->active;

 if ((VAR_12->flags & VAR_1) == VAR_0)
  return 6;

 FUNC_1(VAR_12->buflen, VAR_11->addr + VAR_7);
 FUNC_0(VAR_5, VAR_11->addr + VAR_6);

 if (VAR_12->flags & VAR_2) {
  FUNC_1(((u32) VAR_12->sglen) << 3, VAR_11->addr + VAR_10);
  FUNC_1(VAR_12->bufptr, VAR_11->addr + VAR_8);
  FUNC_0(VAR_3, VAR_11->addr + VAR_9);
 } else {
  FUNC_1(VAR_12->buflen, VAR_11->addr + VAR_10);
  FUNC_1(VAR_12->bufptr, VAR_11->addr + VAR_8);
  FUNC_0(VAR_4, VAR_11->addr + VAR_9);
 }

 VAR_12->next_state = 0x5;
 return 0;
}
