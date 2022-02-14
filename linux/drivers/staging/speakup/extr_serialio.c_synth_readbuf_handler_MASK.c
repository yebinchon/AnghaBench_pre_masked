
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int irqreturn_t ;
struct TYPE_4__ {int spinlock; scalar_t__ port_tts; } ;
struct TYPE_3__ {int (* read_buff_add ) (int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_2__ VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 unsigned long VAR_8;
 int VAR_9;

 FUNC_1(&VAR_4.spinlock, VAR_8);
 while (FUNC_0(VAR_4.port_tts + VAR_1) & VAR_2) {
  VAR_9 = FUNC_0(VAR_4.port_tts + VAR_3);
  VAR_5->read_buff_add((u_char)VAR_9);
 }
 FUNC_2(&VAR_4.spinlock, VAR_8);
 return VAR_0;
}
