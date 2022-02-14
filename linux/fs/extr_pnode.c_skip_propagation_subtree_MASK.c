
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mount {int mnt_slave_list; } ;


 int FUNC_0 (struct mount*) ;
 struct mount* FUNC_1 (struct mount*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct mount *FUNC_3(struct mount *VAR_0,
      struct mount *VAR_1)
{




 if (!FUNC_0(VAR_0) && !FUNC_2(&VAR_0->mnt_slave_list))
  VAR_0 = FUNC_1(VAR_0);

 return VAR_0;
}
