
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct lbs_private {int dummy; } ;
struct TYPE_2__ {scalar_t__ result; void* size; void* command; } ;
struct cmd_ds_mesh_access {void* action; TYPE_1__ hdr; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int,struct cmd_ds_mesh_access*) ;

__attribute__((used)) static int FUNC_2(struct lbs_private *VAR_1, uint16_t VAR_2,
      struct cmd_ds_mesh_access *VAR_3)
{
 int VAR_4;

 VAR_3->hdr.command = FUNC_0(VAR_0);
 VAR_3->hdr.size = FUNC_0(sizeof(*VAR_3));
 VAR_3->hdr.result = 0;

 VAR_3->action = FUNC_0(VAR_2);

 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_3);

 return VAR_4;
}
