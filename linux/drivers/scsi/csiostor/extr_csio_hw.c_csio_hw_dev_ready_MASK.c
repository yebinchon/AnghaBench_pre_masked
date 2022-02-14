
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct csio_hw {int pfn; TYPE_1__* pdev; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct csio_hw*,char*,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct csio_hw*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct csio_hw *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = 6;
 int VAR_7;

 while (((VAR_5 = FUNC_4(VAR_4, VAR_3)) == 0xFFFFFFFF) &&
        (--VAR_6 != 0))
  FUNC_5(100);

 if (FUNC_3(VAR_4->pdev->device & VAR_0))
  VAR_7 = FUNC_0(VAR_5);
 else
  VAR_7 = FUNC_1(VAR_5);

 if ((VAR_6 == 0) && (((int32_t)(VAR_7) < 0) ||
      (VAR_7 >= VAR_1))) {
  FUNC_2(VAR_4, "PL_WHOAMI returned 0x%x, cnt:%d\n", VAR_5, VAR_6);
  return -VAR_2;
 }

 VAR_4->pfn = VAR_7;

 return 0;
}
