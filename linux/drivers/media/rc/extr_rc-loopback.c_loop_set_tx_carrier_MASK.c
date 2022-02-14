
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct loopback_dev* priv; } ;
struct loopback_dev {int txcarrier; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_0, u32 VAR_1)
{
 struct loopback_dev *VAR_2 = VAR_0->priv;

 FUNC_0("setting tx carrier: %u\n", VAR_1);
 VAR_2->txcarrier = VAR_1;
 return 0;
}
