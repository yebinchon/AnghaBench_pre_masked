
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ethtool_rxnfc {int data; int flow_type; } ;
struct TYPE_2__ {scalar_t__ rss_flags; int rss_hkey; int rsstable; } ;
struct be_adapter {TYPE_1__ rss_info; } ;


 int FUNC_0 (struct be_adapter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;




 int FUNC_1 (struct be_adapter*,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct be_adapter *VAR_10,
    struct ethtool_rxnfc *VAR_11)
{
 int VAR_12;
 u32 VAR_13 = VAR_10->rss_info.rss_flags;

 if (VAR_11->data != VAR_1 &&
     VAR_11->data != (VAR_1 | VAR_2))
  return -VAR_0;

 switch (VAR_11->flow_type) {
 case 131:
  if (VAR_11->data == VAR_1)
   VAR_13 &= ~VAR_5;
  else if (VAR_11->data == (VAR_1 | VAR_2))
   VAR_13 |= VAR_3 |
     VAR_5;
  break;
 case 130:
  if (VAR_11->data == VAR_1)
   VAR_13 &= ~VAR_6;
  else if (VAR_11->data == (VAR_1 | VAR_2))
   VAR_13 |= VAR_4 |
     VAR_6;
  break;
 case 129:
  if ((VAR_11->data == (VAR_1 | VAR_2)) &&
      FUNC_0(VAR_10))
   return -VAR_0;

  if (VAR_11->data == VAR_1)
   VAR_13 &= ~VAR_7;
  else if (VAR_11->data == (VAR_1 | VAR_2))
   VAR_13 |= VAR_3 |
     VAR_7;
  break;
 case 128:
  if ((VAR_11->data == (VAR_1 | VAR_2)) &&
      FUNC_0(VAR_10))
   return -VAR_0;

  if (VAR_11->data == VAR_1)
   VAR_13 &= ~VAR_8;
  else if (VAR_11->data == (VAR_1 | VAR_2))
   VAR_13 |= VAR_4 |
     VAR_8;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_13 == VAR_10->rss_info.rss_flags)
  return 0;

 VAR_12 = FUNC_1(VAR_10, VAR_10->rss_info.rsstable,
       VAR_13, VAR_9,
       VAR_10->rss_info.rss_hkey);
 if (!VAR_12)
  VAR_10->rss_info.rss_flags = VAR_13;

 return FUNC_2(VAR_12);
}
