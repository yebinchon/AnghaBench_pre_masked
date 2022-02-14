
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfa_ioc {int port_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfa_ioc*,void*,scalar_t__,int) ;

int
FUNC_1(struct bfa_ioc *VAR_2, void *VAR_3, int *VAR_4)
{
 u32 VAR_5 = VAR_0 + VAR_1 * VAR_2->port_id;
 int VAR_6, VAR_7 = 0;

 VAR_6 = *VAR_4;
 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6);
 *VAR_4 = VAR_6;
 return VAR_7;
}
