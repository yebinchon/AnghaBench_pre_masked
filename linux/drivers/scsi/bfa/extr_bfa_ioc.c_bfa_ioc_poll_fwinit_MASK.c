
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int poll_time; } ;
struct bfa_ioc_s {TYPE_1__ iocpf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int FUNC_4 (struct bfa_ioc_s*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct bfa_ioc_s *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_4);

 FUNC_4(VAR_4, VAR_5);

 if (VAR_5 == VAR_2) {
  FUNC_0(&VAR_4->iocpf, VAR_3);
  return;
 }

 if (VAR_4->iocpf.poll_time >= (3 * VAR_1))
  FUNC_3(VAR_4);
 else {
  VAR_4->iocpf.poll_time += VAR_0;
  FUNC_2(VAR_4);
 }
}
