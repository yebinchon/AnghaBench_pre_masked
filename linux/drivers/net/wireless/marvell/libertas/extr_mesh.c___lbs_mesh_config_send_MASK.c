
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u16 ;
struct lbs_private {scalar_t__ mesh_tlv; } ;
struct TYPE_2__ {scalar_t__ result; void* size; void* command; } ;
struct cmd_ds_mesh_config {void* action; void* type; TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int,struct cmd_ds_mesh_config*) ;

__attribute__((used)) static int FUNC_2(struct lbs_private *VAR_5,
      struct cmd_ds_mesh_config *VAR_6,
      uint16_t VAR_7, uint16_t VAR_8)
{
 int VAR_9;
 u16 VAR_10 = VAR_1;





 if (VAR_5->mesh_tlv == VAR_4)
  VAR_10 = VAR_0 |
     (VAR_3 << VAR_2);

 VAR_6->hdr.command = FUNC_0(VAR_10);
 VAR_6->hdr.size = FUNC_0(sizeof(struct cmd_ds_mesh_config));
 VAR_6->hdr.result = 0;

 VAR_6->type = FUNC_0(VAR_8);
 VAR_6->action = FUNC_0(VAR_7);

 VAR_9 = FUNC_1(VAR_5, VAR_10, VAR_6);

 return VAR_9;
}
