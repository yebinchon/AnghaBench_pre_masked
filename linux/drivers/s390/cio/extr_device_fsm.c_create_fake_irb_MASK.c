
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tm_scsw {int x; int cc; void* stctl; void* actl; void* fctl; } ;
struct cmd_scsw {int cc; void* stctl; void* actl; void* fctl; } ;
struct TYPE_2__ {struct tm_scsw tm; struct cmd_scsw cmd; } ;
struct irb {TYPE_1__ scsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct irb*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct irb *VAR_5, int VAR_6)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 if (VAR_6 == VAR_0) {
  struct cmd_scsw *VAR_7 = &VAR_5->scsw.cmd;
  VAR_7->cc = 1;
  VAR_7->fctl = VAR_3;
  VAR_7->actl = VAR_2;
  VAR_7->stctl = VAR_4;
 } else if (VAR_6 == VAR_1) {
  struct tm_scsw *VAR_8 = &VAR_5->scsw.tm;
  VAR_8->x = 1;
  VAR_8->cc = 1;
  VAR_8->fctl = VAR_3;
  VAR_8->actl = VAR_2;
  VAR_8->stctl = VAR_4;
 }
}
