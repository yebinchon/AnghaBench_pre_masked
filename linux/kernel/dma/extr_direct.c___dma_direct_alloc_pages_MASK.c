
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct device {int coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct device*,int ,scalar_t__*) ;
 struct page* FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct device*) ;
 struct page* FUNC_6 (struct device*,size_t,int) ;
 int FUNC_7 (struct device*,int ,size_t) ;
 int FUNC_8 (struct device*,struct page*,size_t) ;
 int FUNC_9 (size_t) ;
 int FUNC_10 (struct page*) ;

struct page *FUNC_11(struct device *VAR_7, size_t VAR_8,
  dma_addr_t *VAR_9, gfp_t VAR_10, unsigned long VAR_11)
{
 size_t VAR_12 = FUNC_2(VAR_8);
 int VAR_13 = FUNC_5(VAR_7);
 struct page *VAR_14 = ((void*)0);
 u64 VAR_15;

 if (VAR_11 & VAR_2)
  VAR_10 |= VAR_5;


 VAR_10 &= ~VAR_6;
 VAR_10 |= FUNC_3(VAR_7, VAR_7->coherent_dma_mask,
   &VAR_15);
 VAR_14 = FUNC_6(VAR_7, VAR_12, VAR_10);
 if (VAR_14 && !FUNC_7(VAR_7, FUNC_10(VAR_14), VAR_8)) {
  FUNC_8(VAR_7, VAR_14, VAR_12);
  VAR_14 = ((void*)0);
 }
again:
 if (!VAR_14)
  VAR_14 = FUNC_4(VAR_13, VAR_10, FUNC_9(VAR_12));
 if (VAR_14 && !FUNC_7(VAR_7, FUNC_10(VAR_14), VAR_8)) {
  FUNC_8(VAR_7, VAR_14, VAR_8);
  VAR_14 = ((void*)0);

  if (FUNC_1(VAR_1) &&
      VAR_15 < FUNC_0(64) &&
      !(VAR_10 & (VAR_4 | VAR_3))) {
   VAR_10 |= VAR_4;
   goto again;
  }

  if (FUNC_1(VAR_0) && !(VAR_10 & VAR_3)) {
   VAR_10 = (VAR_10 & ~VAR_4) | VAR_3;
   goto again;
  }
 }

 return VAR_14;
}
