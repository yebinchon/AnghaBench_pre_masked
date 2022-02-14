
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int encrypt; scalar_t__ bswenc; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int ,int ,char*) ;

 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adapter*,int *) ;
 int FUNC_2 (struct adapter*,int *) ;
 int FUNC_3 (struct adapter*,int *) ;

__attribute__((used)) static s32 FUNC_4(struct adapter *VAR_4, struct xmit_frame *VAR_5)
{

 struct pkt_attrib *VAR_6 = &VAR_5->attrib;



 if (VAR_6->bswenc) {

  FUNC_0(VAR_3, VAR_1, ("### xmitframe_swencrypt\n"));
  switch (VAR_6->encrypt) {
  case 128:
  case 129:
   FUNC_3(VAR_4, (u8 *)VAR_5);
   break;
  case 130:
   FUNC_2(VAR_4, (u8 *)VAR_5);
   break;
  case 131:
   FUNC_1(VAR_4, (u8 *)VAR_5);
   break;
  default:
    break;
  }

 } else
  FUNC_0(VAR_3, VAR_2, ("### xmitframe_hwencrypt\n"));

 return VAR_0;
}
