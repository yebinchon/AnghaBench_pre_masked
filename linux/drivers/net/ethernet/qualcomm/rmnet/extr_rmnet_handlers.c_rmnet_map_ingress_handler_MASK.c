
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct rmnet_port {int data_format; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct rmnet_port*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 struct sk_buff* FUNC_4 (struct sk_buff*,struct rmnet_port*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_6(struct sk_buff *VAR_4,
     struct rmnet_port *VAR_5)
{
 struct sk_buff *VAR_6;

 if (VAR_4->dev->type == VAR_0) {
  if (FUNC_3(VAR_4, VAR_1, 0, VAR_2)) {
   FUNC_2(VAR_4);
   return;
  }

  FUNC_5(VAR_4, VAR_1);
 }

 if (VAR_5->data_format & VAR_3) {
  while ((VAR_6 = FUNC_4(VAR_4, VAR_5)) != ((void*)0))
   FUNC_0(VAR_6, VAR_5);

  FUNC_1(VAR_4);
 } else {
  FUNC_0(VAR_4, VAR_5);
 }
}
