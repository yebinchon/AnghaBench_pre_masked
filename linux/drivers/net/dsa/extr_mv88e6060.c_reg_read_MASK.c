
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6060_priv {scalar_t__ sw_addr; int bus; } ;


 int FUNC_0 (int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct mv88e6060_priv *VAR_0, int VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0->bus, VAR_0->sw_addr + VAR_1, VAR_2);
}
