
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {int msix_vector_count; TYPE_1__* pdev; } ;
struct TYPE_3__ {scalar_t__ device; scalar_t__ revision; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,char*,...) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int*) ;

__attribute__((used)) static int
FUNC_5(struct MPT3SAS_ADAPTER *VAR_10)
{
 int VAR_11;
 u16 VAR_12;




 if (VAR_10->pdev->device == VAR_2 &&
     VAR_10->pdev->revision == VAR_9) {
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_10->pdev, VAR_8);
 if (!VAR_11) {
  FUNC_0(VAR_10, FUNC_2(VAR_10, "msix not supported\n"));
  return -VAR_0;
 }



 if (VAR_10->pdev->device == VAR_1 ||
     VAR_10->pdev->device == VAR_2 ||
     VAR_10->pdev->device == VAR_3 ||
     VAR_10->pdev->device == VAR_4 ||
     VAR_10->pdev->device == VAR_5 ||
     VAR_10->pdev->device == VAR_6 ||
     VAR_10->pdev->device == VAR_7)
  VAR_10->msix_vector_count = 1;
 else {
  FUNC_4(VAR_10->pdev, VAR_11 + 2, &VAR_12);
  VAR_10->msix_vector_count = (VAR_12 & 0x3FF) + 1;
 }
 FUNC_1(VAR_10, FUNC_2(VAR_10, "msix is supported, vector_count(%d)\n",
      VAR_10->msix_vector_count));
 return 0;
}
