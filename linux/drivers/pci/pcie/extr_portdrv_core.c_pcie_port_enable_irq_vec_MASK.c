
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct pci_dev*,int,int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int FUNC_3 (struct pci_dev*,int,int *,int *,int *) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_14, int *VAR_15, int VAR_16)
{
 int VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;


 VAR_17 = FUNC_0(VAR_14, 1, VAR_1,
   VAR_13 | VAR_12);
 if (VAR_17 < 0)
  return VAR_17;


 VAR_18 = FUNC_3(VAR_14, VAR_16, &VAR_20, &VAR_21, &VAR_22);
 if (VAR_18 > VAR_17) {
  FUNC_1(VAR_14);
  return -VAR_0;
 }
 if (VAR_18 != VAR_17) {
  FUNC_1(VAR_14);

  VAR_17 = FUNC_0(VAR_14, VAR_18, VAR_18,
    VAR_13 | VAR_12);
  if (VAR_17 < 0)
   return VAR_17;
 }


 if (VAR_16 & (VAR_10 | VAR_8 |
      VAR_4)) {
  VAR_19 = FUNC_2(VAR_14, VAR_20);
  VAR_15[VAR_11] = VAR_19;
  VAR_15[VAR_9] = VAR_19;
  VAR_15[VAR_5] = VAR_19;
 }

 if (VAR_16 & VAR_2)
  VAR_15[VAR_3] = FUNC_2(VAR_14, VAR_21);

 if (VAR_16 & VAR_6)
  VAR_15[VAR_7] = FUNC_2(VAR_14, VAR_22);

 return 0;
}
