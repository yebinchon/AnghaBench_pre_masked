
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mv88e6060_priv {int ds; } ;
struct TYPE_4__ {TYPE_1__* cpu_dp; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mv88e6060_priv*,int,int ,int) ;

__attribute__((used)) static int FUNC_6(struct mv88e6060_priv *VAR_7, int VAR_8)
{
 int VAR_9 = FUNC_1(VAR_8);
 int VAR_10;






 VAR_10 = FUNC_5(VAR_7, VAR_9, VAR_1,
   FUNC_2(VAR_7->ds, VAR_8) ?
   VAR_4 |
   VAR_2 |
   VAR_3 :
   VAR_3);
 if (VAR_10)
  return VAR_10;






 VAR_10 = FUNC_5(VAR_7, VAR_9, VAR_5,
   ((VAR_8 & 0xf) << VAR_6) |
   (FUNC_2(VAR_7->ds, VAR_8) ?
    FUNC_4(VAR_7->ds) :
    FUNC_0(FUNC_3(VAR_7->ds, VAR_8)->cpu_dp->index)));
 if (VAR_10)
  return VAR_10;






 return FUNC_5(VAR_7, VAR_9, VAR_0, FUNC_0(VAR_8));
}
