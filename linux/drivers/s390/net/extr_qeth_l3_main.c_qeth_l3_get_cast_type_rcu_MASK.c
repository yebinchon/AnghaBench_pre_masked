
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct neighbour {int type; } ;
struct dst_entry {int dummy; } ;
struct TYPE_4__ {int daddr; } ;
struct TYPE_3__ {int daddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct neighbour* FUNC_0 (struct dst_entry*,struct sk_buff*) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct neighbour*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_4, struct dst_entry *VAR_5,
         int VAR_6)
{
 struct neighbour *VAR_7 = ((void*)0);

 if (VAR_5)
  VAR_7 = FUNC_0(VAR_5, VAR_4);

 if (VAR_7) {
  int VAR_8 = VAR_7->type;

  FUNC_6(VAR_7);
  if ((VAR_8 == VAR_1) ||
      (VAR_8 == VAR_2) ||
      (VAR_8 == VAR_0))
   return VAR_8;
  return VAR_3;
 }


 switch (VAR_6) {
 case 4:
  if (FUNC_2(FUNC_1(VAR_4)->daddr))
   return VAR_1;
  return FUNC_3(FUNC_1(VAR_4)->daddr) ?
    VAR_2 : VAR_3;
 case 6:
  return FUNC_4(&FUNC_5(VAR_4)->daddr) ?
    VAR_2 : VAR_3;
 default:

  return FUNC_7(VAR_4);
 }
}
