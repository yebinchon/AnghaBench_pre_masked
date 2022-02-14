
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ devt; } ;
typedef scalar_t__ dev_t ;


 unsigned int FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char*,int) ;
 int VAR_2 ;
 struct device* FUNC_4 (int *,int *,char const*,int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (char const*,char**,int) ;
 int FUNC_10 (char const*,char*,unsigned int*,unsigned int*,...) ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (char const*,char*,int) ;

dev_t FUNC_15(const char *VAR_4)
{
 char VAR_5[32];
 char *VAR_6;
 dev_t VAR_7 = 0;
 int VAR_8;
 if (FUNC_14(VAR_4, "/dev/", 5) != 0) {
  unsigned VAR_9, VAR_10, VAR_11;
  char VAR_12;

  if ((FUNC_10(VAR_4, "%u:%u%c", &VAR_9, &VAR_10, &VAR_12) == 2) ||
      (FUNC_10(VAR_4, "%u:%u:%u:%c", &VAR_9, &VAR_10, &VAR_11, &VAR_12) == 3)) {
   VAR_7 = FUNC_2(VAR_9, VAR_10);
   if (VAR_9 != FUNC_0(VAR_7) || VAR_10 != FUNC_1(VAR_7))
    goto fail;
  } else {
   VAR_7 = FUNC_7(FUNC_9(VAR_4, &VAR_6, 16));
   if (*VAR_6)
    goto fail;
  }
  goto done;
 }

 VAR_4 += 5;
 VAR_7 = VAR_0;
 if (FUNC_11(VAR_4, "nfs") == 0)
  goto done;
 VAR_7 = VAR_1;
 if (FUNC_11(VAR_4, "ram") == 0)
  goto done;

 if (FUNC_13(VAR_4) > 31)
  goto fail;
 FUNC_12(VAR_5, VAR_4);
 for (VAR_6 = VAR_5; *VAR_6; VAR_6++)
  if (*VAR_6 == '/')
   *VAR_6 = '!';
 VAR_7 = FUNC_3(VAR_5, 0);
 if (VAR_7)
  goto done;





 while (VAR_6 > VAR_5 && FUNC_6(VAR_6[-1]))
  VAR_6--;
 if (VAR_6 == VAR_5 || !*VAR_6 || *VAR_6 == '0')
  goto fail;


 VAR_8 = FUNC_9(VAR_6, ((void*)0), 10);
 *VAR_6 = '\0';
 VAR_7 = FUNC_3(VAR_5, VAR_8);
 if (VAR_7)
  goto done;


 if (VAR_6 < VAR_5 + 2 || !FUNC_6(VAR_6[-2]) || VAR_6[-1] != 'p')
  goto fail;
 VAR_6[-1] = '\0';
 VAR_7 = FUNC_3(VAR_5, VAR_8);
 if (VAR_7)
  goto done;

fail:
 return 0;
done:
 return VAR_7;
}
