
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {void* len; void* type; } ;
struct qlink_tlv_ie_set {int ie_data; scalar_t__ flags; int type; TYPE_1__ hdr; } ;


 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ,int const*,size_t) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_1, u8 VAR_2,
        const u8 *VAR_3, size_t VAR_4)
{
 struct qlink_tlv_ie_set *VAR_5;

 VAR_5 = (struct qlink_tlv_ie_set *)FUNC_2(VAR_1, sizeof(*VAR_5) + VAR_4);
 VAR_5->hdr.type = FUNC_0(VAR_0);
 VAR_5->hdr.len = FUNC_0(VAR_4 + sizeof(*VAR_5) - sizeof(VAR_5->hdr));
 VAR_5->type = VAR_2;
 VAR_5->flags = 0;

 if (VAR_4 && VAR_3)
  FUNC_1(VAR_5->ie_data, VAR_3, VAR_4);
}
