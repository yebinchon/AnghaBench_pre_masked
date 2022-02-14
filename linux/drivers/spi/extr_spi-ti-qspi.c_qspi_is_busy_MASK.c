
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_qspi {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 () ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct ti_qspi*,int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static inline u32 FUNC_4(struct ti_qspi *VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6 = VAR_3 + VAR_1;

 VAR_5 = FUNC_2(VAR_4, VAR_2);
 while ((VAR_5 & VAR_0) && FUNC_3(VAR_6, VAR_3)) {
  FUNC_1();
  VAR_5 = FUNC_2(VAR_4, VAR_2);
 }

 FUNC_0(VAR_5 & VAR_0, "qspi busy\n");
 return VAR_5 & VAR_0;
}
