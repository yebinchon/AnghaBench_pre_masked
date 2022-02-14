
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct init_sccb {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_1 (struct init_sccb*) ;
 int FUNC_2 (struct init_sccb*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct init_sccb*,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(int VAR_5, int *VAR_6, int *VAR_7)
{
 unsigned long VAR_8, VAR_9;
 struct init_sccb *VAR_10;
 int VAR_11;

 FUNC_0(sizeof(struct init_sccb) > VAR_3);

 *VAR_6 = *VAR_7 = 0;
 VAR_10 = (struct init_sccb *) VAR_4;
 VAR_8 = VAR_5 ? 0 : VAR_1;
 VAR_9 = VAR_5 ? 0 : VAR_2 | VAR_0;
 VAR_11 = FUNC_3(VAR_10, VAR_8, VAR_9);
 if (VAR_11)
  return VAR_11;
 *VAR_6 = FUNC_2(VAR_10);
 *VAR_7 = !!(FUNC_1(VAR_10) & VAR_2);
 return VAR_11;
}
