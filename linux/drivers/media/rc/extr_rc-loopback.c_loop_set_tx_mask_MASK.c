
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct loopback_dev* priv; } ;
struct loopback_dev {int txmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static int FUNC_1(struct rc_dev *VAR_3, u32 VAR_4)
{
 struct loopback_dev *VAR_5 = VAR_3->priv;

 if ((VAR_4 & (VAR_2 | VAR_1)) != VAR_4) {
  FUNC_0("invalid tx mask: %u\n", VAR_4);
  return -VAR_0;
 }

 FUNC_0("setting tx mask: %u\n", VAR_4);
 VAR_5->txmask = VAR_4;
 return 0;
}
