
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int subopcode; int opcode; int cmd; } ;
typedef TYPE_2__ megacmd_t ;
struct TYPE_10__ {int read_ldidmap; TYPE_1__* dev; } ;
typedef TYPE_3__ adapter_t ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_3(adapter_t *VAR_2, int VAR_3)
{
 megacmd_t VAR_4;
 int VAR_5;

 FUNC_2( &VAR_4, 0, sizeof(megacmd_t));

 VAR_4.cmd = VAR_0;
 VAR_4.opcode = VAR_1;
 VAR_4.subopcode = VAR_3;

 VAR_5 = FUNC_1(VAR_2, &VAR_4, ((void*)0));


 if(VAR_5) {
  FUNC_0(&VAR_2->dev->dev, "Delete LD-%d failed", VAR_3);
  return VAR_5;
 }





 VAR_2->read_ldidmap = 1;

 return VAR_5;
}
