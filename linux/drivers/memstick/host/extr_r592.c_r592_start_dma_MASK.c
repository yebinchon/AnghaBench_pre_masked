
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r592_device {int irq_lock; TYPE_1__* req; } ;
struct TYPE_2__ {int sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct r592_device*,int ,int ) ;
 int FUNC_1 (struct r592_device*,int ) ;
 int FUNC_2 (struct r592_device*,int ,int ) ;
 int FUNC_3 (struct r592_device*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct r592_device *VAR_7, bool VAR_8)
{
 unsigned long VAR_9;
 u32 VAR_10;
 FUNC_5(&VAR_7->irq_lock, VAR_9);


 FUNC_0(VAR_7, VAR_6, VAR_0);
 FUNC_2(VAR_7, VAR_6, VAR_1);


 FUNC_3(VAR_7, VAR_2, FUNC_4(&VAR_7->req->sg));


 VAR_10 = FUNC_1(VAR_7, VAR_3);
 VAR_10 |= VAR_5;

 if (!VAR_8)
  VAR_10 |= VAR_4;
 else
  VAR_10 &= ~VAR_4;
 FUNC_3(VAR_7, VAR_3, VAR_10);

 FUNC_6(&VAR_7->irq_lock, VAR_9);
}
