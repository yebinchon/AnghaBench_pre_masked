
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fieldbus_dev {int dc_wq; int dc_event; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct fieldbus_dev *VAR_0)
{
 VAR_0->dc_event++;
 FUNC_0(&VAR_0->dc_wq);
}
