
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bcm2835_host {TYPE_1__* data; } ;
struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct bcm2835_host *VAR_5, u32 VAR_6)
{
 if (!VAR_5->data)
  return;
 if (VAR_6 & (VAR_2 | VAR_3))
  VAR_5->data->error = -VAR_0;
 if (VAR_6 & VAR_4)
  VAR_5->data->error = -VAR_1;
}
