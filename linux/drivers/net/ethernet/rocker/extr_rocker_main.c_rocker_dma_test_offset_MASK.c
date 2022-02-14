
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_wait {int dummy; } ;
struct rocker {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,unsigned char*,int,int ) ;
 int FUNC_5 (struct pci_dev*,int ,int,int ) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (struct rocker const*,struct rocker_wait*,int ,int ,unsigned char*,unsigned char*,int) ;
 int FUNC_8 (struct rocker const*,int ,int) ;
 int FUNC_9 (struct rocker const*,int ,int ) ;

__attribute__((used)) static int FUNC_10(const struct rocker *VAR_12,
      struct rocker_wait *VAR_13, int VAR_14)
{
 struct pci_dev *VAR_15 = VAR_12->pdev;
 unsigned char *VAR_16;
 unsigned char *VAR_17;
 unsigned char *VAR_18;
 dma_addr_t VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_16 = FUNC_1(VAR_5 * 2 + VAR_14,
   VAR_3 | VAR_2);
 if (!VAR_16)
  return -VAR_1;
 VAR_17 = VAR_16 + VAR_14;
 VAR_18 = VAR_17 + VAR_5;

 VAR_19 = FUNC_4(VAR_15, VAR_17, VAR_5,
        VAR_4);
 if (FUNC_3(VAR_15, VAR_19)) {
  VAR_21 = -VAR_0;
  goto free_alloc;
 }

 FUNC_9(VAR_12, VAR_10, VAR_19);
 FUNC_8(VAR_12, VAR_11, VAR_5);

 FUNC_2(VAR_18, VAR_9, VAR_5);
 VAR_21 = FUNC_7(VAR_12, VAR_13, VAR_7,
      VAR_19, VAR_17, VAR_18,
      VAR_5);
 if (VAR_21)
  goto unmap;

 FUNC_2(VAR_18, 0, VAR_5);
 VAR_21 = FUNC_7(VAR_12, VAR_13, VAR_6,
      VAR_19, VAR_17, VAR_18,
      VAR_5);
 if (VAR_21)
  goto unmap;

 FUNC_6(VAR_17, VAR_5);
 for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
  VAR_18[VAR_20] = ~VAR_17[VAR_20];
 VAR_21 = FUNC_7(VAR_12, VAR_13, VAR_8,
      VAR_19, VAR_17, VAR_18,
      VAR_5);
 if (VAR_21)
  goto unmap;

unmap:
 FUNC_5(VAR_15, VAR_19, VAR_5,
    VAR_4);
free_alloc:
 FUNC_0(VAR_16);

 return VAR_21;
}
