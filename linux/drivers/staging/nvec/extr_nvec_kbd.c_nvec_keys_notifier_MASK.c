
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_2__ {int input; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 scalar_t__** VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct notifier_block *VAR_8,
         unsigned long VAR_9, void *VAR_10)
{
 int VAR_11, VAR_12;
 unsigned char *VAR_13 = VAR_10;

 if (VAR_9 == VAR_4) {
  int VAR_14 = (VAR_13[0] & (3 << 5)) >> 5;


  if (VAR_14 == VAR_5)
   return VAR_2;

  if (VAR_14 == VAR_3)
   VAR_13++;

  VAR_11 = VAR_13[1] & 0x7f;
  VAR_12 = VAR_13[1] & 0x80;

  if (VAR_6[VAR_14][VAR_11] == VAR_0 && VAR_12)
   FUNC_2();

  FUNC_0(VAR_7.input, VAR_6[VAR_14][VAR_11],
     !VAR_12);
  FUNC_1(VAR_7.input);

  return VAR_2;
 }

 return VAR_1;
}
