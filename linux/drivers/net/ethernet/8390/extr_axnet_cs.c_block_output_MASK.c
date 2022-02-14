
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct net_device {unsigned int base_addr; int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int const,scalar_t__) ;
 int FUNC_1 (scalar_t__,int const*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_6, int VAR_7,
    const u_char *VAR_8, const int VAR_9)
{
    unsigned int VAR_10 = VAR_6->base_addr;

    FUNC_2("%s: [bo=%d]\n", VAR_6->name, VAR_7);




    if (VAR_7 & 0x01)
 VAR_7++;

    FUNC_0(0x00, VAR_10 + VAR_5);
    FUNC_0(VAR_9, VAR_10 + VAR_4);
    FUNC_0(VAR_2+VAR_3, VAR_10 + VAR_0);
    FUNC_1(VAR_10 + VAR_1, VAR_8, VAR_7>>1);
}
