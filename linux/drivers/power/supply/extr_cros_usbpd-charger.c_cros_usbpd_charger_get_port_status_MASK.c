
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_data {scalar_t__ last_update; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct port_data*) ;
 int FUNC_1 (struct port_data*) ;
 int FUNC_2 (struct port_data*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct port_data *VAR_2,
           bool VAR_3)
{
 int VAR_4;

 if (VAR_3 &&
     FUNC_3(VAR_2->last_update +
      VAR_0))
  return 0;

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 if (!FUNC_2(VAR_2))
  VAR_4 = FUNC_0(VAR_2);
 VAR_2->last_update = VAR_1;

 return VAR_4;
}
