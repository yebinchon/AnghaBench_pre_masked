
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct slim_val_inf {int member_1; int * member_4; int * member_3; int * member_2; int member_0; } ;
struct slim_stream_runtime {struct slim_device* dev; } ;
struct TYPE_7__ {int state; int id; } ;
struct slim_port {TYPE_2__ ch; } ;
struct slim_device {int ctrl; int laddr; } ;
struct TYPE_8__ {TYPE_1__* msg; } ;
struct TYPE_6__ {int num_bytes; int * wbuf; } ;


 int FUNC_0 (TYPE_3__,int ,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct slim_stream_runtime *VAR_3,
     struct slim_port *VAR_4)
{
 struct slim_device *VAR_5 = VAR_3->dev;
 u8 VAR_6[1];
 struct slim_val_inf VAR_7 = {0, 1, ((void*)0), VAR_6, ((void*)0)};
 u8 VAR_8 = VAR_1;
 FUNC_0(VAR_2, VAR_8, 5, VAR_3->dev->laddr, &VAR_7);

 VAR_2.msg->num_bytes = 1;
 VAR_2.msg->wbuf = VAR_6;
 VAR_6[0] = VAR_4->ch.id;
 VAR_4->ch.state = VAR_0;

 return FUNC_1(VAR_5->ctrl, &VAR_2);
}
