
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee_types_header {int dummy; } ;
struct TYPE_2__ {int len; int element_id; } ;
struct ieee_types_generic {int data; TYPE_1__ ieee_hdr; } ;
typedef int chan_supp ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int) ;
 struct ieee_types_generic* FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1)
{
 struct ieee_types_generic *VAR_2;
 u8 VAR_3[] = {1, 11};

 VAR_2 = FUNC_1(VAR_1,
       (sizeof(struct ieee_types_header) + sizeof(VAR_3)));
 VAR_2->ieee_hdr.element_id = VAR_0;
 VAR_2->ieee_hdr.len = sizeof(VAR_3);
 FUNC_0(VAR_2->data, VAR_3, sizeof(VAR_3));
}
