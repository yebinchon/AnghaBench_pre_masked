
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(struct sk_buff *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    if (VAR_1 & VAR_0) {
 FUNC_0("R: %pM <- %pM len/SAP:%02x%02x [%d]\n",
        VAR_2->data, &VAR_2->data[6],
        (u_char)VAR_2->data[12],
        (u_char)VAR_2->data[13],
        VAR_3);
 for (VAR_5=0; VAR_3>0;VAR_5+=16, VAR_3-=16) {
   FUNC_0("    %03x: ",VAR_5);
   for (VAR_4=0; VAR_4<16 && VAR_4<VAR_3; VAR_4++) {
     FUNC_0("%02x ",(u_char)VAR_2->data[VAR_4+VAR_5]);
   }
   FUNC_0("\n");
 }
    }
}
