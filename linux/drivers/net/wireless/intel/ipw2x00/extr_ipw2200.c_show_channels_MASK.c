
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libipw_geo {int bg_channels; int a_channels; TYPE_2__* a; TYPE_1__* bg; } ;
struct ipw_priv {int ieee; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int channel; int flags; } ;
struct TYPE_3__ {int channel; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ipw_priv* FUNC_0 (struct device*) ;
 struct libipw_geo* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
        struct device_attribute *VAR_5,
        char *VAR_6)
{
 struct ipw_priv *VAR_7 = FUNC_0(VAR_4);
 const struct libipw_geo *VAR_8 = FUNC_1(VAR_7->ieee);
 int VAR_9 = 0, VAR_10;

 VAR_9 = FUNC_2(&VAR_6[VAR_9],
        "Displaying %d channels in 2.4Ghz band "
        "(802.11bg):\n", VAR_8->bg_channels);

 for (VAR_10 = 0; VAR_10 < VAR_8->bg_channels; VAR_10++) {
  VAR_9 += FUNC_2(&VAR_6[VAR_9], "%d: BSS%s%s, %s, Band %s.\n",
          VAR_8->bg[VAR_10].channel,
          VAR_8->bg[VAR_10].flags & VAR_3 ?
          " (radar spectrum)" : "",
          ((VAR_8->bg[VAR_10].flags & VAR_1) ||
    (VAR_8->bg[VAR_10].flags & VAR_3))
          ? "" : ", IBSS",
          VAR_8->bg[VAR_10].flags & VAR_2 ?
          "passive only" : "active/passive",
          VAR_8->bg[VAR_10].flags & VAR_0 ?
          "B" : "B/G");
 }

 VAR_9 += FUNC_2(&VAR_6[VAR_9],
         "Displaying %d channels in 5.2Ghz band "
         "(802.11a):\n", VAR_8->a_channels);
 for (VAR_10 = 0; VAR_10 < VAR_8->a_channels; VAR_10++) {
  VAR_9 += FUNC_2(&VAR_6[VAR_9], "%d: BSS%s%s, %s.\n",
          VAR_8->a[VAR_10].channel,
          VAR_8->a[VAR_10].flags & VAR_3 ?
          " (radar spectrum)" : "",
          ((VAR_8->a[VAR_10].flags & VAR_1) ||
    (VAR_8->a[VAR_10].flags & VAR_3))
          ? "" : ", IBSS",
          VAR_8->a[VAR_10].flags & VAR_2 ?
          "passive only" : "active/passive");
 }

 return VAR_9;
}
