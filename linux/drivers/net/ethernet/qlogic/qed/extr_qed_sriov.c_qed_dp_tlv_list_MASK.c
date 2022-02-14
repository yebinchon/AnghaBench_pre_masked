
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tlv_buffer_size {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct channel_tlv {scalar_t__ type; scalar_t__ length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,scalar_t__,scalar_t__) ;
 int VAR_1 ;

void FUNC_2(struct qed_hwfn *VAR_2, void *VAR_3)
{
 u16 VAR_4 = 1, VAR_5 = 0;
 struct channel_tlv *VAR_6;

 do {
  VAR_6 = (struct channel_tlv *)((u8 *)VAR_3 + VAR_5);


  FUNC_1(VAR_2, VAR_1,
      "TLV number %d: type %d, length %d\n",
      VAR_4, VAR_6->type, VAR_6->length);

  if (VAR_6->type == VAR_0)
   return;


  if (!VAR_6->length) {
   FUNC_0(VAR_2, "TLV of length 0 found\n");
   return;
  }

  VAR_5 += VAR_6->length;

  if (VAR_5 >= sizeof(struct tlv_buffer_size)) {
   FUNC_0(VAR_2, "TLV ==> Buffer overflow\n");
   return;
  }

  VAR_4++;
 } while (1);
}
