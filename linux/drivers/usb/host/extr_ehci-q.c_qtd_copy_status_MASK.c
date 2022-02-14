
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct urb {int pipe; TYPE_1__* dev; int unlinked; int actual_length; } ;
struct ehci_hcd {int dummy; } ;
struct TYPE_2__ {int devpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct ehci_hcd*,char*,int ,int ,char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9 (
 struct ehci_hcd *VAR_12,
 struct urb *VAR_13,
 size_t VAR_14,
 u32 VAR_15
)
{
 int VAR_16 = -VAR_1;


 if (FUNC_5 (FUNC_3 (VAR_15) != 2))
  VAR_13->actual_length += VAR_14 - FUNC_2 (VAR_15);


 if (FUNC_6(VAR_13->unlinked))
  return VAR_16;


 if (FUNC_6 (FUNC_0 (VAR_15)))
  VAR_16 = -VAR_6;


 if (VAR_15 & VAR_9) {
  if (VAR_15 & VAR_7) {

   VAR_16 = -VAR_3;

  } else if (FUNC_1(VAR_15)) {
   VAR_16 = -VAR_4;





  } else if (VAR_15 & VAR_10) {

   VAR_16 = -VAR_5;
  } else if (VAR_15 & VAR_8) {
   VAR_16 = (FUNC_3 (VAR_15) == 1)
    ? -VAR_2
    : -VAR_0;
  } else if (VAR_15 & VAR_11) {

   FUNC_4(VAR_12, "devpath %s ep%d%s 3strikes\n",
    VAR_13->dev->devpath,
    FUNC_7(VAR_13->pipe),
    FUNC_8(VAR_13->pipe) ? "in" : "out");
   VAR_16 = -VAR_5;
  } else {
   VAR_16 = -VAR_5;
  }
 }

 return VAR_16;
}
