
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bph_length; int bp_type; } ;
typedef TYPE_1__ kdb_bp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,unsigned long*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_5, const char **VAR_6, int *VAR_7, kdb_bp_t *VAR_8)
{
 int VAR_9 = *VAR_7;
 int VAR_10;

 VAR_8->bph_length = 1;
 if ((VAR_5 + 1) != VAR_9) {
  if (FUNC_1(VAR_6[VAR_9], "datar", sizeof("datar")) == 0)
   VAR_8->bp_type = VAR_0;
  else if (FUNC_1(VAR_6[VAR_9], "dataw", sizeof("dataw")) == 0)
   VAR_8->bp_type = VAR_2;
  else if (FUNC_1(VAR_6[VAR_9], "inst", sizeof("inst")) == 0)
   VAR_8->bp_type = VAR_1;
  else
   return VAR_3;

  VAR_8->bph_length = 1;

  VAR_9++;

  if ((VAR_5 + 1) != VAR_9) {
   unsigned long VAR_11;

   VAR_10 = FUNC_0((char *)VAR_6[VAR_9],
        &VAR_11);
   if (VAR_10)
    return VAR_10;


   if (VAR_11 > 8)
    return VAR_4;

   VAR_8->bph_length = VAR_11;
   VAR_9++;
  }

  if ((VAR_5 + 1) != VAR_9)
   return VAR_3;
 }

 *VAR_7 = VAR_9;
 return 0;
}
