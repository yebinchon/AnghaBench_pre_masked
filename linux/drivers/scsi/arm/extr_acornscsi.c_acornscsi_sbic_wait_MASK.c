
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {int host_no; } ;
typedef TYPE_2__ AS_Host ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(AS_Host *VAR_1, int VAR_2, int VAR_3, int VAR_4, char *VAR_5)
{
 int VAR_6;

 do {
  VAR_6 = FUNC_1(VAR_1, VAR_0);

  if ((VAR_6 & VAR_2) == VAR_3)
   return 0;

  FUNC_2(1);
 } while (--VAR_4);

 FUNC_0("scsi%d: timeout while %s\n", VAR_1->host->host_no, VAR_5);

 return -1;
}
