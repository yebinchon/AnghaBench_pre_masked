
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qpnp_tm_chip {scalar_t__ subtype; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qpnp_tm_chip*,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct qpnp_tm_chip *VAR_5)
{
 int VAR_6;
 u8 VAR_7 = 0;

 VAR_6 = FUNC_0(VAR_5, VAR_0, &VAR_7);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5->subtype == VAR_1)
  VAR_6 = VAR_7 & VAR_2;
 else
  VAR_6 = (VAR_7 & VAR_3) >> VAR_4;

 return VAR_6;
}
