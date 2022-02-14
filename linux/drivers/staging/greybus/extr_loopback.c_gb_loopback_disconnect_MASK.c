
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_loopback {int connection; int id; int dev; int file; int kfifo_lat; int task; } ;
struct gb_bundle {int dummy; } ;
struct TYPE_2__ {int lock; int count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_6 (struct gb_loopback*) ;
 int FUNC_7 (struct gb_bundle*) ;
 int FUNC_8 (struct gb_bundle*) ;
 struct gb_loopback* FUNC_9 (struct gb_bundle*) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct gb_loopback*) ;
 int FUNC_13 (int ) ;
 int VAR_1 ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_16(struct gb_bundle *VAR_2)
{
 struct gb_loopback *VAR_3 = FUNC_9(VAR_2);
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_8(VAR_2);
 if (VAR_5)
  FUNC_7(VAR_2);

 FUNC_4(VAR_3->connection);

 if (!FUNC_0(VAR_3->task))
  FUNC_13(VAR_3->task);

 FUNC_11(&VAR_3->kfifo_lat);
 FUNC_5(VAR_3->connection);
 FUNC_1(VAR_3->file);






 FUNC_6(VAR_3);

 FUNC_14(&VAR_0.lock, VAR_4);
 VAR_0.count--;
 FUNC_15(&VAR_0.lock, VAR_4);

 FUNC_2(VAR_3->dev);
 FUNC_10(&VAR_1, VAR_3->id);

 FUNC_3(VAR_3->connection);
 FUNC_12(VAR_3);
}
