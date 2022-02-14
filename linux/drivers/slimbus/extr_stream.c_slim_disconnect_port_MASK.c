
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slim_val_inf {int member_1; int * member_4; int * member_3; int * member_2; int member_0; } ;
struct slim_stream_runtime {struct slim_device* dev; } ;
struct TYPE_2__ {int state; } ;
struct slim_port {int state; TYPE_1__ ch; int id; } ;
struct slim_device {int ctrl; int laddr; } ;


 int FUNC_0 (int ,int ,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct slim_stream_runtime *VAR_4,
    struct slim_port *VAR_5)
{
 struct slim_device *VAR_6 = VAR_4->dev;
 u8 VAR_7[1];
 struct slim_val_inf VAR_8 = {0, 1, ((void*)0), VAR_7, ((void*)0)};
 u8 VAR_9 = VAR_1;
 FUNC_0(VAR_3, VAR_9, 5, VAR_4->dev->laddr, &VAR_8);

 VAR_7[0] = VAR_5->id;
 VAR_5->ch.state = VAR_0;
 VAR_5->state = VAR_2;

 return FUNC_1(VAR_6->ctrl, &VAR_3);
}
