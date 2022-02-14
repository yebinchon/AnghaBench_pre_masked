
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct hnae_queue {int handle; TYPE_1__* dev; } ;
struct TYPE_4__ {int port_index; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 scalar_t__ FUNC_1 (struct hnae_queue*,int ) ;
 int FUNC_2 (struct hnae_queue*,int ,int) ;
 TYPE_2__* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(struct hnae_queue *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9;

 u32 VAR_10;

 while (VAR_8++ < VAR_0) {
  FUNC_5(100, 200);
  VAR_10 = FUNC_1(VAR_6, VAR_5);
  if (VAR_10)
   continue;

  FUNC_2(VAR_6, VAR_3, 0);

  FUNC_2(VAR_6, VAR_4, 1);

  FUNC_4(20);
  VAR_9 = FUNC_1(VAR_6, VAR_2);

  VAR_7 = 0;
  while (!VAR_9 && (VAR_7 < VAR_1)) {
   FUNC_2(VAR_6, VAR_4, 0);

   FUNC_2(VAR_6, VAR_4, 1);

   FUNC_4(20);
   VAR_9 = FUNC_1(VAR_6, VAR_2);

   VAR_7++;
  }

  FUNC_2(VAR_6, VAR_4, 0);

  if (VAR_9)
   break;
 }

 if (VAR_8 >= VAR_0)
  FUNC_0(VAR_6->dev->dev, "port%d reset ring fail\n",
   FUNC_3(VAR_6->handle)->port_index);
}
