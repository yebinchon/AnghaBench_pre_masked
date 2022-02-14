
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct message {int length; unsigned int fifo; int * msg; } ;
struct TYPE_8__ {int phase; int msgs; } ;
struct TYPE_9__ {TYPE_1__ scsi; } ;
typedef TYPE_2__ FAS216_Info ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 unsigned int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 struct message* FUNC_4 (int *,int ) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(FAS216_Info *VAR_7, int VAR_8)
{
 unsigned int VAR_9 = FUNC_5(&VAR_7->scsi.msgs);

 FUNC_0(VAR_7);

 FUNC_1(VAR_7, VAR_1);

 if (VAR_9) {
  struct message *VAR_10;
  int VAR_11 = 0;

  while ((VAR_10 = FUNC_4(&VAR_7->scsi.msgs, VAR_11++)) != ((void*)0)) {
   int VAR_12;

   for (VAR_12 = VAR_8; VAR_12 < VAR_10->length; VAR_12++)
    FUNC_3(VAR_7, VAR_6, VAR_10->msg[VAR_12]);

   VAR_10->fifo = VAR_9 - (FUNC_2(VAR_7, VAR_5) & VAR_0);
   VAR_8 = 0;
  }
 } else
  FUNC_3(VAR_7, VAR_6, VAR_3);

 FUNC_1(VAR_7, VAR_2);

 VAR_7->scsi.phase = VAR_4;
}
