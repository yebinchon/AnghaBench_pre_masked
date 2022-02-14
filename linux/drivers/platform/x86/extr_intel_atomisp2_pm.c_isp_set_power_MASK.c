
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int ,int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 unsigned long VAR_9 ;
 unsigned long FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_10, bool VAR_11)
{
 unsigned long VAR_12;
 u32 VAR_13 = VAR_11 ? VAR_7 :
  VAR_6;


 FUNC_1(VAR_0, VAR_8, VAR_2,
   VAR_13, VAR_3);







 VAR_12 = VAR_9 + FUNC_3(50);
 while (1) {
  u32 VAR_14;


  FUNC_2(VAR_0, VAR_8, VAR_2, &VAR_14);
  VAR_14 = (VAR_14 & VAR_4) >> VAR_5;
  if (VAR_14 == VAR_13)
   break;

  if (FUNC_4(VAR_9, VAR_12)) {
   FUNC_0(&VAR_10->dev, "IUNIT power-%s timeout.\n",
    VAR_11 ? "on" : "off");
   return -VAR_1;
  }
  FUNC_5(1000, 2000);
 }

 return 0;
}
