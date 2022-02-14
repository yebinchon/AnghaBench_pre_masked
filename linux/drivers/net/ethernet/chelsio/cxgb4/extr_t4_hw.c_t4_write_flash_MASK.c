
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {unsigned int sf_size; } ;
struct adapter {int pdev_dev; TYPE_1__ params; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (struct adapter*,int,int) ;
 scalar_t__ FUNC_3 (int const*,int *,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 int FUNC_5 (struct adapter*,unsigned int,int,int,unsigned int) ;
 unsigned int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct adapter*,unsigned int,int ,int *,int) ;
 int FUNC_8 (struct adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct adapter *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8, const u8 *VAR_9)
{
 int VAR_10;
 u32 VAR_11[64];
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16 = VAR_7 & 0xff;

 if (VAR_7 >= VAR_6->params.sf_size || VAR_16 + VAR_8 > VAR_3)
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_7) | VAR_4;

 if ((VAR_10 = FUNC_5(VAR_6, 1, 0, 1, VAR_5)) != 0 ||
     (VAR_10 = FUNC_5(VAR_6, 4, 1, 1, VAR_15)) != 0)
  goto unlock;

 for (VAR_14 = VAR_8; VAR_14; VAR_14 -= VAR_13) {
  VAR_13 = FUNC_4(VAR_14, 4U);
  for (VAR_15 = 0, VAR_12 = 0; VAR_12 < VAR_13; ++VAR_12)
   VAR_15 = (VAR_15 << 8) + *VAR_9++;

  VAR_10 = FUNC_5(VAR_6, VAR_13, VAR_13 != VAR_14, 1, VAR_15);
  if (VAR_10)
   goto unlock;
 }
 VAR_10 = FUNC_2(VAR_6, 8, 1);
 if (VAR_10)
  goto unlock;

 FUNC_8(VAR_6, VAR_2, 0);


 VAR_10 = FUNC_7(VAR_6, VAR_7 & ~0xff, FUNC_0(VAR_11), VAR_11, 1);
 if (VAR_10)
  return VAR_10;

 if (FUNC_3(VAR_9 - VAR_8, (u8 *)VAR_11 + VAR_16, VAR_8)) {
  FUNC_1(VAR_6->pdev_dev,
   "failed to correctly write the flash page at %#x\n",
   VAR_7);
  return -VAR_1;
 }
 return 0;

unlock:
 FUNC_8(VAR_6, VAR_2, 0);
 return VAR_10;
}
