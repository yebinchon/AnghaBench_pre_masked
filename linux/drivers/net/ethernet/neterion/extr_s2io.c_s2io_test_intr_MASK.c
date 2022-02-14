
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s2io_nic {int msi_detected; int msi_wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct s2io_nic *VAR_3 = VAR_2;

 VAR_3->msi_detected = 1;
 FUNC_0(&VAR_3->msi_wait);

 return VAR_0;
}
