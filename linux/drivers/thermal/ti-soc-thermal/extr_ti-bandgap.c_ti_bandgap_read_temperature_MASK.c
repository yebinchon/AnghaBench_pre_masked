
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_bandgap {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_bandgap*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ti_bandgap*,int,int*) ;
 int FUNC_4 (struct ti_bandgap*,int) ;
 int FUNC_5 (struct ti_bandgap*,int) ;
 int FUNC_6 (struct ti_bandgap*,int) ;

int FUNC_7(struct ti_bandgap *VAR_2, int VAR_3,
    int *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;

 if (!FUNC_0(VAR_2, VAR_1)) {
  VAR_6 = FUNC_4(VAR_2, VAR_3);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_1(&VAR_2->lock);
 VAR_5 = FUNC_5(VAR_2, VAR_3);
 FUNC_2(&VAR_2->lock);

 VAR_6 = FUNC_3(VAR_2, VAR_5, &VAR_5);
 if (VAR_6)
  return -VAR_0;

 *VAR_4 = VAR_5;

 return 0;
}
