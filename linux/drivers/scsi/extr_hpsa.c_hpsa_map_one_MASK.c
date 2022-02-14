
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int SGList; void* SGTotal; } ;
struct CommandList {TYPE_2__ Header; TYPE_1__* SG; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_3__ {void* Ext; void* Len; int Addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned char*,size_t,int) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2,
  struct CommandList *VAR_3,
  unsigned char *VAR_4,
  size_t VAR_5,
  enum dma_data_direction VAR_6)
{
 u64 VAR_7;

 if (VAR_5 == 0 || VAR_6 == VAR_0) {
  VAR_3->Header.SGList = 0;
  VAR_3->Header.SGTotal = FUNC_0(0);
  return 0;
 }

 VAR_7 = FUNC_3(&VAR_2->dev, VAR_4, VAR_5, VAR_6);
 if (FUNC_4(&VAR_2->dev, VAR_7)) {

  VAR_3->Header.SGList = 0;
  VAR_3->Header.SGTotal = FUNC_0(0);
  return -1;
 }
 VAR_3->SG[0].Addr = FUNC_2(VAR_7);
 VAR_3->SG[0].Len = FUNC_1(VAR_5);
 VAR_3->SG[0].Ext = FUNC_1(VAR_1);
 VAR_3->Header.SGList = 1;
 VAR_3->Header.SGTotal = FUNC_0(1);
 return 0;
}
