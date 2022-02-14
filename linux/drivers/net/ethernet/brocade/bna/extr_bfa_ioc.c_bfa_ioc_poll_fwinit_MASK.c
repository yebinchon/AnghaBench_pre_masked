
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ poll_time; } ;
struct bfa_ioc {int iocpf_timer; TYPE_1__ iocpf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct bfa_ioc*) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct bfa_ioc *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_6);

 if (VAR_7 == VAR_2) {
  FUNC_0(&VAR_6->iocpf, VAR_3);
  return;
 }

 if (VAR_6->iocpf.poll_time >= VAR_1) {
  FUNC_0(&VAR_6->iocpf, VAR_4);
 } else {
  VAR_6->iocpf.poll_time += VAR_0;
  FUNC_2(&VAR_6->iocpf_timer, VAR_5 +
   FUNC_3(VAR_0));
 }
}
