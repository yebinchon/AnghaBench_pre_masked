
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct bnx2 {TYPE_1__* flash_info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bnx2*,int ) ;
 int FUNC_1 (struct bnx2*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct bnx2 *VAR_10, u32 VAR_11)
{
 u32 VAR_12;
 int VAR_13;

 if (VAR_10->flash_info->flags & VAR_7)

  return 0;


 VAR_12 = VAR_5 | VAR_6 |
       VAR_3;


 FUNC_1(VAR_10, VAR_2, VAR_4);


 FUNC_1(VAR_10, VAR_0, VAR_11 & VAR_1);


 FUNC_1(VAR_10, VAR_2, VAR_12);


 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  u32 VAR_14;

  FUNC_2(5);

  VAR_14 = FUNC_0(VAR_10, VAR_2);
  if (VAR_14 & VAR_4)
   break;
 }

 if (VAR_13 >= VAR_9)
  return -VAR_8;

 return 0;
}
