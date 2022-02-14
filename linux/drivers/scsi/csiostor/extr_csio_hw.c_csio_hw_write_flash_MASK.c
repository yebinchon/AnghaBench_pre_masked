
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int sf_size; } ;
struct csio_hw {TYPE_1__ params; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct csio_hw*,char*,int) ;
 int FUNC_2 (struct csio_hw*,int,int) ;
 int FUNC_3 (struct csio_hw*,int,int ,int*,int) ;
 int FUNC_4 (struct csio_hw*,int,int,int,int) ;
 int FUNC_5 (struct csio_hw*,int ,int ) ;
 scalar_t__ FUNC_6 (int const*,int *,int) ;
 int FUNC_7 (int,unsigned int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct csio_hw *VAR_5, uint32_t VAR_6,
      uint32_t VAR_7, const uint8_t *VAR_8)
{
 int VAR_9 = -VAR_0;
 uint32_t VAR_10[64];
 uint32_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = VAR_6 & 0xff;

 if (VAR_6 >= VAR_5->params.sf_size || VAR_15 + VAR_7 > VAR_2)
  return -VAR_0;

 VAR_14 = FUNC_8(VAR_6) | VAR_3;

 VAR_9 = FUNC_4(VAR_5, 1, 0, 1, VAR_4);
 if (VAR_9 != 0)
  goto unlock;

 VAR_9 = FUNC_4(VAR_5, 4, 1, 1, VAR_14);
 if (VAR_9 != 0)
  goto unlock;

 for (VAR_13 = VAR_7; VAR_13; VAR_13 -= VAR_12) {
  VAR_12 = FUNC_7(VAR_13, 4U);
  for (VAR_14 = 0, VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11)
   VAR_14 = (VAR_14 << 8) + *VAR_8++;

  VAR_9 = FUNC_4(VAR_5, VAR_12, VAR_12 != VAR_13, 1, VAR_14);
  if (VAR_9)
   goto unlock;
 }
 VAR_9 = FUNC_2(VAR_5, 8, 1);
 if (VAR_9)
  goto unlock;

 FUNC_5(VAR_5, 0, VAR_1);


 VAR_9 = FUNC_3(VAR_5, VAR_6 & ~0xff, FUNC_0(VAR_10), VAR_10, 1);
 if (VAR_9)
  return VAR_9;

 if (FUNC_6(VAR_8 - VAR_7, (uint8_t *)VAR_10 + VAR_15, VAR_7)) {
  FUNC_1(VAR_5,
    "failed to correctly write the flash page at %#x\n",
    VAR_6);
  return -VAR_0;
 }

 return 0;

unlock:
 FUNC_5(VAR_5, 0, VAR_1);
 return VAR_9;
}
