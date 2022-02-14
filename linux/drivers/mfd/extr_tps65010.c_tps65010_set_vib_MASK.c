
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,char*) ;
 TYPE_1__* VAR_3 ;

int FUNC_5(unsigned VAR_4)
{
 int VAR_5;
 unsigned VAR_6;

 if (!VAR_3)
  return -VAR_1;

 FUNC_2(&VAR_3->lock);

 VAR_6 = FUNC_0(VAR_3->client, VAR_2);
 VAR_6 &= ~(1 << 1);
 if (VAR_4)
  VAR_6 |= (1 << 1);
 VAR_5 = FUNC_1(VAR_3->client,
  VAR_2, VAR_6);

 FUNC_4("%s: vibrator %s\n", VAR_0, VAR_4 ? "on" : "off");

 FUNC_3(&VAR_3->lock);
 return VAR_5;
}
