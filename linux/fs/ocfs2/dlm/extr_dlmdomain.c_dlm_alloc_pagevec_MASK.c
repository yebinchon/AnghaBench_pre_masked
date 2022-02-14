
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (void**,int) ;
 void** FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,char*,int,unsigned long,unsigned long) ;

__attribute__((used)) static void **FUNC_4(int VAR_3)
{
 void **VAR_4 = FUNC_2(VAR_3, sizeof(void *), VAR_2);
 int VAR_5;

 if (!VAR_4)
  return ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
  if (!(VAR_4[VAR_5] = (void *)FUNC_0(VAR_2)))
   goto out_free;

 FUNC_3(0, "Allocated DLM hash pagevec; %d pages (%lu expected), %lu buckets per page\n",
      VAR_3, (unsigned long)VAR_1,
      (unsigned long)VAR_0);
 return VAR_4;
out_free:
 FUNC_1(VAR_4, VAR_5);
 return ((void*)0);
}
