
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct recv_frame {TYPE_1__* pkt; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct adapter {int dummy; } ;
struct action_handler {unsigned char num; int (* func ) (struct adapter*,struct recv_frame*) ;} ;
struct TYPE_2__ {int * data; } ;


 int FUNC_0 (struct action_handler*) ;
 struct action_handler* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct adapter*,struct recv_frame*) ;

__attribute__((used)) static unsigned int FUNC_2(struct adapter *VAR_2,
        struct recv_frame *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;
 struct action_handler *VAR_6;
 unsigned char *VAR_7;
 u8 *VAR_8 = VAR_3->pkt->data;

 VAR_7 = (unsigned char *)(VAR_8 + sizeof(struct ieee80211_hdr_3addr));

 VAR_5 = VAR_7[0];

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_6 = &VAR_0[VAR_4];
  if (VAR_5 == VAR_6->num)
   VAR_6->func(VAR_2, VAR_3);
 }
 return VAR_1;
}
