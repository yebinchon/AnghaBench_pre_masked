
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_changeset {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct extent_changeset*) ;
 struct extent_changeset* FUNC_1 (int,int ) ;

__attribute__((used)) static inline struct extent_changeset *FUNC_2(void)
{
 struct extent_changeset *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(VAR_1);
 return VAR_1;
}
