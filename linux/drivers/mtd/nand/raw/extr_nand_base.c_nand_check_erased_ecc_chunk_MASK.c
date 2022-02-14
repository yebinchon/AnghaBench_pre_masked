
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int,int) ;
 int FUNC_1 (void*,int,int) ;

int FUNC_2(void *VAR_0, int VAR_1,
    void *VAR_2, int VAR_3,
    void *VAR_4, int VAR_5,
    int VAR_6)
{
 int VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_0, VAR_1,
           VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 -= VAR_7;

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_6);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_6 -= VAR_8;

 VAR_9 = FUNC_1(VAR_4, VAR_5,
        VAR_6);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_7)
  FUNC_0(VAR_0, 0xff, VAR_1);

 if (VAR_8)
  FUNC_0(VAR_2, 0xff, VAR_3);

 if (VAR_9)
  FUNC_0(VAR_4, 0xff, VAR_5);

 return VAR_7 + VAR_8 + VAR_9;
}
