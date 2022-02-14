
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct enc28j60_net {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct enc28j60_net*,int ,int) ;
 int FUNC_3 (struct enc28j60_net*,int ) ;
 int FUNC_4 (struct enc28j60_net*) ;

__attribute__((used)) static u16 FUNC_5(struct enc28j60_net *VAR_4, u8 VAR_5)
{
 u16 VAR_6;

 FUNC_0(&VAR_4->lock);

 FUNC_2(VAR_4, VAR_3, VAR_5);

 FUNC_2(VAR_4, VAR_0, VAR_1);

 FUNC_4(VAR_4);

 FUNC_2(VAR_4, VAR_0, 0x00);

 VAR_6 = FUNC_3(VAR_4, VAR_2);
 FUNC_1(&VAR_4->lock);

 return VAR_6;
}
