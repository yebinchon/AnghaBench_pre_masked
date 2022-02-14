
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device {int driver; } ;
struct TYPE_6__ {int aqm; int apm; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int qid; } ;


 int FUNC_0 (int ,char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int ) ;
 TYPE_2__* FUNC_8 (int ) ;
 TYPE_1__* FUNC_9 (struct device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 if (FUNC_4(VAR_4)) {
  VAR_7 = FUNC_1(FUNC_9(VAR_4)->qid);
  VAR_8 = FUNC_2(FUNC_9(VAR_4)->qid);
  FUNC_5(&VAR_3);
  VAR_9 = FUNC_7(VAR_7, VAR_2.apm)
   && FUNC_7(VAR_8, VAR_2.aqm);
  FUNC_6(&VAR_3);
  VAR_10 = FUNC_8(VAR_4->driver)->flags
   & VAR_0;
  if (!!VAR_9 != !!VAR_10) {
   FUNC_0(VAR_1, "reprobing queue=%02x.%04x\n",
          VAR_7, VAR_8);
   VAR_6 = FUNC_3(VAR_4);
  }
 }

 return 0;
}
