
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cx88_core {int dummy; } ;
struct TYPE_3__ {int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct cx88_core*,TYPE_1__*,int,int ) ;
 TYPE_1__* VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct cx88_core *VAR_8)
{

 int VAR_9 = VAR_7[VAR_4].fifo_size / 4;

 int VAR_10 = VAR_7[VAR_6].fifo_size / VAR_0;


 if (FUNC_1(VAR_3) & 0x10)
  return 0;


 FUNC_0(VAR_8, &VAR_7[VAR_4], VAR_9, 0);
 FUNC_0(VAR_8, &VAR_7[VAR_5], VAR_9, 0);
 FUNC_0(VAR_8, &VAR_7[VAR_6],
    VAR_10, 0);

 FUNC_2(VAR_1, VAR_9);
 FUNC_2(VAR_2, VAR_10);


 FUNC_2(VAR_3, 0x0007);

 return 0;
}
