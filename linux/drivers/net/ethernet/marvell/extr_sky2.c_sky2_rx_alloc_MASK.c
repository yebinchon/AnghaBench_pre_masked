
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {int rx_nfrags; TYPE_1__* hw; scalar_t__ rx_data_size; int netdev; } ;
struct sk_buff {int data; } ;
struct page {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 unsigned char* VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (int,int) ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int ,scalar_t__,int ) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int,struct page*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sky2_port *VAR_3, gfp_t VAR_4)
{
 struct sk_buff *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3->netdev,
     VAR_3->rx_data_size + FUNC_6(VAR_3->hw),
     VAR_4);
 if (!VAR_5)
  goto nomem;

 if (VAR_3->hw->flags & VAR_2) {
  unsigned char *VAR_7;






  VAR_7 = FUNC_0(VAR_5->data, 8);
  FUNC_5(VAR_5, VAR_7 - VAR_5->data);
 } else
  FUNC_5(VAR_5, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_3->rx_nfrags; VAR_6++) {
  struct page *VAR_8 = FUNC_2(VAR_4);

  if (!VAR_8)
   goto free_partial;
  FUNC_4(VAR_5, VAR_6, VAR_8, 0, VAR_1);
 }

 return VAR_5;
free_partial:
 FUNC_3(VAR_5);
nomem:
 return ((void*)0);
}
