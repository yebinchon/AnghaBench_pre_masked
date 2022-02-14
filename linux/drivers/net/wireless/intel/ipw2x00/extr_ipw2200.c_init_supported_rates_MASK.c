
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipw_supported_rates {void* purpose; int ieee_mode; } ;
struct ipw_priv {TYPE_1__* ieee; } ;
struct TYPE_2__ {int freq_band; int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipw_supported_rates*,int ,int ) ;
 int FUNC_1 (struct ipw_supported_rates*,int ,int ) ;
 int FUNC_2 (struct ipw_supported_rates*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct ipw_priv *VAR_7,
    struct ipw_supported_rates *VAR_8)
{


 FUNC_2(VAR_8, 0, sizeof(*VAR_8));

 switch (VAR_7->ieee->freq_band) {
 case 128:
  VAR_8->ieee_mode = VAR_0;
  VAR_8->purpose = VAR_2;
  FUNC_1(VAR_8, VAR_4,
     VAR_5);
  break;

 default:
  VAR_8->ieee_mode = VAR_1;
  VAR_8->purpose = VAR_2;
  FUNC_0(VAR_8, VAR_4,
           VAR_3);
  if (VAR_7->ieee->modulation & VAR_6) {
   FUNC_1(VAR_8, VAR_4,
      VAR_5);
  }
  break;
 }

 return 0;
}
