
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorhba_devdata {int serverdown; int serverchangingstate; int privlock; int idr; struct scsipending* pending; int thread; } ;
struct uiscmdrsp {int result; int (* scsi_done ) (struct uiscmdrsp*) ;} ;
struct scsipending {int cmdtype; struct uiscmdrsp* sent; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct uiscmdrsp*) ;} ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct uiscmdrsp*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct uiscmdrsp*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct visorhba_devdata *VAR_3)
{
 int VAR_4;
 struct scsipending *VAR_5 = ((void*)0);
 struct scsi_cmnd *VAR_6 = ((void*)0);
 struct uiscmdrsp *VAR_7;
 unsigned long VAR_8;




 FUNC_4(VAR_3->thread);


 FUNC_1(&VAR_3->privlock, VAR_8);
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_5 = &VAR_3->pending[VAR_4];
  switch (VAR_5->cmdtype) {
  case 128:
   VAR_6 = VAR_5->sent;
   VAR_6->result = VAR_0 << 16;
   if (VAR_6->scsi_done)
    VAR_6->scsi_done(VAR_6);
   break;
  case 129:
   VAR_7 = VAR_5->sent;
   FUNC_0(&VAR_3->idr, VAR_7,
        VAR_2);
   break;
  default:
   break;
  }
  VAR_5->cmdtype = 0;
  VAR_5->sent = ((void*)0);
 }
 FUNC_2(&VAR_3->privlock, VAR_8);

 VAR_3->serverdown = 1;
 VAR_3->serverchangingstate = 0;
}
