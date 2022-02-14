
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nicvf {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nicvf*) ;
 int FUNC_1 (struct nicvf*) ;
 int FUNC_2 (struct nicvf*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct nicvf *VAR_5 = (struct nicvf *)VAR_4;
 u64 VAR_6;

 FUNC_0(VAR_5);

 VAR_6 = FUNC_2(VAR_5, VAR_2);

 if (!(VAR_6 & VAR_1))
  return VAR_0;

 FUNC_1(VAR_5);

 return VAR_0;
}
