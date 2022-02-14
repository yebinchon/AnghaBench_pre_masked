
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amvdec_core {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct amvdec_core*,int ) ;
 int FUNC_1 (struct amvdec_core*,int ,int) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int VAR_6 ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 int VAR_9;
 struct amvdec_core *VAR_10 = VAR_8;

 VAR_9 = FUNC_0(VAR_10, VAR_2);
 FUNC_1(VAR_10, VAR_2, VAR_9);

 if (VAR_9 & VAR_1) {
  FUNC_1(VAR_10, VAR_3, 0);
  FUNC_1(VAR_10, VAR_4, 0);
  VAR_5 = 1;
  FUNC_2(&VAR_6);
 }

 return VAR_0;
}
