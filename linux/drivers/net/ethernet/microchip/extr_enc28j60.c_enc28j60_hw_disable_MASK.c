
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enc28j60_net {int hw_enable; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct enc28j60_net*,int ,int ) ;
 int FUNC_3 (struct enc28j60_net*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct enc28j60_net *VAR_3)
{
 FUNC_0(&VAR_3->lock);

 FUNC_3(VAR_3, VAR_2, 0x00);
 FUNC_2(VAR_3, VAR_0, VAR_1);
 VAR_3->hw_enable = 0;
 FUNC_1(&VAR_3->lock);
}
