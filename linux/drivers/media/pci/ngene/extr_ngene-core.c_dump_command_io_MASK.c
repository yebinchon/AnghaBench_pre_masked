
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ngene {int * ngenetohost; int * hosttongene; TYPE_1__* pci_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct device*,char*,int *,int,int *) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ngene *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pci_dev->dev;
 u8 VAR_4[8], *VAR_5;

 FUNC_1(VAR_4, VAR_0, 8);
 FUNC_0(VAR_3, "host_to_ngene (%04x): %*ph\n", VAR_0, 8, VAR_4);

 FUNC_1(VAR_4, VAR_1, 8);
 FUNC_0(VAR_3, "ngene_to_host (%04x): %*ph\n", VAR_1, 8, VAR_4);

 VAR_5 = VAR_2->hosttongene;
 FUNC_0(VAR_3, "dev->hosttongene (%p): %*ph\n", VAR_5, 8, VAR_5);

 VAR_5 = VAR_2->ngenetohost;
 FUNC_0(VAR_3, "dev->ngenetohost (%p): %*ph\n", VAR_5, 8, VAR_5);
}
