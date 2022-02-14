
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct vc_data*,unsigned int,char) ;
 int FUNC_1 (struct vc_data*,unsigned int,char) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_2, unsigned int VAR_3, char VAR_4)
{
 static unsigned long VAR_5;
 static unsigned VAR_6;

 if (!VAR_1)
  FUNC_0(VAR_2, VAR_0 | VAR_3, VAR_4);
 else {
  VAR_6 |= VAR_3;
  VAR_5++;
  if (VAR_5 == VAR_1) {
   FUNC_1(VAR_2, VAR_0 | VAR_6, VAR_4);
   VAR_5 = 0;
   VAR_6 = 0;
  }
 }
}
