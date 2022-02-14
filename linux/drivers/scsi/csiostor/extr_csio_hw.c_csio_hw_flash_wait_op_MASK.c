
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct csio_hw {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct csio_hw*,int,int ,int,int*) ;
 int FUNC_1 (struct csio_hw*,int,int,int,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct csio_hw *VAR_2, int32_t VAR_3, int32_t VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 while (1) {
  VAR_5 = FUNC_1(VAR_2, 1, 1, 1, VAR_1);
  if (VAR_5 != 0)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_2, 1, 0, 1, &VAR_6);
  if (VAR_5 != 0)
   return VAR_5;

  if (!(VAR_6 & 1))
   return 0;
  if (--VAR_3 == 0)
   return -VAR_0;
  if (VAR_4)
   FUNC_2(VAR_4);
 }
}
