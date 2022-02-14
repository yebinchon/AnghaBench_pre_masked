
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ size; } ;
struct ks_wlan_private {scalar_t__ scan_ind_count; TYPE_1__ aplist; } ;
struct hostif_start_request {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int) ;
 struct hostif_start_request* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ks_wlan_private*,struct hostif_start_request*,int ) ;

__attribute__((used)) static
void FUNC_4(struct ks_wlan_private *VAR_1, unsigned char VAR_2)
{
 struct hostif_start_request *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->mode = FUNC_0(VAR_2);

 FUNC_3(VAR_1, VAR_3, FUNC_1(sizeof(*VAR_3)));

 VAR_1->aplist.size = 0;
 VAR_1->scan_ind_count = 0;
}
