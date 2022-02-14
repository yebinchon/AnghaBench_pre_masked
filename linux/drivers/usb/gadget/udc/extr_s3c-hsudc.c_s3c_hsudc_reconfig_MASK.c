
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_hsudc {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct s3c_hsudc*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct s3c_hsudc *VAR_9)
{
 FUNC_1(0xAA, VAR_9->regs + VAR_0);
 FUNC_1(1, VAR_9->regs + VAR_1);
 FUNC_1(0, VAR_9->regs + VAR_8);
 FUNC_1(VAR_4 | VAR_5 | VAR_7 |
   VAR_6, VAR_9->regs + VAR_3);
 FUNC_1(0, VAR_9->regs + VAR_2);

 FUNC_0(VAR_9);
}
