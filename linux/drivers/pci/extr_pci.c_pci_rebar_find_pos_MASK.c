
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_7, int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;
 u32 VAR_12;

 VAR_9 = FUNC_0(VAR_7, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_1(VAR_7, VAR_9 + VAR_3, &VAR_12);
 VAR_10 = (VAR_12 & VAR_5) >>
      VAR_6;

 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_9 += 8) {
  int VAR_13;

  FUNC_1(VAR_7, VAR_9 + VAR_3, &VAR_12);
  VAR_13 = VAR_12 & VAR_4;
  if (VAR_13 == VAR_8)
   return VAR_9;
 }

 return -VAR_0;
}
