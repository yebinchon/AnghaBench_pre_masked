
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int rss_flags; } ;
struct be_adapter {TYPE_1__ rss_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





__attribute__((used)) static u64 FUNC_0(struct be_adapter *VAR_10, u64 VAR_11)
{
 u64 VAR_12 = 0;

 switch (VAR_11) {
 case 131:
  if (VAR_10->rss_info.rss_flags & VAR_0)
   VAR_12 |= VAR_6 | VAR_7;
  if (VAR_10->rss_info.rss_flags & VAR_2)
   VAR_12 |= VAR_8 | VAR_9;
  break;
 case 129:
  if (VAR_10->rss_info.rss_flags & VAR_0)
   VAR_12 |= VAR_6 | VAR_7;
  if (VAR_10->rss_info.rss_flags & VAR_4)
   VAR_12 |= VAR_8 | VAR_9;
  break;
 case 130:
  if (VAR_10->rss_info.rss_flags & VAR_1)
   VAR_12 |= VAR_6 | VAR_7;
  if (VAR_10->rss_info.rss_flags & VAR_3)
   VAR_12 |= VAR_8 | VAR_9;
  break;
 case 128:
  if (VAR_10->rss_info.rss_flags & VAR_1)
   VAR_12 |= VAR_6 | VAR_7;
  if (VAR_10->rss_info.rss_flags & VAR_5)
   VAR_12 |= VAR_8 | VAR_9;
  break;
 }

 return VAR_12;
}
