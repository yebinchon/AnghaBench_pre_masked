
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bfa_iocpf {int dummy; } ;
struct bfa_ioc {int port_mode; int port_mode_cfg; int ad_cap_bm; struct bfa_iocpf iocpf; } ;
typedef enum bfa_mode { ____Placeholder_bfa_mode } bfa_mode ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_iocpf*,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_ioc *VAR_1, enum bfa_mode VAR_2,
   u8 VAR_3)
{
 struct bfa_iocpf *VAR_4 = &VAR_1->iocpf;

 VAR_1->port_mode = VAR_1->port_mode_cfg = VAR_2;
 VAR_1->ad_cap_bm = VAR_3;
 FUNC_0(VAR_4, VAR_0);
}
