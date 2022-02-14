
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct subchannel_id {int dummy; } ;
struct TYPE_5__ {int code; } ;
struct TYPE_4__ {int length; int code; } ;
struct chsc_scssc_area {int ks; int kc; int word_with_d_bit; TYPE_2__ response; struct subchannel_id schid; int isc; void* subchannel_indicator_addr; void* summary_indicator_addr; scalar_t__ operation_code; TYPE_1__ request; } ;
struct TYPE_6__ {scalar_t__ aif_tdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct chsc_scssc_area*) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_2 (struct chsc_scssc_area*,int ,int) ;

int FUNC_3(struct subchannel_id VAR_4, struct chsc_scssc_area *VAR_5,
       u64 VAR_6, u64 VAR_7)
{
 FUNC_2(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->request.length = 0x0fe0;
 VAR_5->request.code = 0x0021;
 VAR_5->operation_code = 0;

 VAR_5->summary_indicator_addr = VAR_6;
 VAR_5->subchannel_indicator_addr = VAR_7;

 VAR_5->ks = VAR_1 >> 4;
 VAR_5->kc = VAR_1 >> 4;
 VAR_5->isc = VAR_2;
 VAR_5->schid = VAR_4;


 if (VAR_3.aif_tdd)
  VAR_5->word_with_d_bit = 0x10000000;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 return FUNC_1(VAR_5->response.code);
}
