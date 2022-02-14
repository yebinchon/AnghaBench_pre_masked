
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t lid_t ;
struct TYPE_8__ {size_t freelock; scalar_t__ tlocksInUse; int freelockwait; } ;
struct TYPE_7__ {size_t next; } ;
struct TYPE_6__ {int txLockAlloc_freelock; int txLockAlloc; } ;
struct TYPE_5__ {int maxlid; } ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static lid_t FUNC_5(void)
{
 lid_t VAR_7;

 FUNC_1(VAR_3.txLockAlloc);
 if (!VAR_0.freelock) {
  FUNC_1(VAR_3.txLockAlloc_freelock);
 }

 while (!(VAR_7 = VAR_0.freelock))
  FUNC_2(&VAR_0.freelockwait);
 VAR_0.freelock = VAR_1[VAR_7].next;
 FUNC_0(VAR_6.maxlid, VAR_7);
 if ((++VAR_0.tlocksInUse > VAR_2) && (VAR_5 == 0)) {
  FUNC_3("txLockAlloc tlocks low");
  VAR_5 = 1;
  FUNC_4(VAR_4);
 }

 return VAR_7;
}
