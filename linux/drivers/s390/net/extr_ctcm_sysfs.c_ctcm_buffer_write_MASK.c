
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; int mtu; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctcm_priv {unsigned int buffer_size; TYPE_1__** channel; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {unsigned int max_bufsize; int flags; struct net_device* netdev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,struct net_device*,char const*) ;
 int FUNC_1 (int ,int ,char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct ctcm_priv* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_10,
  struct device_attribute *VAR_11, const char *VAR_12, size_t VAR_13)
{
 struct net_device *VAR_14;
 unsigned int VAR_15;
 struct ctcm_priv *VAR_16 = FUNC_2(VAR_10);
 int VAR_17;

 VAR_14 = VAR_16->channel[VAR_2]->netdev;
 if (!(VAR_16 && VAR_16->channel[VAR_2] && VAR_14)) {
  FUNC_1(VAR_9, VAR_4, "bfnondev");
  return -VAR_6;
 }

 VAR_17 = FUNC_3(VAR_12, 0, &VAR_15);
 if (VAR_17)
  goto einval;
 if (VAR_15 > VAR_1)
     goto einval;
 if (VAR_15 < (576 + VAR_8 + 2))
     goto einval;
 VAR_16->buffer_size = VAR_15;

 if ((VAR_14->flags & VAR_7) &&
     (VAR_15 < (VAR_14->mtu + VAR_8 + 2)))
     goto einval;

 VAR_16->channel[VAR_2]->max_bufsize = VAR_15;
 VAR_16->channel[VAR_3]->max_bufsize = VAR_15;
 if (!(VAR_14->flags & VAR_7))
  VAR_14->mtu = VAR_15 - VAR_8 - 2;
 VAR_16->channel[VAR_2]->flags |= VAR_0;
 VAR_16->channel[VAR_3]->flags |= VAR_0;

 FUNC_0(VAR_9, VAR_14, VAR_12);
 return VAR_13;

einval:
 FUNC_0(VAR_9, VAR_14, "buff_err");
 return -VAR_5;
}
