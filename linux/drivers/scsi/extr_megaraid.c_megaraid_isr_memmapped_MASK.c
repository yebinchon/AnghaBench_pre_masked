
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int irqreturn_t ;
struct TYPE_13__ {int lock; int quiescent; TYPE_2__* mbox; int pend_cmds; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_11__ {int numstatus; int status; scalar_t__ completed; } ;
struct TYPE_12__ {TYPE_1__ m_in; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_3__*,int*,int,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int*,void*,int) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t
FUNC_14(int VAR_1, void *VAR_2)
{
 adapter_t *VAR_3 = VAR_2;
 unsigned long VAR_4;
 u8 VAR_5;
 u32 VAR_6 = 0;
 u8 VAR_7;
 u8 VAR_8[VAR_0];
 int VAR_9 = 0;





 FUNC_12(&VAR_3->lock, VAR_4);

 do {

  VAR_6 = FUNC_2(VAR_3);
  if(VAR_6 != 0x10001234) {



   goto out_unlock;
  }
  FUNC_4(VAR_3, 0x10001234);

  while((VAR_7 = (volatile u8)VAR_3->mbox->m_in.numstatus)
    == 0xFF) {
   FUNC_7();
  }
  VAR_3->mbox->m_in.numstatus = 0xFF;

  VAR_5 = VAR_3->mbox->m_in.status;




  FUNC_6(VAR_7, &VAR_3->pend_cmds);

  FUNC_11(VAR_8, (void *)VAR_3->mbox->m_in.completed,
    VAR_7);


  FUNC_3(VAR_3, 0x2);

  VAR_9 = 1;

  while( FUNC_1(VAR_3) & 0x02 )
   FUNC_7();

  FUNC_8(VAR_3, VAR_8, VAR_7, VAR_5);

  FUNC_9(VAR_3);


  if(FUNC_5(&VAR_3->quiescent) == 0) {
   FUNC_10(VAR_3);
  }

 } while(1);

 out_unlock:

 FUNC_13(&VAR_3->lock, VAR_4);

 return FUNC_0(VAR_9);
}
