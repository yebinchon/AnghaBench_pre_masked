
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lbs_private {int fwcapinfo; } ;
struct cmd_ds_mesh_config {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lbs_private*,struct cmd_ds_mesh_config*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct lbs_private *VAR_2,
    struct cmd_ds_mesh_config *VAR_3,
    uint16_t VAR_4, uint16_t VAR_5)
{
 int VAR_6;

 if (!(VAR_2->fwcapinfo & VAR_1))
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);
 return VAR_6;
}
