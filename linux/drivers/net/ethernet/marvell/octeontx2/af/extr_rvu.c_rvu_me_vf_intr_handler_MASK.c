
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct rvu {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rvu*,int,scalar_t__) ;
 scalar_t__ FUNC_2 (struct rvu*,int ,int ) ;
 scalar_t__ FUNC_3 (struct rvu*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct rvu *VAR_5 = (struct rvu *)VAR_4;
 int VAR_6;
 u64 VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0, VAR_2);

 for (VAR_6 = 0; VAR_6 <= 1; VAR_6++) {
  VAR_7 = FUNC_3(VAR_5, FUNC_0(VAR_6));
  if (VAR_7)
   FUNC_1(VAR_5, VAR_6, VAR_7);
 }

 return VAR_1;
}
