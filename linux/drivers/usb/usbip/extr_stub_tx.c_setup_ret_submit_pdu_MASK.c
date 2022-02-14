
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header {int base; } ;
struct urb {scalar_t__ context; } ;
struct stub_priv {int seqnum; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct usbip_header*,struct urb*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct usbip_header *VAR_1, struct urb *VAR_2)
{
 struct stub_priv *VAR_3 = (struct stub_priv *) VAR_2->context;

 FUNC_0(&VAR_1->base, VAR_0, VAR_3->seqnum);
 FUNC_1(VAR_1, VAR_2, VAR_0, 1);
}
