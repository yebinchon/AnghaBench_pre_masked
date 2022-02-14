
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct adapter*,int ,unsigned char*) ;
 int FUNC_3 (struct adapter*,int ) ;

void FUNC_4(struct adapter *VAR_8, u8 VAR_9)
{
 unsigned char VAR_10[VAR_3];

 FUNC_1(VAR_10, 0, VAR_3);

 if ((VAR_9 & VAR_4) && (VAR_9 == VAR_4))
  FUNC_0(VAR_10, VAR_5, 4);
 else if (VAR_9 & VAR_4)
  FUNC_0(VAR_10, VAR_6, 7);
 else
  FUNC_0(VAR_10, VAR_7, 3);

 if (VAR_9 & VAR_4)
  FUNC_3(VAR_8, VAR_1);
 else
  FUNC_3(VAR_8, VAR_2);

 FUNC_2(VAR_8, VAR_0, VAR_10);
}
