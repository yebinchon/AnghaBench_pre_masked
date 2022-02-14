
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ project; } ;
struct TYPE_4__ {TYPE_1__ version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned long* VAR_6 ;
 int FUNC_1 (int ) ;
 unsigned long* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_9)
{
 unsigned long VAR_10;
 u8 VAR_11[] = { VAR_2, VAR_1, VAR_0, VAR_3 };
 const unsigned long *VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_8.version.project == VAR_5) {
  VAR_12 = VAR_7;
  VAR_13 = FUNC_0(VAR_7);
 } else {
  VAR_12 = VAR_6;
  VAR_13 = FUNC_0(VAR_6);
 }


 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_10 = VAR_12[VAR_14];
  if (VAR_9 == VAR_10)
   break;
 }

 if (VAR_9 != VAR_10)
  return -VAR_4;


 FUNC_2("SET ARM OPP 0x%02x\n", VAR_11[VAR_14]);
 return FUNC_1(VAR_11[VAR_14]);
}
