
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int port_num; int irq_occurred; int lock; int init_error; } ;
typedef TYPE_1__ SLMP_INFO ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,unsigned char,int) ;
 int FUNC_5 (TYPE_1__*,unsigned char,int) ;

__attribute__((used)) static bool FUNC_6(SLMP_INFO *VAR_9)
{
 unsigned long VAR_10;
 unsigned long VAR_11;

 unsigned char VAR_12 = (VAR_9->port_num & 1) ? VAR_7 : VAR_6;

 FUNC_2(&VAR_9->lock,VAR_11);
 FUNC_1(VAR_9);


 VAR_9->init_error = VAR_2;
 VAR_9->irq_occurred = 0;




 FUNC_4(VAR_9, VAR_3, (unsigned char)((VAR_9->port_num & 1) ? VAR_1 : VAR_0));

 FUNC_4(VAR_9, (unsigned char)(VAR_12 + VAR_5), 0);
 FUNC_5(VAR_9, (unsigned char)(VAR_12 + VAR_4), 1);
 FUNC_4(VAR_9, (unsigned char)(VAR_12 + VAR_8), 0x50);

 FUNC_3(&VAR_9->lock,VAR_11);

 VAR_10=100;
 while( VAR_10-- && !VAR_9->irq_occurred ) {
  FUNC_0(10);
 }

 FUNC_2(&VAR_9->lock,VAR_11);
 FUNC_1(VAR_9);
 FUNC_3(&VAR_9->lock,VAR_11);

 return VAR_9->irq_occurred;
}
