
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct device {TYPE_2__* bus; TYPE_1__* driver; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device const*) ;
 char* VAR_2 ;
 int VAR_3 ;
 long const VAR_4 ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,size_t,char const*,char const*,int ,...) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (char*) ;
 char* FUNC_7 (long const) ;
 int FUNC_8 (char*,size_t,char const*,int ) ;

__attribute__((used)) static int FUNC_9(const long VAR_5,
        const struct device *VAR_6,
        const char *VAR_7,
        va_list VAR_8)
{
 if (VAR_5 <= VAR_4) {
  unsigned long VAR_9 = 0;
  int VAR_10 = 0;
  char *VAR_11 = VAR_2;
  size_t VAR_12 = VAR_1;
  const char *VAR_13 = "%s%s: ";
  const char *VAR_14 = "%s%s [%s, %s, %s]";
  const char *VAR_15 =
   FUNC_7(VAR_5);

  FUNC_4(&VAR_3, VAR_9);

  FUNC_1(VAR_11, 0, VAR_12);







  if (VAR_6 == ((void*)0)) {
   FUNC_3(VAR_11, VAR_12, VAR_13, VAR_15,
     VAR_0);
  } else {
   FUNC_3(VAR_11, VAR_12, VAR_14, VAR_15,
     VAR_0,
     (VAR_6->driver ? VAR_6->driver->name : "unknown"),
     (VAR_6->bus ? VAR_6->bus->name : "unknown"),
     FUNC_0(VAR_6));
  }

  VAR_11 += FUNC_6(VAR_2);
  VAR_12 -= FUNC_6(VAR_2);

  VAR_10 = FUNC_8(VAR_11, VAR_12, VAR_7, VAR_8);
  if (VAR_10 < 0) {
   FUNC_5(&VAR_3, VAR_9);
   return -1;
  }





  FUNC_2("%s\n", VAR_2);

  FUNC_5(&VAR_3, VAR_9);
 }

 return 0;
}
