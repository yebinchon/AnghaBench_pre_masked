
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qm_fd {int cmd; } ;
typedef enum qm_fd_format { ____Placeholder_qm_fd_format } qm_fd_format ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct qm_fd*) ;
 int FUNC_3 (struct qm_fd*,int) ;
 int FUNC_4 (struct qm_fd*) ;
 unsigned int FUNC_5 (struct qm_fd*) ;
 unsigned int FUNC_6 (struct qm_fd*) ;
 int FUNC_7 (struct qm_fd*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct qm_fd *VAR_0)
{
 u64 VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = VAR_1 >> 40;
 unsigned int VAR_3, VAR_4;
 enum qm_fd_format VAR_5;

 VAR_1 <<= 1;
 if (VAR_2)
  VAR_1 |= 1;
 FUNC_3(VAR_0, VAR_1);

 VAR_5 = FUNC_4(VAR_0);
 VAR_4 = FUNC_6(VAR_0);
 VAR_3 = FUNC_5(VAR_0);
 VAR_3--;
 FUNC_7(VAR_0, VAR_5, VAR_4, VAR_3);

 VAR_0->cmd = FUNC_1(FUNC_0(VAR_0->cmd) + 1);
}
