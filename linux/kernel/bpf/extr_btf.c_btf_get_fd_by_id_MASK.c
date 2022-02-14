
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct btf {int refcnt; } ;


 int VAR_0 ;
 struct btf* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct btf*) ;
 int FUNC_2 (struct btf*) ;
 int FUNC_3 (struct btf*) ;
 int VAR_1 ;
 int FUNC_4 (struct btf*) ;
 struct btf* FUNC_5 (int *,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

int FUNC_9(u32 VAR_2)
{
 struct btf *VAR_3;
 int VAR_4;

 FUNC_6();
 VAR_3 = FUNC_5(&VAR_1, VAR_2);
 if (!VAR_3 || !FUNC_8(&VAR_3->refcnt))
  VAR_3 = FUNC_0(-VAR_0);
 FUNC_7();

 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  FUNC_4(VAR_3);

 return VAR_4;
}
