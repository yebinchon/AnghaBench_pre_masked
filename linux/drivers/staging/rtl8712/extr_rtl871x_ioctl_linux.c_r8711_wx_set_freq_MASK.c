
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_freq {int e; int m; } ;
union iwreq_data {struct iw_freq freq; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int channel; } ;
struct _adapter {TYPE_1__ registrypriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 struct _adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
        struct iw_request_info *VAR_4,
        union iwreq_data *VAR_5, char *VAR_6)
{
 struct _adapter *VAR_7 = FUNC_0(VAR_3);
 struct iw_freq *VAR_8 = &VAR_5->freq;
 int VAR_9 = 0;


 if ((VAR_8->e == 1) &&
   (VAR_8->m >= (int) 2.412e8) &&
   (VAR_8->m <= (int) 2.487e8)) {
  int VAR_10 = VAR_8->m / 100000;
  int VAR_11 = 0;

  while ((VAR_11 < 14) && (VAR_10 != VAR_2[VAR_11]))
   VAR_11++;
  VAR_8->e = 0;
  VAR_8->m = VAR_11 + 1;
 }

 if ((VAR_8->m > 14) || (VAR_8->e > 0)) {
  VAR_9 = -VAR_1;
 } else {
  int VAR_12 = VAR_8->m;

  if ((VAR_12 < 1) || (VAR_12 > 14)) {
   VAR_9 = -VAR_0;
  } else {

   VAR_7->registrypriv.channel = VAR_12;
  }
 }
 return VAR_9;
}
