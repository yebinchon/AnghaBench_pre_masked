
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_dev {scalar_t__ hdr_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;

__attribute__((used)) static bool FUNC_2(struct pci_dev *VAR_6, u8 *VAR_7, u8 *VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11;

 if (VAR_6->hdr_type != VAR_5)
  return 0;


 VAR_9 = FUNC_0(VAR_6, VAR_0);
 if (!VAR_9)
  return 0;

 VAR_10 = VAR_9 + VAR_1;
 FUNC_1(VAR_6, VAR_10, &VAR_11);
 *VAR_7 = VAR_11 & VAR_2;
 *VAR_8 = (VAR_11 & VAR_3) >> VAR_4;
 return 1;
}
