
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_device {unsigned long base_addr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, int VAR_4,
         struct sk_buff *VAR_5, int VAR_6)
{
    unsigned long VAR_7 = VAR_3->base_addr;
    unsigned long VAR_8 = VAR_7 - VAR_0;
    unsigned long VAR_9 = VAR_8 + VAR_6 - (VAR_1<<8);

    if (VAR_4&1)
 VAR_4++;

    if (VAR_9+VAR_4 > VAR_8 + (VAR_2<<8)) {
 int VAR_10 = (VAR_8 + (VAR_2<<8)) - VAR_9;

 FUNC_0(VAR_5->data,VAR_9,VAR_10);
 VAR_4 -= VAR_10;
 FUNC_0(VAR_5->data+VAR_10, VAR_8, VAR_4);
    } else
 FUNC_0(VAR_5->data, VAR_9,VAR_4);

}
