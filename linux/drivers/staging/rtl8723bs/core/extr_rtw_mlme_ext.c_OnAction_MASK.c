
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rx_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct adapter {int dummy; } ;
struct action_handler {unsigned char num; int (* func ) (struct adapter*,union recv_frame*) ;} ;


 int FUNC_0 (struct action_handler*) ;
 struct action_handler* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct adapter*,union recv_frame*) ;

unsigned int FUNC_2(struct adapter *VAR_2, union recv_frame *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;
 struct action_handler *VAR_6;
 unsigned char *VAR_7;
 u8 *VAR_8 = VAR_3->u.hdr.rx_data;

 VAR_7 = (unsigned char *)(VAR_8 + sizeof(struct ieee80211_hdr_3addr));

 VAR_5 = VAR_7[0];

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_6 = &VAR_0[VAR_4];

  if (VAR_5 == VAR_6->num)
   VAR_6->func(VAR_2, VAR_3);

 }

 return VAR_1;

}
