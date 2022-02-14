
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct orinoco_private {int tx_key; TYPE_1__* keys; scalar_t__ wep_restrict; int encode_alg; int has_wep; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;
struct TYPE_2__ {int key; int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int ) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_7,
         struct iw_request_info *VAR_8,
         struct iw_point *VAR_9,
         char *VAR_10)
{
 struct orinoco_private *VAR_11 = FUNC_1(VAR_7);
 int VAR_12 = (VAR_9->flags & VAR_3) - 1;
 unsigned long VAR_13;

 if (!VAR_11->has_wep)
  return -VAR_1;

 if (FUNC_2(VAR_11, &VAR_13) != 0)
  return -VAR_0;

 if ((VAR_12 < 0) || (VAR_12 >= VAR_6))
  VAR_12 = VAR_11->tx_key;

 VAR_9->flags = 0;
 if (!VAR_11->encode_alg)
  VAR_9->flags |= VAR_2;
 VAR_9->flags |= VAR_12 + 1;

 if (VAR_11->wep_restrict)
  VAR_9->flags |= VAR_5;
 else
  VAR_9->flags |= VAR_4;

 VAR_9->length = VAR_11->keys[VAR_12].key_len;

 FUNC_0(VAR_10, VAR_11->keys[VAR_12].key, VAR_9->length);

 FUNC_3(VAR_11, &VAR_13);
 return 0;
}
