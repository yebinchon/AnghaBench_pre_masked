
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dev; } ;
struct genwqe_dev {struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct genwqe_dev*,int) ;
 int FUNC_1 (struct genwqe_dev*,int,int) ;
 int FUNC_2 (int *,char*,int,...) ;
 int FUNC_3 (int *,char*,int,...) ;

__attribute__((used)) static u64 FUNC_4(struct genwqe_dev *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 u64 VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 struct pci_dev *VAR_20 = VAR_4->pci_dev;

 healthMonitor:
 VAR_6++;
 if (VAR_6 > 16) {
  FUNC_3(&VAR_20->dev, "* exit looping after %d times\n",
   VAR_6);
  goto fatal_error;
 }

 VAR_11 = FUNC_0(VAR_4, VAR_3);
 if (VAR_11 != 0x0)
  FUNC_3(&VAR_20->dev, "* 0x%08x 0x%016llx\n",
        VAR_3, VAR_11);
 if (VAR_11 == VAR_2)
  goto fatal_error;







 if (VAR_11 == 0)
  return 0;

 VAR_12 = VAR_11 & VAR_1;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {


  VAR_15 = (VAR_10 << 24) + 0x08;
  VAR_8 = FUNC_0(VAR_4, VAR_15);
  if (VAR_8 == 0x0)
   continue;

  FUNC_3(&VAR_20->dev, "* 0x%08x 0x%016llx\n", VAR_15, VAR_8);
  if (VAR_8 == VAR_2)
   goto fatal_error;


  VAR_17 = (VAR_10 << 24) + 0x18;
  VAR_9 = FUNC_0(VAR_4, VAR_17);

  FUNC_3(&VAR_20->dev, "* 0x%08x 0x%016llx\n", VAR_17, VAR_9);
  if (VAR_9 == VAR_2)
   goto fatal_error;

  for (VAR_5 = 0, VAR_7 = 1ULL; VAR_5 < 64; VAR_5++, VAR_7 <<= 1) {


   if ((VAR_8 & VAR_7) == 0x0)
    continue;

   VAR_18 = (VAR_10 << 24) + 0x100 + 0x08 * VAR_5;
   VAR_13 = FUNC_0(VAR_4, VAR_18);

   if (VAR_13 == VAR_2)
    goto fatal_error;
   FUNC_3(&VAR_20->dev,
    "* 0x%08x 0x%016llx\n", VAR_18, VAR_13);

   VAR_19 = (VAR_10 << 24) + 0x300 + 0x08 * VAR_5;
   VAR_14 = FUNC_0(VAR_4, VAR_19);

   if (VAR_14 == VAR_2)
    goto fatal_error;
   FUNC_3(&VAR_20->dev,
    "* 0x%08x 0x%016llx\n", VAR_19, VAR_14);

   VAR_11 = FUNC_0(VAR_4, VAR_3);
   if (VAR_11 == VAR_2)
    goto fatal_error;



   if ((VAR_12 == 0x0) &&
       (VAR_11 & VAR_1)) {
    goto healthMonitor;
   }


   if (VAR_12 == 0x0) {


    VAR_18 = (VAR_10 << 24) + 0x100 + 0x08 * VAR_5;
    FUNC_1(VAR_4, VAR_18, VAR_13);

    FUNC_2(&VAR_20->dev,
     "[HM] Clearing  2ndary FIR 0x%08x with 0x%016llx\n",
     VAR_18, VAR_13);
    VAR_16 = (VAR_10 << 24) + 0x10;
    FUNC_1(VAR_4, VAR_16, VAR_7);

    FUNC_2(&VAR_20->dev,
     "[HM] Clearing primary FIR 0x%08x with 0x%016llx\n",
     VAR_16, VAR_7);
   }
  }
 }
 VAR_11 = FUNC_0(VAR_4, VAR_3);
 if (VAR_11 == VAR_2)
  goto fatal_error;

 if ((VAR_12 == 0x0) && (VAR_11 & VAR_1)) {




  FUNC_2(&VAR_20->dev, "ACK! Another FIR! Recursing %d!\n",
   VAR_6);
  goto healthMonitor;
 }
 return VAR_12;

 fatal_error:
 return VAR_2;
}
