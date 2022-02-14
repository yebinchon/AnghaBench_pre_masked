
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_2__ frag; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int frag_len; } ;
struct _adapter {TYPE_1__ xmitpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct _adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3,
    struct iw_request_info *VAR_4,
    union iwreq_data *VAR_5, char *VAR_6)
{
 struct _adapter *VAR_7 = FUNC_0(VAR_3);

 if (VAR_5->frag.disabled) {
  VAR_7->xmitpriv.frag_len = VAR_1;
 } else {
  if (VAR_5->frag.value < VAR_2 ||
      VAR_5->frag.value > VAR_1)
   return -VAR_0;
  VAR_7->xmitpriv.frag_len = VAR_5->frag.value & ~0x1;
 }
 return 0;
}
