
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u8 ;
struct TYPE_4__ {int last_tsf; } ;
struct TYPE_3__ {int channel; } ;
struct il_priv {TYPE_2__ _3945; TYPE_1__ active; } ;
struct ieee80211_measurement_params {char channel; int duration; int start_time; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef int buffer ;


 int FUNC_0 (char*,char,char,char const*) ;
 char VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct il_priv* FUNC_3 (struct device*) ;
 int FUNC_4 (struct il_priv*,struct ieee80211_measurement_params*,char) ;
 char FUNC_5 (int ) ;
 char FUNC_6 (char*,int *,int ) ;
 int FUNC_7 (char*,char const*,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 struct il_priv *VAR_5 = FUNC_3(VAR_1);
 struct ieee80211_measurement_params VAR_6 = {
  .channel = FUNC_5(VAR_5->active.channel),
  .start_time = FUNC_2(VAR_5->_3945.last_tsf),
  .duration = FUNC_1(1),
 };
 u8 VAR_7 = VAR_0;
 u8 VAR_8[32];
 u8 VAR_9;

 if (VAR_4) {
  char *VAR_10 = VAR_8;
  FUNC_7(VAR_8, VAR_3, sizeof(VAR_8));
  VAR_9 = FUNC_6(VAR_10, ((void*)0), 0);
  if (VAR_9)
   VAR_6.channel = VAR_9;

  VAR_10 = VAR_8;
  while (*VAR_10 && *VAR_10 != ' ')
   VAR_10++;
  if (*VAR_10)
   VAR_7 = FUNC_6(VAR_10 + 1, ((void*)0), 0);
 }

 FUNC_0("Invoking measurement of type %d on " "channel %d (for '%s')\n",
        VAR_7, VAR_6.channel, VAR_3);
 FUNC_4(VAR_5, &VAR_6, VAR_7);

 return VAR_4;
}
