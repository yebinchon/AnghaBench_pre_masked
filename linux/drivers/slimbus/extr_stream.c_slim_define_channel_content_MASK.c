
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slim_val_inf {int member_1; int* member_3; int * member_4; int * member_2; int member_0; } ;
struct slim_stream_runtime {scalar_t__ prot; int bps; struct slim_device* dev; } ;
struct TYPE_2__ {int id; int prrate; int data_fmt; int aux_fmt; int state; } ;
struct slim_port {TYPE_1__ ch; } ;
struct slim_device {int ctrl; int laddr; } ;


 int FUNC_0 (int ,int,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct slim_stream_runtime *VAR_6,
           struct slim_port *VAR_7)
{
 struct slim_device *VAR_8 = VAR_6->dev;
 u8 VAR_9[4];
 struct slim_val_inf VAR_10 = {0, 4, ((void*)0), VAR_9, ((void*)0)};
 u8 VAR_11 = VAR_2;
 FUNC_0(VAR_5, VAR_11, 8, VAR_6->dev->laddr, &VAR_10);

 VAR_9[0] = VAR_7->ch.id;
 VAR_9[1] = VAR_7->ch.prrate;


 if (VAR_6->prot != VAR_3)
  VAR_9[1] |= VAR_0;

 VAR_9[2] = VAR_7->ch.data_fmt | (VAR_7->ch.aux_fmt << 4);
 VAR_9[3] = VAR_6->bps/VAR_4;
 VAR_7->ch.state = VAR_1;

 return FUNC_1(VAR_8->ctrl, &VAR_5);
}
