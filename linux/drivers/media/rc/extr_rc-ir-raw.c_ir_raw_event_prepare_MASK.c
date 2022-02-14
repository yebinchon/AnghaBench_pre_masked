
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_dev {int idle; TYPE_1__* raw; int change_protocol; } ;
struct TYPE_2__ {int kfifo; int edge_handle; int edge_spinlock; struct rc_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;

int FUNC_4(struct rc_dev *VAR_5)
{
 if (!VAR_5)
  return -VAR_0;

 VAR_5->raw = FUNC_1(sizeof(*VAR_5->raw), VAR_2);
 if (!VAR_5->raw)
  return -VAR_1;

 VAR_5->raw->dev = VAR_5;
 VAR_5->change_protocol = VAR_3;
 VAR_5->idle = 1;
 FUNC_2(&VAR_5->raw->edge_spinlock);
 FUNC_3(&VAR_5->raw->edge_handle, VAR_4, 0);
 FUNC_0(VAR_5->raw->kfifo);

 return 0;
}
