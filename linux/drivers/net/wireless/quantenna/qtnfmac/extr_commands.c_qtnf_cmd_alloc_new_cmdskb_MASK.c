
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct TYPE_2__ {void* type; void* len; } ;
struct qlink_cmd {void* vifid; void* macid; void* cmd_id; TYPE_1__ mhdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (char*,void*,void*,int ) ;
 int FUNC_3 (struct sk_buff*,size_t) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(u8 VAR_3, u8 VAR_4, u16 VAR_5,
       size_t VAR_6)
{
 struct qlink_cmd *VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_0(sizeof(*VAR_7) +
      VAR_2, VAR_0);
 if (FUNC_4(!VAR_8)) {
  FUNC_2("VIF%u.%u CMD %u: alloc failed\n", VAR_3, VAR_4, VAR_5);
  return ((void*)0);
 }

 FUNC_3(VAR_8, VAR_6);

 VAR_7 = (struct qlink_cmd *)VAR_8->data;
 VAR_7->mhdr.len = FUNC_1(VAR_8->len);
 VAR_7->mhdr.type = FUNC_1(VAR_1);
 VAR_7->cmd_id = FUNC_1(VAR_5);
 VAR_7->macid = VAR_3;
 VAR_7->vifid = VAR_4;

 return VAR_8;
}
