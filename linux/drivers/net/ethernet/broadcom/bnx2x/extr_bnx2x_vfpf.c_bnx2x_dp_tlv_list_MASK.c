
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel_tlv {scalar_t__ type; int length; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_3, void *VAR_4)
{
 int VAR_5 = 1;
 struct channel_tlv *VAR_6 = (struct channel_tlv *)VAR_4;

 while (VAR_6->type != VAR_1) {

  FUNC_0(VAR_0, "TLV number %d: type %d, length %d\n", VAR_5,
     VAR_6->type, VAR_6->length);


  VAR_4 += VAR_6->length;


  VAR_6 = (struct channel_tlv *)VAR_4;

  VAR_5++;


  if (VAR_5 > VAR_2) {
   FUNC_1(1, "corrupt tlvs");
   return;
  }
 }


 FUNC_0(VAR_0, "TLV number %d: type %d, length %d\n", VAR_5,
    VAR_6->type, VAR_6->length);
}
