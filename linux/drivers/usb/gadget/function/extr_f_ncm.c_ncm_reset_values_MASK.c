
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fixed_in_len; int fixed_out_len; scalar_t__ header_len; int cdc_filter; } ;
struct f_ncm {int is_crc; TYPE_1__ port; TYPE_3__* parser_opts; int ndp_sign; } ;
struct TYPE_6__ {int ndp_sign; } ;
struct TYPE_5__ {int dwNtbOutMaxSize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static inline void FUNC_1(struct f_ncm *VAR_4)
{
 VAR_4->parser_opts = &VAR_2;
 VAR_4->is_crc = 0;
 VAR_4->ndp_sign = VAR_4->parser_opts->ndp_sign;
 VAR_4->port.cdc_filter = VAR_0;


 VAR_4->port.header_len = 0;

 VAR_4->port.fixed_out_len = FUNC_0(VAR_3.dwNtbOutMaxSize);
 VAR_4->port.fixed_in_len = VAR_1;
}
