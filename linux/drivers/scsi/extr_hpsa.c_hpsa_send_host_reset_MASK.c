
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ctlr_info {int dummy; } ;
struct TYPE_2__ {int * CDB; } ;
struct CommandList {int * waiting; TYPE_1__ Request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (struct CommandList*,int ,struct ctlr_info*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_3, u8 VAR_4)
{
 struct CommandList *VAR_5;

 VAR_5 = FUNC_0(VAR_3);


 (void) FUNC_2(VAR_5, VAR_0, VAR_3, ((void*)0), 0, 0,
  VAR_1, VAR_2);
 VAR_5->Request.CDB[1] = VAR_4;
 VAR_5->waiting = ((void*)0);
 FUNC_1(VAR_3, VAR_5);




 return;
}
