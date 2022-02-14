
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phantom_device {unsigned long status; scalar_t__ caddr; scalar_t__ iaddr; int counter; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct phantom_device *VAR_4, unsigned long VAR_5)
{
 FUNC_3("phantom_status %lx %lx\n", VAR_4->status, VAR_5);

 if (!(VAR_4->status & VAR_0) && (VAR_5 & VAR_0)) {
  FUNC_0(&VAR_4->counter, 0);
  FUNC_2(VAR_2, VAR_4->iaddr + VAR_1);
  FUNC_2(0x43, VAR_4->caddr + VAR_3);
  FUNC_1(VAR_4->caddr + VAR_3);
 } else if ((VAR_4->status & VAR_0) && !(VAR_5 & VAR_0)) {
  FUNC_2(0, VAR_4->caddr + VAR_3);
  FUNC_1(VAR_4->caddr + VAR_3);
 }

 VAR_4->status = VAR_5;

 return 0;
}
