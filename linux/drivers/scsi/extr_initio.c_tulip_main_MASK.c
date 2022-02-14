
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_ctrl_blk {int tastat; size_t target; int mode; int flags; int senselen; int buflen; int ident; int cdblen; int* cdb; int (* post ) (int*,int*) ;int hastat; scalar_t__ tagmsg; int senseptr; int bufptr; } ;
struct initio_host {scalar_t__ active; scalar_t__ addr; scalar_t__* act_tags; scalar_t__* max_tags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct initio_host*,struct scsi_ctrl_blk*) ;
 struct scsi_ctrl_blk* FUNC_2 (struct initio_host*) ;
 int * FUNC_3 (struct initio_host*) ;
 int FUNC_4 (struct initio_host*,struct scsi_ctrl_blk*) ;
 int FUNC_5 (int*,int*) ;
 int FUNC_6 (struct initio_host*) ;

__attribute__((used)) static int FUNC_7(struct initio_host * VAR_11)
{
 struct scsi_ctrl_blk *VAR_12;

 for (;;) {
  FUNC_6(VAR_11);


  while ((VAR_12 = FUNC_2(VAR_11)) != ((void*)0)) {
   if (VAR_12->tastat == VAR_1) {
    VAR_11->max_tags[VAR_12->target] =
        VAR_11->act_tags[VAR_12->target] - 1;
    VAR_12->tastat = 0;
    FUNC_1(VAR_11, VAR_12);
    continue;
   }
   if (!(VAR_12->mode & VAR_7)) {
    if (VAR_12->tastat == 2) {



     if (VAR_12->flags & VAR_5) {
      u8 VAR_13;
      VAR_13 = VAR_12->senselen;
      if (VAR_13 == 0)
       VAR_13 = 1;
      VAR_12->buflen = VAR_12->senselen;
      VAR_12->bufptr = VAR_12->senseptr;
      VAR_12->flags &= ~(VAR_6 | VAR_2);


      VAR_12->mode = VAR_7;
      VAR_12->ident &= 0xBF;
      VAR_12->tagmsg = 0;
      VAR_12->tastat = 0;
      VAR_12->cdblen = 6;
      VAR_12->cdb[0] = VAR_8;
      VAR_12->cdb[1] = 0;
      VAR_12->cdb[2] = 0;
      VAR_12->cdb[3] = 0;
      VAR_12->cdb[4] = VAR_13;
      VAR_12->cdb[5] = 0;
      FUNC_4(VAR_11, VAR_12);
      break;
     }
    }
   } else {

    if (VAR_12->tastat == 2) {

     VAR_12->hastat = VAR_0;
    }
    VAR_12->tastat = 2;
   }
   VAR_12->flags |= VAR_3;
   if (VAR_12->flags & VAR_4) {

    (*VAR_12->post) ((u8 *) VAR_11, (u8 *) VAR_12);
   }
  }

  if (FUNC_0(VAR_11->addr + VAR_10) & VAR_9)
   continue;
  if (VAR_11->active)
   return 1;

  if (FUNC_3(VAR_11) == ((void*)0))
   return 1;
 }

}
