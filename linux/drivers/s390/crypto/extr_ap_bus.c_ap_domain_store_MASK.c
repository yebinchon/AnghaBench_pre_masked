
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_type {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int aqm; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,char*,int*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct bus_type *VAR_6,
          const char *VAR_7, size_t VAR_8)
{
 int VAR_9;

 if (FUNC_3(VAR_7, "%i\n", &VAR_9) != 1 ||
     VAR_9 < 0 || VAR_9 > VAR_4 ||
     !FUNC_4(VAR_9, VAR_5.aqm))
  return -VAR_1;
 FUNC_1(&VAR_3);
 VAR_2 = VAR_9;
 FUNC_2(&VAR_3);

 FUNC_0(VAR_0, "stored new default domain=%d\n", VAR_9);

 return VAR_8;
}
