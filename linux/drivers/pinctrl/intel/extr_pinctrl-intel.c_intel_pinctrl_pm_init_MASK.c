
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_pinctrl_soc_data {int npins; } ;
struct TYPE_2__ {struct intel_community_context* communities; struct intel_pad_context* pads; } ;
struct intel_pinctrl {int ncommunities; TYPE_1__ context; int dev; struct intel_community* communities; struct intel_pinctrl_soc_data* soc; } ;
struct intel_pad_context {int dummy; } ;
struct intel_community_context {int * hostown; int * intmask; } ;
struct intel_community {int ngpps; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct intel_pinctrl *VAR_2)
{
 return 0;
}
