
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef uintptr_t u32 ;
typedef int u16 ;
struct mpt3sas_nvme_cmd {int prp2; int prp1; } ;
struct MPT3SAS_ADAPTER {int page_size; } ;
typedef int dma_addr_t ;
typedef int __le64 ;
struct TYPE_3__ {scalar_t__ NVMe_Command; } ;
typedef TYPE_1__ Mpi26NVMeEncapsulatedRequest_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,int ) ;

__attribute__((used)) static void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1, u16 VAR_2,
 Mpi26NVMeEncapsulatedRequest_t *VAR_3,
 dma_addr_t VAR_4, size_t VAR_5, dma_addr_t VAR_6,
 size_t VAR_7)
{
 int VAR_8 = VAR_0;
 __le64 *VAR_9, *VAR_10, *VAR_11;
 __le64 *VAR_12;
 dma_addr_t VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17;
 u32 VAR_18, VAR_19;
 size_t VAR_20;
 struct mpt3sas_nvme_cmd *VAR_21 =
  (void *)VAR_3->NVMe_Command;





 if (!VAR_7 && !VAR_5)
  return;
 VAR_10 = &VAR_21->prp1;
 VAR_11 = &VAR_21->prp2;
 VAR_9 = VAR_10;




 VAR_12 = (__le64 *)FUNC_1(VAR_1, VAR_2);
 VAR_14 = FUNC_2(VAR_1, VAR_2);





 VAR_19 = VAR_1->page_size - 1;
 VAR_18 = (uintptr_t)((u8 *)VAR_12 + VAR_8) & VAR_19;
 if (!VAR_18) {

  VAR_12 = (__le64 *)((u8 *)VAR_12 + VAR_8);
  VAR_14 = VAR_14 + VAR_8;
 }





 VAR_13 = VAR_14;


 if (VAR_7) {
  VAR_15 = VAR_6;
  VAR_20 = VAR_7;
 } else {
  VAR_15 = VAR_4;
  VAR_20 = VAR_5;
 }


 while (VAR_20) {




  VAR_18 = (VAR_13 + VAR_8) & VAR_19;
  if (!VAR_18) {
   VAR_13++;
   *VAR_9 = FUNC_0(VAR_13);
   VAR_9++;
  }


  VAR_16 = VAR_15 & VAR_19;
  VAR_17 = VAR_1->page_size - VAR_16;

  if (VAR_9 == VAR_10) {




   *VAR_10 = FUNC_0(VAR_15);





   VAR_9 = VAR_11;
  } else if (VAR_9 == VAR_11) {





   if (VAR_20 > VAR_1->page_size) {






    *VAR_11 = FUNC_0(VAR_13);





    VAR_9 = VAR_12;
   } else {




    *VAR_11 = FUNC_0(VAR_15);
   }
  } else {







   *VAR_9 = FUNC_0(VAR_15);
   VAR_9++;
   VAR_13++;
  }





  VAR_15 += VAR_17;


  if (VAR_17 > VAR_20)
   VAR_20 = 0;
  else
   VAR_20 -= VAR_17;
 }
}
