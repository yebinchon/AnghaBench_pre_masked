
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int cbuflen; int dbuflen; int mailbox; scalar_t__ QWrite; void* dbuf; void* cbuf; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct net_device*) ;
 int* VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, void *VAR_4, int VAR_5,
 void *VAR_6, int VAR_7)
{

 int VAR_8 = FUNC_1();
 int VAR_9;

 if(VAR_8) {
  VAR_2[VAR_8].cbuf = VAR_4;
  VAR_2[VAR_8].cbuflen = VAR_5;
  VAR_2[VAR_8].dbuf = VAR_6;
  VAR_2[VAR_8].dbuflen = VAR_7;
  VAR_2[VAR_8].QWrite = 0;
  VAR_2[VAR_8].mailbox = VAR_8;
  FUNC_0(&VAR_2[VAR_8]);
  FUNC_2(VAR_3);
  VAR_9 = VAR_0[VAR_8];
  VAR_1[VAR_8]=0;
  return VAR_9;
 }
 FUNC_3("ltpc: could not allocate mbox\n");
 return -1;
}
