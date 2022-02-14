
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; scalar_t__ cts; } ;
struct fwtty_port {struct async_icount icount; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static int FUNC_0(struct fwtty_port *VAR_4, unsigned long VAR_5,
      struct async_icount *VAR_6)
{
 struct async_icount VAR_7;
 int VAR_8;

 VAR_7 = VAR_4->icount;

 VAR_8 = ((VAR_5 & VAR_3 && VAR_6->rng != VAR_7.rng) ||
   (VAR_5 & VAR_2 && VAR_6->dsr != VAR_7.dsr) ||
   (VAR_5 & VAR_0 && VAR_6->dcd != VAR_7.dcd) ||
   (VAR_5 & VAR_1 && VAR_6->cts != VAR_7.cts));

 *VAR_6 = VAR_7;

 return VAR_8;
}
