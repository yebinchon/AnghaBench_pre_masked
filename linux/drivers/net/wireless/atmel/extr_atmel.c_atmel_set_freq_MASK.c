
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {int e; int m; } ;
struct atmel_private {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct atmel_private*,int) ;
 int FUNC_1 (int) ;
 struct atmel_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
     struct iw_request_info *VAR_4,
     struct iw_freq *VAR_5,
     char *VAR_6)
{
 struct atmel_private *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = -VAR_0;


 if (VAR_5->e == 1) {
  int VAR_9 = VAR_5->m / 100000;


  VAR_5->e = 0;
  VAR_5->m = FUNC_1(VAR_9);
 }

 if (VAR_5->m < 0 || VAR_5->m > 1000 || VAR_5->e > 0)
  VAR_8 = -VAR_2;
 else {
  int VAR_10 = VAR_5->m;
  if (FUNC_0(VAR_7, VAR_10) == 0) {
   VAR_7->channel = VAR_10;
  } else {
   VAR_8 = -VAR_1;
  }
 }
 return VAR_8;
}
