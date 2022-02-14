
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_usbreq {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct brcmf_usbdev_info {int rx_freeq; TYPE_1__ bus_pub; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 struct brcmf_usbreq* FUNC_1 (struct brcmf_usbdev_info*,int *,int *) ;
 int FUNC_2 (struct brcmf_usbdev_info*,struct brcmf_usbreq*) ;

__attribute__((used)) static void FUNC_3(struct brcmf_usbdev_info *VAR_1)
{
 struct brcmf_usbreq *VAR_2;

 if (VAR_1->bus_pub.state != VAR_0) {
  FUNC_0("bus is not up=%d\n", VAR_1->bus_pub.state);
  return;
 }
 while ((VAR_2 = FUNC_1(VAR_1, &VAR_1->rx_freeq, ((void*)0))) != ((void*)0))
  FUNC_2(VAR_1, VAR_2);
}
