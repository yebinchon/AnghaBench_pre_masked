
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_2__ {scalar_t__ kbdmode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct vc_data*,unsigned int,int ) ;
 int FUNC_1 (struct vc_data*,int ,char) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct vc_data *VAR_5, unsigned char VAR_6, char VAR_7)
{
 static unsigned VAR_8, VAR_9;
 static unsigned long VAR_10;

 if (VAR_4->kbdmode != VAR_1) {
  if (!VAR_7)
   FUNC_3("keyboard mode must be unicode for braille patterns\n");
  return;
 }

 if (!VAR_6) {
  FUNC_1(VAR_5, VAR_0, VAR_7);
  return;
 }

 if (VAR_6 > 8)
  return;

 if (!VAR_7) {
  VAR_8 |= 1 << (VAR_6 - 1);
  if (!VAR_2)
   VAR_9 = VAR_8;
 } else if (VAR_2) {
  if (!VAR_9 ||
      FUNC_4(VAR_3,
          VAR_10 + FUNC_2(VAR_2))) {
   VAR_9 = VAR_8;
   VAR_10 = VAR_3;
  }
  VAR_8 &= ~(1 << (VAR_6 - 1));
  if (!VAR_8 && VAR_9) {
   FUNC_0(VAR_5, VAR_9, 0);
   VAR_9 = 0;
  }
 } else {
  if (VAR_9) {
   FUNC_0(VAR_5, VAR_9, 0);
   VAR_9 = 0;
  }
  VAR_8 &= ~(1 << (VAR_6 - 1));
 }
}
