
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc911x_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct smsc911x_data*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct smsc911x_data *VAR_3)
{
 unsigned int VAR_4 =
     FUNC_0(VAR_3, VAR_0) & VAR_1;

 if (VAR_4 != 0)
  VAR_4 = FUNC_0(VAR_3, VAR_2);

 return VAR_4;
}
