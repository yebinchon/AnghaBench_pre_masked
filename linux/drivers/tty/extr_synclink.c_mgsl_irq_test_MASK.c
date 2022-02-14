
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mgsl_struct {int irq_occurred; int irq_spinlock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct mgsl_struct*,int ) ;
 int FUNC_4 (struct mgsl_struct*,int ) ;
 int FUNC_5 (struct mgsl_struct*) ;
 int FUNC_6 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_7 (struct mgsl_struct*,int ) ;
 int FUNC_8 (struct mgsl_struct*,int ,unsigned short) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*) ;

__attribute__((used)) static bool FUNC_11( struct mgsl_struct *VAR_7 )
{
 unsigned long VAR_8;
 unsigned long VAR_9;

 FUNC_1(&VAR_7->irq_spinlock,VAR_9);
 FUNC_10(VAR_7);






 VAR_7->irq_occurred = 0;





 FUNC_8( VAR_7, VAR_4, (unsigned short)((FUNC_7(VAR_7, VAR_4) | VAR_1) & ~VAR_0) );

 FUNC_5(VAR_7);
 FUNC_4(VAR_7, VAR_2);
 FUNC_3(VAR_7, VAR_2);

 FUNC_9(VAR_7, VAR_3);
 FUNC_6(VAR_7, VAR_5 + VAR_6);

 FUNC_2(&VAR_7->irq_spinlock,VAR_9);

 VAR_8=100;
 while( VAR_8-- && !VAR_7->irq_occurred ) {
  FUNC_0(10);
 }

 FUNC_1(&VAR_7->irq_spinlock,VAR_9);
 FUNC_10(VAR_7);
 FUNC_2(&VAR_7->irq_spinlock,VAR_9);

 return VAR_7->irq_occurred;

}
