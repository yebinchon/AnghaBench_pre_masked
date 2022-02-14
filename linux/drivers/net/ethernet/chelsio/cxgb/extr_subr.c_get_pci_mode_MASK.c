
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct chelsio_pci_params {unsigned short speed; int width; int is_pcix; } ;
struct TYPE_3__ {int pdev; } ;
typedef TYPE_1__ adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(adapter_t *VAR_3, struct chelsio_pci_params *VAR_4)
{
 static const unsigned short VAR_5[] = { 33, 66, 100, 133 };
 u32 VAR_6;

 FUNC_1(VAR_3->pdev, VAR_0, &VAR_6);
 VAR_4->speed = VAR_5[FUNC_0(VAR_6)];
 VAR_4->width = (VAR_6 & VAR_1) ? 64 : 32;
 VAR_4->is_pcix = (VAR_6 & VAR_2) != 0;
}
