
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {char* data; } ;
struct net_device {unsigned int base_addr; } ;
struct ei_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct ei_device* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct ei_device*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_6, int VAR_7,
   struct sk_buff *VAR_8, int VAR_9)
{
    unsigned int VAR_10 = VAR_6->base_addr;
    struct ei_device *VAR_11 = FUNC_3(VAR_6);
    int VAR_12 = VAR_7;
    char *VAR_13 = VAR_8->data;

    if ((FUNC_4(VAR_11)) && (VAR_7 != 4))
 FUNC_2(VAR_6, "[bi=%d]\n", VAR_7+4);
    FUNC_5(VAR_9 & 0xff, VAR_10 + VAR_5);
    FUNC_5(VAR_9 >> 8, VAR_10 + VAR_4);
    FUNC_5(VAR_2+VAR_3, VAR_10 + VAR_0);

    FUNC_1(VAR_10 + VAR_1,VAR_13,VAR_7>>1);
    if (VAR_7 & 0x01)
 VAR_13[VAR_7-1] = FUNC_0(VAR_10 + VAR_1), VAR_12++;

}
