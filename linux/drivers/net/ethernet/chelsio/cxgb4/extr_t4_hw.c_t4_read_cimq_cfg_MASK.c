
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int) ;

void FUNC_7(struct adapter *VAR_7, u16 *VAR_8, u16 *VAR_9, u16 *VAR_10)
{
 unsigned int VAR_11, VAR_12;
 int VAR_13 = FUNC_4(VAR_7->params.chip) ?
    VAR_1 : VAR_2;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  FUNC_6(VAR_7, VAR_4, VAR_5 |
        FUNC_3(VAR_11));
  VAR_12 = FUNC_5(VAR_7, VAR_3);

  *VAR_8++ = FUNC_0(VAR_12) * 256;
  *VAR_9++ = FUNC_1(VAR_12) * 256;
  *VAR_10++ = FUNC_2(VAR_12) * 8;
 }
 for (VAR_11 = 0; VAR_11 < VAR_13; VAR_11++) {
  FUNC_6(VAR_7, VAR_4, VAR_6 |
        FUNC_3(VAR_11));
  VAR_12 = FUNC_5(VAR_7, VAR_3);

  *VAR_8++ = FUNC_0(VAR_12) * 256;
  *VAR_9++ = FUNC_1(VAR_12) * 256;
 }
}
