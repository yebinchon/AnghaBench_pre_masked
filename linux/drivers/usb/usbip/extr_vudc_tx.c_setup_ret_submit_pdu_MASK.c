
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header {int base; } ;
struct urbp {int urb; int seqnum; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct usbip_header*,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct usbip_header *VAR_1, struct urbp *VAR_2)
{
 FUNC_0(&VAR_1->base, VAR_0, VAR_2->seqnum);
 FUNC_1(VAR_1, VAR_2->urb, VAR_0, 1);
}
