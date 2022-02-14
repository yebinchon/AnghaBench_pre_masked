
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {int encrypt; scalar_t__ bswenc; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;
struct _adapter {int dummy; } ;
typedef int sint ;



 int VAR_0 ;



 int FUNC_0 (struct _adapter*,int *) ;
 int FUNC_1 (struct _adapter*,int *) ;
 int FUNC_2 (struct _adapter*,int *) ;

__attribute__((used)) static sint FUNC_3(struct _adapter *VAR_1,
    struct xmit_frame *VAR_2)
{
 struct pkt_attrib *VAR_3 = &VAR_2->attrib;

 if (VAR_3->bswenc) {
  switch (VAR_3->encrypt) {
  case 128:
  case 129:
   FUNC_2(VAR_1, (u8 *)VAR_2);
   break;
  case 130:
   FUNC_1(VAR_1, (u8 *)VAR_2);
   break;
  case 131:
   FUNC_0(VAR_1, (u8 *)VAR_2);
   break;
  default:
    break;
  }
 }
 return VAR_0;
}
