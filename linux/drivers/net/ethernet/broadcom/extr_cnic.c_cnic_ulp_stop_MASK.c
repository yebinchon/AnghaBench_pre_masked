
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {int dummy; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct cnic_local*,int) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_1)
{
 struct cnic_local *VAR_2 = VAR_1->cnic_priv;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(VAR_2, VAR_3);
}
