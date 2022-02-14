
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_device {scalar_t__* regs; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iss_device*,int ,int ,int ) ;
 int FUNC_2 (struct iss_device*) ;

__attribute__((used)) static void FUNC_3(struct iss_device *VAR_2)
{
 if (VAR_2->regs[VAR_0])
  FUNC_2(VAR_2);

 FUNC_1(VAR_2, VAR_1, FUNC_0(5), ~0);
}
