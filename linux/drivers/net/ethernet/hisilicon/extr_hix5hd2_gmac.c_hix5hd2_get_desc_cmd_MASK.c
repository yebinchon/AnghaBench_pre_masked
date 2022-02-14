
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_2(struct sk_buff *VAR_7, unsigned long VAR_8)
{
 u32 VAR_9 = 0;

 if (FUNC_0(VAR_8)) {
  if (FUNC_1(VAR_7)->nr_frags)
   VAR_9 |= VAR_5;
  VAR_9 |= FUNC_1(VAR_7)->nr_frags << VAR_4;
 } else {
  VAR_9 |= VAR_3 |
   ((VAR_7->len & VAR_2) << VAR_0);
 }

 VAR_9 |= (VAR_7->len & VAR_2) << VAR_1;
 VAR_9 |= VAR_6;

 return VAR_9;
}
