
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fixed; int value; } ;
union iwreq_data {TYPE_2__ frag; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int frag_len; } ;
struct _adapter {TYPE_1__ xmitpriv; } ;


 struct _adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
    struct iw_request_info *VAR_1,
    union iwreq_data *VAR_2, char *VAR_3)
{
 struct _adapter *VAR_4 = FUNC_0(VAR_0);

 VAR_2->frag.value = VAR_4->xmitpriv.frag_len;
 VAR_2->frag.fixed = 0;
 return 0;
}
