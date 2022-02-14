
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_handle {TYPE_1__* dev; } ;
struct TYPE_2__ {int evbit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct input_handle*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct input_handle *VAR_6, void *VAR_7)
{
 unsigned int VAR_8 = *(unsigned int *)VAR_7;

 if (FUNC_1(VAR_0, VAR_6->dev->evbit)) {
  FUNC_0(VAR_6, VAR_0, VAR_4, !!(VAR_8 & 0x01));
  FUNC_0(VAR_6, VAR_0, VAR_3, !!(VAR_8 & 0x02));
  FUNC_0(VAR_6, VAR_0, VAR_2, !!(VAR_8 & 0x04));
  FUNC_0(VAR_6, VAR_1, VAR_5, 0);
 }

 return 0;
}
