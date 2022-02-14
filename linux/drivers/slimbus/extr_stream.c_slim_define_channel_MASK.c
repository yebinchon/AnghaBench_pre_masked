
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct slim_val_inf {int member_1; int* member_3; int * member_4; int * member_2; int member_0; } ;
struct slim_stream_runtime {int prot; int bps; int ratem; struct slim_device* dev; } ;
struct TYPE_2__ {int seg_dist; int id; int state; } ;
struct slim_port {TYPE_1__ ch; } ;
struct slim_device {int ctrl; int laddr; } ;


 int FUNC_0 (int ,int,int,int ,struct slim_val_inf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct slim_stream_runtime *VAR_5,
           struct slim_port *VAR_6)
{
 struct slim_device *VAR_7 = VAR_5->dev;
 u8 VAR_8[4];
 struct slim_val_inf VAR_9 = {0, 4, ((void*)0), VAR_8, ((void*)0)};
 u8 VAR_10 = VAR_1;
 FUNC_0(VAR_4, VAR_10, 8, VAR_5->dev->laddr, &VAR_9);

 VAR_6->ch.seg_dist = FUNC_2(VAR_5->ratem);

 VAR_8[0] = VAR_6->ch.id;
 VAR_8[1] = VAR_6->ch.seg_dist & 0xFF;
 VAR_8[2] = (VAR_5->prot << 4) | ((VAR_6->ch.seg_dist & 0xF00) >> 8);
 if (VAR_5->prot == VAR_2)
  VAR_8[3] = VAR_5->bps/VAR_3;
 else
  VAR_8[3] = VAR_5->bps/VAR_3 + 1;

 VAR_6->ch.state = VAR_0;

 return FUNC_1(VAR_7->ctrl, &VAR_4);
}
