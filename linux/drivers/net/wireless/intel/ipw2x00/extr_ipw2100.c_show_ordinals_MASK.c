
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int index; char* desc; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipw2100_priv* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct ipw2100_priv*,int,int*,int*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct ipw2100_priv *VAR_6 = FUNC_1(VAR_3);
 u32 VAR_7 = 0;
 int VAR_8 = 0;
 u32 VAR_9;
 static int VAR_10 = 0;

 if (VAR_6->status & VAR_1)
  return 0;

 if (VAR_10 >= FUNC_0(VAR_2))
  VAR_10 = 0;


 while (VAR_8 < VAR_0 - 128 && VAR_10 < FUNC_0(VAR_2)) {
  VAR_9 = sizeof(u32);

  if (FUNC_2(VAR_6, VAR_2[VAR_10].index, &VAR_7,
     &VAR_9))
   VAR_8 += FUNC_3(VAR_5 + VAR_8, "[0x%02X] = ERROR    %s\n",
           VAR_2[VAR_10].index,
           VAR_2[VAR_10].desc);
  else
   VAR_8 += FUNC_3(VAR_5 + VAR_8, "[0x%02X] = 0x%08X %s\n",
           VAR_2[VAR_10].index, VAR_7,
           VAR_2[VAR_10].desc);
  VAR_10++;
 }

 return VAR_8;
}
