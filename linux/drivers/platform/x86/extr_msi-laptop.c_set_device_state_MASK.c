
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ ec_read_only; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (char const*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(const char *VAR_4, size_t VAR_5, u8 VAR_6)
{
 int VAR_7;
 u8 VAR_8 = 0, VAR_9;
 int VAR_10;

 if (FUNC_2(VAR_4, "%i", &VAR_7) != 1 || (VAR_7 < 0 || VAR_7 > 1))
  return -VAR_0;

 if (VAR_3->ec_read_only)
  return -VAR_1;


 VAR_10 = FUNC_0(VAR_2, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 if (!!(VAR_9 & VAR_6) != VAR_7) {

  if (VAR_9 & VAR_6)
   VAR_8 = VAR_9 & ~VAR_6;
  else
   VAR_8 = VAR_9 | VAR_6;

  VAR_10 = FUNC_1(VAR_2, VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return VAR_5;
}
