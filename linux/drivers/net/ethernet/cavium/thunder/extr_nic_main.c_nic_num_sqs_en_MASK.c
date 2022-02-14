
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nicpf {int pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct nicpf *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = VAR_2;
 u16 VAR_10;




 if (FUNC_1() <= VAR_0)
  return 0;


 if (VAR_5 > 1)
  VAR_9 = VAR_1;

 VAR_8 = FUNC_2(VAR_6->pdev, VAR_3);
 FUNC_3(VAR_6->pdev, (VAR_8 + VAR_4), &VAR_10);
 return FUNC_0(VAR_10 - VAR_7, VAR_7 * VAR_9);
}
