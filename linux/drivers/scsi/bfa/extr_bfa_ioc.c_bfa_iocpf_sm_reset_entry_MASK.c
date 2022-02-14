
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf_s {int auto_recover; int fw_mismatch_notified; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct bfa_iocpf_s *VAR_2)
{
 VAR_2->fw_mismatch_notified = VAR_0;
 VAR_2->auto_recover = VAR_1;
}
