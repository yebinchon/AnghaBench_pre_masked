
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ec_host_response {int data_len; } ;
struct cros_ec_device {int din_size; scalar_t__* din; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int ,char*) ;
 unsigned long VAR_6 ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_4 (int,int) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (struct cros_ec_device*,scalar_t__*,int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct cros_ec_device *VAR_7,
          int VAR_8)
{
 struct ec_host_response *VAR_9;
 u8 *VAR_10, *VAR_11;
 int VAR_12;
 unsigned long VAR_13;
 int VAR_14;

 FUNC_0(VAR_7->din_size < VAR_2);


 VAR_13 = VAR_6 + FUNC_5(VAR_1);
 while (1) {
  unsigned long VAR_15 = VAR_6;

  VAR_12 = FUNC_6(VAR_7,
          VAR_7->din,
          VAR_2);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_10 = VAR_7->din;
  for (VAR_11 = VAR_10 + VAR_2; VAR_10 != VAR_11; VAR_10++) {
   if (*VAR_10 == VAR_3) {
    FUNC_1(VAR_7->dev, "msg found at %zd\n",
     VAR_10 - VAR_7->din);
    break;
   }
  }
  if (VAR_10 != VAR_11)
   break;






  if (FUNC_7(VAR_15, VAR_13)) {
   FUNC_2(VAR_7->dev, "EC failed to respond in time\n");
   return -VAR_5;
  }
 }





 VAR_14 = VAR_11 - ++VAR_10;
 FUNC_0(VAR_14 < 0 || VAR_14 > VAR_7->din_size);
 VAR_14 = FUNC_4(VAR_14, VAR_8);
 FUNC_3(VAR_7->din, VAR_10, VAR_14);
 VAR_10 = VAR_7->din + VAR_14;
 FUNC_1(VAR_7->dev, "need %d, got %d bytes from preamble\n",
  VAR_8, VAR_14);
 VAR_8 -= VAR_14;


 if (VAR_14 < sizeof(*VAR_9)) {
  VAR_12 = FUNC_6(VAR_7, VAR_10, sizeof(*VAR_9) - VAR_14);
  if (VAR_12 < 0)
   return -VAR_0;
  VAR_10 += (sizeof(*VAR_9) - VAR_14);
  VAR_14 = sizeof(*VAR_9);
 }

 VAR_9 = (struct ec_host_response *)VAR_7->din;


 if (VAR_9->data_len > VAR_7->din_size)
  return -VAR_4;


 while (VAR_8 > 0) {






  VAR_14 = FUNC_4(VAR_8, 256);
  FUNC_1(VAR_7->dev, "loop, todo=%d, need_len=%d, ptr=%zd\n",
   VAR_14, VAR_8, VAR_10 - VAR_7->din);

  VAR_12 = FUNC_6(VAR_7, VAR_10, VAR_14);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_10 += VAR_14;
  VAR_8 -= VAR_14;
 }

 FUNC_1(VAR_7->dev, "loop done, ptr=%zd\n", VAR_10 - VAR_7->din);

 return 0;
}
