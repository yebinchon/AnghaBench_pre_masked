
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cros_ec_device {int din_size; scalar_t__* din; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,scalar_t__*,int) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (int ,char*) ;
 unsigned long VAR_4 ;
 int FUNC_4 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_5 (int,int) ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 (struct cros_ec_device*,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct cros_ec_device *VAR_5,
     int VAR_6)
{
 u8 *VAR_7, *VAR_8;
 int VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 FUNC_0(VAR_5->din_size < VAR_1);


 VAR_10 = VAR_4 + FUNC_6(VAR_0);
 while (1) {
  unsigned long VAR_12 = VAR_4;

  VAR_9 = FUNC_7(VAR_5,
          VAR_5->din,
          VAR_1);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_7 = VAR_5->din;
  for (VAR_8 = VAR_7 + VAR_1; VAR_7 != VAR_8; VAR_7++) {
   if (*VAR_7 == VAR_2) {
    FUNC_2(VAR_5->dev, "msg found at %zd\n",
     VAR_7 - VAR_5->din);
    break;
   }
  }
  if (VAR_7 != VAR_8)
   break;






  if (FUNC_8(VAR_12, VAR_10)) {
   FUNC_3(VAR_5->dev, "EC failed to respond in time\n");
   return -VAR_3;
  }
 }





 VAR_11 = VAR_8 - ++VAR_7;
 FUNC_0(VAR_11 < 0 || VAR_11 > VAR_5->din_size);
 VAR_11 = FUNC_5(VAR_11, VAR_6);
 FUNC_4(VAR_5->din, VAR_7, VAR_11);
 VAR_7 = VAR_5->din + VAR_11;
 FUNC_2(VAR_5->dev, "need %d, got %d bytes from preamble\n",
   VAR_6, VAR_11);
 VAR_6 -= VAR_11;


 while (VAR_6 > 0) {






  VAR_11 = FUNC_5(VAR_6, 256);
  FUNC_2(VAR_5->dev, "loop, todo=%d, need_len=%d, ptr=%zd\n",
   VAR_11, VAR_6, VAR_7 - VAR_5->din);

  VAR_9 = FUNC_7(VAR_5, VAR_7, VAR_11);
  if (VAR_9 < 0)
   return VAR_9;

  FUNC_1(VAR_5->dev, "interim", VAR_7, VAR_11);
  VAR_7 += VAR_11;
  VAR_6 -= VAR_11;
 }

 FUNC_2(VAR_5->dev, "loop done, ptr=%zd\n", VAR_7 - VAR_5->din);

 return 0;
}
