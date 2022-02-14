
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct csio_hw {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (struct csio_hw*,int) ;
 int FUNC_1 (struct csio_hw*,int ) ;
 int FUNC_2 (struct csio_hw*,int ,int,int ) ;
 int FUNC_3 (struct csio_hw*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct csio_hw *VAR_10, uint32_t VAR_11, int32_t VAR_12)
{
 if (VAR_12) {





  FUNC_2(VAR_10, VAR_3, VAR_4, 0);
  if (VAR_11 <= VAR_5) {
   FUNC_2(VAR_10, VAR_0, VAR_9, 0);
   FUNC_4(100);
   if (FUNC_0(VAR_10, 1) == 0)
    return 0;
  }

  FUNC_3(VAR_10, VAR_6 | VAR_7, VAR_8);
  FUNC_4(2000);
 } else {
  int VAR_13;

  FUNC_2(VAR_10, VAR_0, VAR_9, 0);
  for (VAR_13 = 0; VAR_13 < VAR_2; ) {
   if (!(FUNC_1(VAR_10, VAR_3) & VAR_4))
    return 0;
   FUNC_4(100);
   VAR_13 += 100;
  }
  return -VAR_1;
 }
 return 0;
}
