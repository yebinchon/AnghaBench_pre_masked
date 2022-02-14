
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rio_dev {int pef; size_t destid; TYPE_1__* rswitch; struct rio_dev* prev; } ;
struct TYPE_2__ {int* route_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct rio_dev*) ;
 int FUNC_2 (struct rio_dev*,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct rio_dev *VAR_4, struct rio_dev **VAR_5, int *VAR_6)
{
 u32 VAR_7;
 int VAR_8, VAR_9 = -VAR_0;
 struct rio_dev *VAR_10 = ((void*)0);


 while (VAR_4->prev && (VAR_4->prev->pef & VAR_3)) {
  if (!FUNC_2(VAR_4->prev, VAR_1, &VAR_7)) {
   VAR_10 = VAR_4->prev;
   break;
  }
  VAR_4 = VAR_4->prev;
 }

 if (!VAR_10)
  goto err_out;

 VAR_8 = VAR_10->rswitch->route_table[VAR_4->destid];

 if (VAR_8 != VAR_2) {
  FUNC_0("RIO: link failed on [%s]-P%d\n",
    FUNC_1(VAR_10), VAR_8);
  *VAR_5 = VAR_10;
  *VAR_6 = VAR_8;
  VAR_9 = 0;
 } else
  FUNC_0("RIO: failed to trace route to %s\n", FUNC_1(VAR_4));
err_out:
 return VAR_9;
}
