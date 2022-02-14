
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aac_dev {int dummy; } ;
struct TYPE_2__ {int OMR; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (struct aac_dev*,int ) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct aac_dev *VAR_6)
{
 bool VAR_7 = 1;
 unsigned long VAR_8, VAR_9;
 bool VAR_10 = 0;

 VAR_9 = VAR_5;
 do {
  FUNC_0();
  VAR_8 = FUNC_1(VAR_6, VAR_3.OMR);

  if (VAR_8 == 0xffffffff)
   VAR_8 = 0;

  if (VAR_8 & VAR_1) {
   VAR_9 = VAR_5;
   continue;
  }

  if (FUNC_2(VAR_5, VAR_9+VAR_0*VAR_4)) {
   VAR_7 = 0;
   break;
  }

  VAR_10 = VAR_8 & VAR_2;

 } while (!VAR_10);

 return VAR_7;
}
