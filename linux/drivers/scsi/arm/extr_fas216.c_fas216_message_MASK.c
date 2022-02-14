
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {unsigned char* message; int phase; int msgs; } ;
struct TYPE_13__ {TYPE_2__ scsi; TYPE_1__* host; } ;
struct TYPE_11__ {int host_no; } ;
typedef TYPE_3__ FAS216_Info ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,unsigned char*,unsigned int) ;
 unsigned char FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,...) ;

__attribute__((used)) static void FUNC_9(FAS216_Info *VAR_6)
{
 unsigned char *VAR_7 = VAR_6->scsi.message;
 unsigned int VAR_8 = 1;
 int VAR_9 = 0;

 FUNC_0(VAR_6);

 VAR_7[0] = FUNC_4(VAR_6, VAR_5);

 if (VAR_7[0] == VAR_2) {
  VAR_9 = FUNC_2(VAR_6);

  if (VAR_9 >= 0) {
   VAR_7[1] = VAR_9;

   for (VAR_8 = 2; VAR_8 < VAR_7[1] + 2; VAR_8++) {
    VAR_9 = FUNC_2(VAR_6);

    if (VAR_9 >= 0)
     VAR_7[VAR_8] = VAR_9;
    else
     break;
   }
  }
 }

 if (VAR_9 == -3)
  goto parity_error;
 FUNC_3(VAR_6, VAR_7, VAR_8);
 FUNC_1(VAR_6, VAR_0);
 return;

parity_error:
 FUNC_1(VAR_6, VAR_1);
 FUNC_7(&VAR_6->scsi.msgs);
 FUNC_6(&VAR_6->scsi.msgs, 1, VAR_3);
 VAR_6->scsi.phase = VAR_4;
 FUNC_1(VAR_6, VAR_0);
 return;
}
