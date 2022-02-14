
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct fman_rev_info {int minor; scalar_t__ major; } ;
struct fman {TYPE_1__* fpm_regs; } ;
struct TYPE_2__ {int fm_ip_rev_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct fman *VAR_3, struct fman_rev_info *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(&VAR_3->fpm_regs->fm_ip_rev_1);
 VAR_4->major = (u8)((VAR_5 & VAR_0) >>
    VAR_1);
 VAR_4->minor = VAR_5 & VAR_2;
}
