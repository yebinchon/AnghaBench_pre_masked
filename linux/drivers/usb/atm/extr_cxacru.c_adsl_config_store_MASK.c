
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cxacru_data {int usbatm; } ;
typedef int ssize_t ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cxacru_data*,int ,int *,int,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int,int) ;
 int FUNC_7 (char const*,char*,int*,int*,int*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (struct device*) ;
 struct cxacru_data* FUNC_10 (int ) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_8,
 struct device_attribute *VAR_9, const char *VAR_10, size_t VAR_11)
{
 struct cxacru_data *VAR_12 = FUNC_10(
   FUNC_9(VAR_8));
 int VAR_13 = FUNC_8(VAR_10);
 int VAR_14, VAR_15, VAR_16;
 __le32 VAR_17[VAR_2 / 4];

 if (!FUNC_2(VAR_0))
  return -VAR_4;

 if (VAR_12 == ((void*)0))
  return -VAR_7;

 VAR_15 = 0;
 VAR_16 = 0;
 while (VAR_15 < VAR_13) {
  int VAR_18;
  u32 VAR_19;
  u32 VAR_20;

  VAR_14 = FUNC_7(VAR_10 + VAR_15, "%x=%x%n", &VAR_19, &VAR_20, &VAR_18);
  if (VAR_14 < 2)
   return -VAR_5;
  if (VAR_19 > 0x7f)
   return -VAR_5;
  if (VAR_18 < 0 || VAR_18 > VAR_13 - VAR_15)
   return -VAR_5;
  VAR_15 += VAR_18;


  if (VAR_10[VAR_15] == '\n' && VAR_15 == VAR_13-1)
   VAR_15++;

  VAR_17[VAR_16 * 2 + 1] = FUNC_3(VAR_19);
  VAR_17[VAR_16 * 2 + 2] = FUNC_3(VAR_20);
  VAR_16++;




  if (VAR_15 >= VAR_13 || VAR_16 >= VAR_1) {
   char VAR_21[VAR_1 * 12 + 1];

   VAR_17[0] = FUNC_3(VAR_16);
   VAR_14 = FUNC_4(VAR_12, VAR_3,
    (u8 *) VAR_17, 4 + VAR_16 * 8, ((void*)0), 0);
   if (VAR_14 < 0) {
    FUNC_0(VAR_12->usbatm,
     "set card data returned %d\n", VAR_14);
    return -VAR_6;
   }

   for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++)
    FUNC_6(VAR_21 + VAR_18*12, 13, " %02x=%08x",
     FUNC_5(VAR_17[VAR_18 * 2 + 1]),
     FUNC_5(VAR_17[VAR_18 * 2 + 2]));
   FUNC_1(VAR_12->usbatm, "config%s\n", VAR_21);
   VAR_16 = 0;
  }
 }

 return VAR_13;
}
