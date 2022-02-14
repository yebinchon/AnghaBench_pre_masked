
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct ene_device* priv; } ;
struct ene_device {int tx_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ene_device*) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_3, u32 VAR_4)
{
 struct ene_device *VAR_5 = VAR_3->priv;
 u32 VAR_6;

 FUNC_0("TX: attempt to set tx carrier to %d kHz", VAR_4);
 if (VAR_4 == 0)
  return -VAR_0;

 VAR_6 = 2000000 / VAR_4;
 if (VAR_6 && (VAR_6 > VAR_1 ||
   VAR_6 < VAR_2)) {

  FUNC_0("TX: out of range %d-%d kHz carrier",
   2000 / VAR_2, 2000 / VAR_1);
  return -VAR_0;
 }

 VAR_5->tx_period = VAR_6;
 FUNC_1(VAR_5);
 return 0;
}
