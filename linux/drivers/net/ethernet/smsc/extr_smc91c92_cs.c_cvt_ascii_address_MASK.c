
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; } ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;

    if (FUNC_0(VAR_1) != 12)
 return -1;
    for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
     VAR_5 = *VAR_1++;
     VAR_4 <<= 4;
     VAR_4 += ((VAR_5 >= '0') && (VAR_5 <= '9')) ?
  (VAR_5 - '0') : ((VAR_5 & 0x0f) + 9);
 }
 VAR_0->dev_addr[VAR_2] = VAR_4;
    }
    return 0;
}
