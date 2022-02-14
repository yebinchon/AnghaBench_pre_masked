
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct channel_tlv {int type; int length; } ;
struct bnx2x {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct bnx2x *VAR_0, void *VAR_1,
     u16 VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct channel_tlv *VAR_5 =
  (struct channel_tlv *)(VAR_1 + VAR_2);

 VAR_5->type = VAR_3;
 VAR_5->length = VAR_4;
}
