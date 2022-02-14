
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 int FUNC_0 (struct pci_dev*,size_t,int,unsigned char*) ;
 scalar_t__ FUNC_1 (unsigned char*) ;
 unsigned char FUNC_2 (unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 unsigned char FUNC_4 (unsigned char*) ;
 int FUNC_5 (struct pci_dev*,char*,...) ;

__attribute__((used)) static size_t FUNC_6(struct pci_dev *VAR_7, size_t VAR_8)
{
 size_t VAR_9 = 0;
 unsigned char VAR_10[1+2];

 while (VAR_9 < VAR_8 &&
        FUNC_0(VAR_7, VAR_9, 1, VAR_10) == 1) {
  unsigned char VAR_11;

  if (VAR_10[0] & VAR_0) {

   VAR_11 = FUNC_2(VAR_10);

   if ((VAR_11 == VAR_2) ||
       (VAR_11 == VAR_3) ||
       (VAR_11 == VAR_4)) {
    if (FUNC_0(VAR_7, VAR_9+1, 2,
       &VAR_10[1]) != 2) {
     FUNC_5(VAR_7, "invalid large VPD tag %02x size at offset %zu",
       VAR_11, VAR_9 + 1);
     return 0;
    }
    VAR_9 += VAR_1 +
     FUNC_1(VAR_10);
   }
  } else {

   VAR_9 += VAR_5 +
    FUNC_3(VAR_10);
   VAR_11 = FUNC_4(VAR_10);
  }

  if (VAR_11 == VAR_6)
   return VAR_9;

  if ((VAR_11 != VAR_2) &&
      (VAR_11 != VAR_3) &&
      (VAR_11 != VAR_4)) {
   FUNC_5(VAR_7, "invalid %s VPD tag %02x at offset %zu",
     (VAR_10[0] & VAR_0) ? "large" : "short",
     VAR_11, VAR_9);
   return 0;
  }
 }
 return 0;
}
