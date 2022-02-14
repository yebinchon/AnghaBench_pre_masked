
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; scalar_t__ ip_summed; int data; int head; } ;
struct net_device {int features; } ;
struct TYPE_2__ {scalar_t__ gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff **VAR_6, struct net_device *VAR_7)
{
 bool VAR_8 = FUNC_3(*VAR_6) || FUNC_5(*VAR_6);
 int VAR_9 = VAR_3 - (*VAR_6)->len;
 int VAR_10 = FUNC_6(*VAR_6);
 int VAR_11 = FUNC_11(*VAR_6);
 struct sk_buff *VAR_12;
 u32 VAR_13;

 if (!(VAR_7->features & VAR_5) ||
     !((*VAR_6)->ip_summed != VAR_0) ||
     FUNC_10(*VAR_6)->gso_size)
  return 0;

 if (VAR_9 <= 0) {

  if (VAR_11 >= VAR_2)
   goto add_fcs;

  else if (!VAR_8 && VAR_10 + VAR_11 >= VAR_2)
   VAR_9 = 0;

  else
   VAR_9 = VAR_2;
 } else {

  VAR_9 += VAR_2;
 }

 if (!VAR_8 && VAR_10 + VAR_11 >= VAR_9) {
  (*VAR_6)->data = FUNC_2((*VAR_6)->head, (*VAR_6)->data, (*VAR_6)->len);
  FUNC_9(*VAR_6, (*VAR_6)->len);
 } else {
  VAR_12 = FUNC_4(*VAR_6, 0, VAR_9, VAR_4);
  if (!VAR_12)
   return -VAR_1;

  FUNC_1(*VAR_6);
  *VAR_6 = VAR_12;
 }

 if (VAR_9 > VAR_2)
  FUNC_8(*VAR_6, VAR_9 - VAR_2);

add_fcs:

 VAR_13 = FUNC_0(~0, (*VAR_6)->data, (*VAR_6)->len);
 VAR_13 = ~VAR_13;

 FUNC_7(*VAR_6, VAR_13 & 0xff);
 FUNC_7(*VAR_6, (VAR_13 >> 8) & 0xff);
 FUNC_7(*VAR_6, (VAR_13 >> 16) & 0xff);
 FUNC_7(*VAR_6, (VAR_13 >> 24) & 0xff);

 return 0;
}
