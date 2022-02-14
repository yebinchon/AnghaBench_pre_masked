
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct visorhba_devdata {int nextinsert; int privlock; struct scsipending* pending; } ;
struct scsipending {char cmdtype; int cmdrsp; int * sent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct visorhba_devdata *VAR_2,
     char VAR_3, void *VAR_4)
{
 unsigned long VAR_5;
 struct scsipending *VAR_6;
 int VAR_7;

 FUNC_1(&VAR_2->privlock, VAR_5);
 VAR_7 = VAR_2->nextinsert;
 while (VAR_2->pending[VAR_7].sent) {
  VAR_7 = (VAR_7 + 1) % VAR_1;
  if (VAR_7 == (int)VAR_2->nextinsert) {
   FUNC_2(&VAR_2->privlock, VAR_5);
   return -VAR_0;
  }
 }

 VAR_6 = &VAR_2->pending[VAR_7];
 FUNC_0(&VAR_6->cmdrsp, 0, sizeof(VAR_6->cmdrsp));
 VAR_6->cmdtype = VAR_3;
 if (VAR_4)
  VAR_6->sent = VAR_4;

 else
  VAR_6->sent = &VAR_6->cmdrsp;
 VAR_2->nextinsert = (VAR_7 + 1) % VAR_1;
 FUNC_2(&VAR_2->privlock, VAR_5);

 return VAR_7;
}
