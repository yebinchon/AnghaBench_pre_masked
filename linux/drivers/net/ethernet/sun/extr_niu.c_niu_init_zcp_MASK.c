
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct niu {int port; TYPE_1__* parent; } ;
struct TYPE_2__ {scalar_t__ plat_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct niu*) ;
 int FUNC_2 (struct niu*,int,scalar_t__*) ;
 int FUNC_3 (struct niu*,int,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct niu *VAR_8)
{
 u64 VAR_9[5], VAR_10[5];
 int VAR_11, VAR_12, VAR_13;

 if (VAR_8->parent->plat_type != VAR_3) {
  if (VAR_8->port == 0 || VAR_8->port == 1)
   VAR_12 = VAR_0;
  else
   VAR_12 = VAR_1;
 } else
  VAR_12 = VAR_2;

 VAR_9[0] = 0;
 VAR_9[1] = 0;
 VAR_9[2] = 0;
 VAR_9[3] = 0;
 VAR_9[4] = 0;

 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_13 = FUNC_3(VAR_8, VAR_11, VAR_9);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_2(VAR_8, VAR_11, VAR_10);
  if (VAR_13)
   return VAR_13;
 }

 FUNC_1(VAR_8);
 FUNC_5(FUNC_0(VAR_8->port), 0);
 FUNC_5(VAR_6, VAR_7);
 (void) FUNC_4(VAR_6);
 FUNC_5(VAR_4, VAR_5);

 return 0;
}
