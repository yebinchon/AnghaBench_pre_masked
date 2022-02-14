
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

u16 FUNC_4(__le16 VAR_6, u16 VAR_7)
{
 u16 VAR_8;

 if (FUNC_3(FUNC_1(VAR_6))) {
  VAR_8 = VAR_0;
  goto out;
 }
 if (FUNC_2(VAR_6)) {
  VAR_8 = VAR_3;
  goto out;
 }
 switch (VAR_7) {
 case 0:
  VAR_8 = VAR_5;
  break;
 case 1:
  VAR_8 = VAR_4;
  break;
 case 2:
  VAR_8 = VAR_1;
  break;
 case 3:
  VAR_8 = VAR_2;
  break;
 default:
  VAR_8 = VAR_1;
  FUNC_0(1, "rtl8192cu: QSLT_BE queue, skb_queue:%d\n",
     VAR_7);
  break;
 }
out:
 return VAR_8;
}
