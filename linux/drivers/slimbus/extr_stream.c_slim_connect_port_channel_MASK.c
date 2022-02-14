
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct slim_val_inf {int member_1; int * member_4; int * member_3; int * member_2; int member_0; } ;
struct slim_stream_runtime {struct slim_device* dev; } ;
struct TYPE_5__ {int state; int id; } ;
struct slim_port {scalar_t__ direction; int state; TYPE_1__ ch; int id; } ;
struct slim_device {int ctrl; int laddr; } ;
struct TYPE_6__ {int mc; } ;


 int FUNC_0 (TYPE_2__,int ,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static int FUNC_2(struct slim_stream_runtime *VAR_6,
         struct slim_port *VAR_7)
{
 struct slim_device *VAR_8 = VAR_6->dev;
 u8 VAR_9[2];
 struct slim_val_inf VAR_10 = {0, 2, ((void*)0), VAR_9, ((void*)0)};
 u8 VAR_11 = VAR_2;
 FUNC_0(VAR_5, VAR_11, 6, VAR_6->dev->laddr, &VAR_10);

 if (VAR_7->direction == VAR_3)
  VAR_5.mc = VAR_1;

 VAR_9[0] = VAR_7->id;
 VAR_9[1] = VAR_7->ch.id;
 VAR_7->ch.state = VAR_0;
 VAR_7->state = VAR_4;

 return FUNC_1(VAR_8->ctrl, &VAR_5);
}
