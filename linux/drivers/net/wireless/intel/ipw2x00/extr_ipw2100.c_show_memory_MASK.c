
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ipw2100_priv {scalar_t__ dump_raw; scalar_t__* snapshot; struct net_device* net_dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int line ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct ipw2100_priv* FUNC_1 (struct device*) ;
 int FUNC_2 (struct net_device*,unsigned long,int *) ;
 char* FUNC_3 (char*,int,int*,int,unsigned long) ;
 scalar_t__ FUNC_4 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct ipw2100_priv *VAR_4 = FUNC_1(VAR_1);
 struct net_device *VAR_5 = VAR_4->net_dev;
 static unsigned long VAR_6 = 0;
 int VAR_7 = 0;
 u32 VAR_8[4];
 int VAR_9;
 char VAR_10[81];

 if (VAR_6 >= 0x30000)
  VAR_6 = 0;


 while (VAR_7 < VAR_0 - 128 && VAR_6 < 0x30000) {

  if (VAR_4->snapshot[0])
   for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
    VAR_8[VAR_9] =
        *(u32 *) FUNC_0(VAR_6 + VAR_9 * 4);
  else
   for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
    FUNC_2(VAR_5, VAR_6 + VAR_9 * 4, &VAR_8[VAR_9]);

  if (VAR_4->dump_raw)
   VAR_7 += FUNC_4(VAR_3 + VAR_7,
           "%c%c%c%c"
           "%c%c%c%c"
           "%c%c%c%c"
           "%c%c%c%c",
           ((u8 *) VAR_8)[0x0],
           ((u8 *) VAR_8)[0x1],
           ((u8 *) VAR_8)[0x2],
           ((u8 *) VAR_8)[0x3],
           ((u8 *) VAR_8)[0x4],
           ((u8 *) VAR_8)[0x5],
           ((u8 *) VAR_8)[0x6],
           ((u8 *) VAR_8)[0x7],
           ((u8 *) VAR_8)[0x8],
           ((u8 *) VAR_8)[0x9],
           ((u8 *) VAR_8)[0xa],
           ((u8 *) VAR_8)[0xb],
           ((u8 *) VAR_8)[0xc],
           ((u8 *) VAR_8)[0xd],
           ((u8 *) VAR_8)[0xe],
           ((u8 *) VAR_8)[0xf]);
  else
   VAR_7 += FUNC_4(VAR_3 + VAR_7, "%s\n",
           FUNC_3(VAR_10, sizeof(VAR_10),
          (u8 *) VAR_8, 16, VAR_6));
  VAR_6 += 16;
 }

 return VAR_7;
}
