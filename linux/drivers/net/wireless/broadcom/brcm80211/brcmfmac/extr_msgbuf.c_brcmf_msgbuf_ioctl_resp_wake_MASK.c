
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_msgbuf {int ctl_completed; int ioctl_resp_wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct brcmf_msgbuf *VAR_0)
{
 VAR_0->ctl_completed = 1;
 FUNC_0(&VAR_0->ioctl_resp_wait);
}
