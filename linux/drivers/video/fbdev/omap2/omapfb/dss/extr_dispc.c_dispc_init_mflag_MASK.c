
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* feat; } ;
struct TYPE_3__ {scalar_t__ has_writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_3;
 FUNC_3(VAR_0,
  (1 << 0) |
  (0 << 2));

 for (VAR_3 = 0; VAR_3 < FUNC_5(); ++VAR_3) {
  u32 VAR_4 = FUNC_0(VAR_3);
  u32 VAR_5 = FUNC_4();
  u32 VAR_6, VAR_7;

  FUNC_1(VAR_3, 1);







  VAR_6 = VAR_4 * 4 / 8 / VAR_5;
  VAR_7 = VAR_4 * 5 / 8 / VAR_5;

  FUNC_2(VAR_3, VAR_6, VAR_7);
 }

 if (VAR_2.feat->has_writeback) {
  u32 VAR_8 = FUNC_0(VAR_1);
  u32 VAR_9 = FUNC_4();
  u32 VAR_10, VAR_11;

  FUNC_1(VAR_1, 1);







  VAR_10 = VAR_8 * 4 / 8 / VAR_9;
  VAR_11 = VAR_8 * 5 / 8 / VAR_9;

  FUNC_2(VAR_1, VAR_10, VAR_11);
 }
}
