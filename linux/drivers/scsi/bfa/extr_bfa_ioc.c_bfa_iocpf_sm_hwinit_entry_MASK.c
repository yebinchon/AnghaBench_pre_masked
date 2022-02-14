
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_iocpf_s {int ioc; scalar_t__ poll_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_iocpf_s *VAR_1)
{
 VAR_1->poll_time = 0;
 FUNC_0(VAR_1->ioc, VAR_0);
}
