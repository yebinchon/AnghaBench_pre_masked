
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 void* FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int ,int ,int,int) ;
 int FUNC_7 (struct adapter*,int ,int) ;

int FUNC_8(struct adapter *VAR_10, unsigned int VAR_11, u32 *VAR_12, size_t VAR_13)
{
 int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17, VAR_18;
 int VAR_19 = FUNC_4(VAR_10->params.chip) ?
    VAR_0 : VAR_1;

 if ((VAR_11 > (VAR_19 - 1)) || (VAR_13 & 3))
  return -VAR_6;

 FUNC_7(VAR_10, VAR_5, VAR_9 |
       FUNC_3(VAR_11));
 VAR_17 = FUNC_5(VAR_10, VAR_4);

 VAR_16 = FUNC_0(VAR_17) * 64;
 VAR_18 = FUNC_1(VAR_17) * 64;
 if (VAR_13 > VAR_18)
  VAR_13 = VAR_18;

 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++, VAR_16++) {
  FUNC_7(VAR_10, VAR_2, FUNC_2(VAR_16) |
        VAR_8);
  VAR_15 = FUNC_6(VAR_10, VAR_2, VAR_7, 0,
          2, 1);
  if (VAR_15)
   return VAR_15;
  *VAR_12++ = FUNC_5(VAR_10, VAR_3);
 }
 FUNC_7(VAR_10, VAR_2, 0);
 return VAR_14;
}
