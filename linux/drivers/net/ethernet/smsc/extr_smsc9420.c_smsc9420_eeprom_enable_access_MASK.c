
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (struct smsc9420_pdata*,int ) ;
 int FUNC_2 (struct smsc9420_pdata*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct smsc9420_pdata *VAR_2)
{
 unsigned int VAR_3 = FUNC_1(VAR_2, VAR_0);
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_3);
 FUNC_0(1);
}
