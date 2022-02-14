
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct TYPE_3__ {int max; } ;
struct rvu_pfvf {TYPE_1__ msix; void* msix_lfmap; } ;
struct rvu_hwinfo {int total_pfs; } ;
struct rvu {scalar_t__ msix_base_iova; int dev; struct rvu_pfvf* hwvf; struct rvu_pfvf* pf; struct rvu_hwinfo* hw; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int ,int,int,int ) ;
 scalar_t__ FUNC_5 (int ,int,int,int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct rvu*,int,int,int) ;
 int FUNC_10 (struct rvu*,int,int*,int*) ;
 int FUNC_11 (struct rvu*,int ,int ) ;
 int FUNC_12 (struct rvu*,int ,int ,int) ;

__attribute__((used)) static int FUNC_13(struct rvu *VAR_7)
{
 struct rvu_hwinfo *VAR_8 = VAR_7->hw;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16;
 struct rvu_pfvf *VAR_17;
 u64 VAR_18, VAR_19;
 dma_addr_t VAR_20;

 for (VAR_9 = 0; VAR_9 < VAR_8->total_pfs; VAR_9++) {
  VAR_18 = FUNC_11(VAR_7, VAR_0, FUNC_1(VAR_9));

  if (!((VAR_18 >> 20) & 0x01))
   continue;

  FUNC_10(VAR_7, VAR_9, &VAR_11, &VAR_12);

  VAR_17 = &VAR_7->pf[VAR_9];

  VAR_18 = FUNC_11(VAR_7, VAR_0, FUNC_3(VAR_9));
  VAR_17->msix.max = ((VAR_18 >> 32) & 0xFFF) + 1;
  FUNC_9(VAR_7, VAR_17->msix.max, VAR_9, 0);


  VAR_13 = FUNC_7(&VAR_17->msix);
  if (VAR_13)
   return VAR_13;


  VAR_17->msix_lfmap = FUNC_4(VAR_7->dev, VAR_17->msix.max,
      sizeof(u16), VAR_3);
  if (!VAR_17->msix_lfmap)
   return -VAR_2;




  if (!VAR_9)
   goto setup_vfmsix;





  VAR_18 = FUNC_11(VAR_7, VAR_0, FUNC_2(VAR_9));
  VAR_14 = (VAR_18 >> 12) & 0xFF;
  VAR_18 &= ~0x7FFULL;
  VAR_15 = FUNC_8(&VAR_17->msix, VAR_14);
  FUNC_12(VAR_7, VAR_0,
       FUNC_2(VAR_9), VAR_18 | VAR_15);
setup_vfmsix:

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   VAR_17 = &VAR_7->hwvf[VAR_12 + VAR_10];

   VAR_18 = FUNC_11(VAR_7, VAR_0,
      FUNC_3(VAR_9));
   VAR_17->msix.max = (VAR_18 & 0xFFF) + 1;
   FUNC_9(VAR_7, VAR_17->msix.max, VAR_9, VAR_10 + 1);


   VAR_13 = FUNC_7(&VAR_17->msix);
   if (VAR_13)
    return VAR_13;

   VAR_17->msix_lfmap =
    FUNC_4(VAR_7->dev, VAR_17->msix.max,
          sizeof(u16), VAR_3);
   if (!VAR_17->msix_lfmap)
    return -VAR_2;





   VAR_18 = FUNC_11(VAR_7, VAR_0,
      FUNC_0(VAR_12 + VAR_10));
   VAR_14 = (VAR_18 >> 12) & 0xFF;
   VAR_18 &= ~0x7FFULL;
   VAR_15 = FUNC_8(&VAR_17->msix, VAR_14);
   FUNC_12(VAR_7, VAR_0,
        FUNC_0(VAR_12 + VAR_10),
        VAR_18 | VAR_15);
  }
 }





 VAR_18 = FUNC_11(VAR_7, VAR_0, VAR_6);
 VAR_16 = VAR_18 & 0xFFFFF;
 VAR_19 = FUNC_11(VAR_7, VAR_0, VAR_5);
 VAR_20 = FUNC_5(VAR_7->dev, VAR_19,
    VAR_16 * VAR_4,
    VAR_1, 0);

 if (FUNC_6(VAR_7->dev, VAR_20))
  return -VAR_2;

 FUNC_12(VAR_7, VAR_0, VAR_5, (u64)VAR_20);
 VAR_7->msix_base_iova = VAR_20;

 return 0;
}
