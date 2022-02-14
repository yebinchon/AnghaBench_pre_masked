
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iowarrior {TYPE_1__* interface; struct iowarrior* read_queue; int int_in_urb; struct iowarrior* int_in_buffer; int minor; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct iowarrior*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_4(struct iowarrior *VAR_0)
{
 FUNC_0(&VAR_0->interface->dev, "minor %d\n", VAR_0->minor);
 FUNC_1(VAR_0->int_in_buffer);
 FUNC_2(VAR_0->int_in_urb);
 FUNC_1(VAR_0->read_queue);
 FUNC_3(VAR_0->interface);
 FUNC_1(VAR_0);
}
