
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int * dev_addr; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct net_device *VAR_1, char *VAR_2, int VAR_3)
{
    int VAR_4;
    char *VAR_5 = VAR_2;

    for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
 *VAR_5++ = VAR_1->dev_addr[VAR_4];
    }
    for (VAR_4=0; VAR_4<VAR_0; VAR_4++) {
 *VAR_5++ = VAR_1->dev_addr[VAR_4];
    }

    *VAR_5++ = 0;
    *VAR_5++ = 1;
}
