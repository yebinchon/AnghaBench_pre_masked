
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long port_bit; } ;
union cvmx_ipd_sub_port_fcs {void* u64; TYPE_2__ s; } ;
union cvmx_gmxx_rxx_int_reg {void* u64; } ;
struct TYPE_3__ {int pre_chk; } ;
union cvmx_gmxx_rxx_frm_ctl {void* u64; TYPE_1__ s; } ;
struct octeon_ethernet {unsigned long long port; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (unsigned long long) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;

__attribute__((used)) static void FUNC_6(struct octeon_ethernet *VAR_1, bool VAR_2)
{
 union cvmx_gmxx_rxx_frm_ctl VAR_3;
 union cvmx_ipd_sub_port_fcs VAR_4;
 union cvmx_gmxx_rxx_int_reg VAR_5;
 int VAR_6 = FUNC_3(VAR_1->port);
 int VAR_7 = FUNC_2(VAR_1->port);


 VAR_3.u64 = FUNC_4(FUNC_0(VAR_7,
           VAR_6));
 VAR_3.s.pre_chk = VAR_2;
 FUNC_5(FUNC_0(VAR_7, VAR_6),
         VAR_3.u64);


 VAR_4.u64 = FUNC_4(VAR_0);
 if (VAR_2)
  VAR_4.s.port_bit |= 1ull << VAR_1->port;
 else
  VAR_4.s.port_bit &=
     0xffffffffull ^ (1ull << VAR_1->port);
 FUNC_5(VAR_0, VAR_4.u64);


 VAR_5.u64 = FUNC_4(FUNC_1(VAR_7,
           VAR_6));
 FUNC_5(FUNC_1(VAR_7, VAR_6),
         VAR_5.u64);
}
