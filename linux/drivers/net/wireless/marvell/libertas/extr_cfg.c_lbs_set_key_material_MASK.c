
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct lbs_private {int dummy; } ;
struct TYPE_4__ {int key; void* keylen; void* keyinfo; void* keytypeid; void* length; void* type; } ;
struct TYPE_3__ {void* size; } ;
struct cmd_key_material {TYPE_2__ param; void* action; TYPE_1__ hdr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_key_material*) ;
 int FUNC_2 (int ,int const*,int) ;
 int FUNC_3 (struct cmd_key_material*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_3,
    int VAR_4, int VAR_5,
    const u8 *VAR_6, u16 VAR_7)
{
 struct cmd_key_material VAR_8;
 int VAR_9;
 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.hdr.size = FUNC_0(sizeof(VAR_8));
 VAR_8.action = FUNC_0(VAR_1);
 VAR_8.param.type = FUNC_0(VAR_2);
 VAR_8.param.length = FUNC_0(sizeof(VAR_8.param) - 4);
 VAR_8.param.keytypeid = FUNC_0(VAR_4);
 VAR_8.param.keyinfo = FUNC_0(VAR_5);
 VAR_8.param.keylen = FUNC_0(VAR_7);
 if (VAR_6 && VAR_7)
  FUNC_2(VAR_8.param.key, VAR_6, VAR_7);

 VAR_9 = FUNC_1(VAR_3, VAR_0, &VAR_8);

 return VAR_9;
}
