
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_endpoint {int conn_flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_1, int *VAR_2,
      struct htc_endpoint *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = *VAR_2 % VAR_1;


 if (!VAR_4)
  return 0;

 if (!(VAR_3->conn_flags & VAR_0))
  return -1;







 VAR_5 = *VAR_2 < VAR_1 ? (VAR_1 - *VAR_2) : VAR_4;

 if ((VAR_5 > 0) && (VAR_5 <= 255))
  *VAR_2 += VAR_5;
 else

  return -1;

 return VAR_5;
}
