
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtnet_info {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct virtnet_info*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct virtnet_info *VAR_2)
{
 FUNC_1();
 if (!FUNC_3(VAR_2, VAR_0,
      VAR_1, ((void*)0)))
  FUNC_0(&VAR_2->dev->dev, "Failed to ack link announce.\n");
 FUNC_2();
}
