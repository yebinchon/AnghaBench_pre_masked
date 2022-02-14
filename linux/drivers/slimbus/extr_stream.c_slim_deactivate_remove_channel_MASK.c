
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
struct slim_port {TYPE_1__ ch; } ;
struct slim_device {int ctrl; int laddr; } ;
struct TYPE_6__ {int mc; } ;


 int FUNC_0 (TYPE_2__,int ,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_2__*) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static int FUNC_2(struct slim_stream_runtime *VAR_4,
       struct slim_port *VAR_5)
{
 struct slim_device *VAR_6 = VAR_4->dev;
 u8 VAR_7[1];
 struct slim_val_inf VAR_8 = {0, 1, ((void*)0), VAR_7, ((void*)0)};
 u8 VAR_9 = VAR_1;
 FUNC_0(VAR_3, VAR_9, 5, VAR_4->dev->laddr, &VAR_8);
 int VAR_10;

 VAR_7[0] = VAR_5->ch.id;
 VAR_10 = FUNC_1(VAR_6->ctrl, &VAR_3);
 if (VAR_10)
  return VAR_10;

 VAR_3.mc = VAR_2;
 VAR_5->ch.state = VAR_0;

 return FUNC_1(VAR_6->ctrl, &VAR_3);
}
