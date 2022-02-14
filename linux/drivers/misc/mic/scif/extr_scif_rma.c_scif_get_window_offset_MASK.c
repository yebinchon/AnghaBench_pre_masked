
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iovad; } ;
struct scif_endpt {TYPE_1__ rma_info; } ;
struct iova {int pfn_lo; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 struct iova* FUNC_1 (int *,int,scalar_t__,int ) ;
 struct iova* FUNC_2 (int *,int,int) ;

int FUNC_3(struct scif_endpt *VAR_5, int VAR_6, s64 VAR_7,
      int VAR_8, s64 *VAR_9)
{
 s64 VAR_10;
 struct iova *VAR_11;
 int VAR_12 = 0;

 if (VAR_6 & VAR_4) {
  VAR_10 = FUNC_0(VAR_7);
  VAR_11 = FUNC_2(&VAR_5->rma_info.iovad, VAR_10,
     VAR_10 + VAR_8 - 1);
  if (!VAR_11)
   VAR_12 = -VAR_0;
 } else {
  VAR_11 = FUNC_1(&VAR_5->rma_info.iovad, VAR_8,
          VAR_3 - 1, 0);
  if (!VAR_11)
   VAR_12 = -VAR_1;
 }
 if (!VAR_12)
  *VAR_9 = (VAR_11->pfn_lo) << VAR_2;
 return VAR_12;
}
