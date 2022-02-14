
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;
struct net_device {unsigned char* dev_addr; } ;
struct hix5hd2_priv {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hix5hd2_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2)
{
 struct hix5hd2_priv *VAR_3 = FUNC_0(VAR_2);
 unsigned char *VAR_4 = VAR_2->dev_addr;
 u32 VAR_5;

 VAR_5 = VAR_4[1] | (VAR_4[0] << 8);
 FUNC_1(VAR_5, VAR_3->base + VAR_0);

 VAR_5 = VAR_4[5] | (VAR_4[4] << 8) | (VAR_4[3] << 16) | (VAR_4[2] << 24);
 FUNC_1(VAR_5, VAR_3->base + VAR_1);
}
