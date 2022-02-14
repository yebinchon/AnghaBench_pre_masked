
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_source; } ;
struct macsec_eth_header {TYPE_1__ eth; int secure_channel_id; } ;
typedef int sci_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static sci_t FUNC_2(struct macsec_eth_header *VAR_1, bool VAR_2)
{
 sci_t VAR_3;

 if (VAR_2)
  FUNC_1(&VAR_3, VAR_1->secure_channel_id,
         sizeof(VAR_1->secure_channel_id));
 else
  VAR_3 = FUNC_0(VAR_1->eth.h_source, VAR_0);

 return VAR_3;
}
