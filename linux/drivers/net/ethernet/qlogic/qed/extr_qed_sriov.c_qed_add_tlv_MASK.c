
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u8 ;
typedef int u16 ;
struct qed_hwfn {int dummy; } ;
struct channel_tlv {int type; int length; } ;



void *FUNC_0(struct qed_hwfn *VAR_0, u8 **VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct channel_tlv *VAR_4 = (struct channel_tlv *)*VAR_1;

 VAR_4->type = VAR_2;
 VAR_4->length = VAR_3;


 *VAR_1 += VAR_3;


 return *VAR_1 - VAR_3;
}
