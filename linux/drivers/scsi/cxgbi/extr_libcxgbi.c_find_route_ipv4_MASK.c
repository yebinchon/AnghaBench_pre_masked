
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtable {int dummy; } ;
struct flowi4 {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtable*) ;
 int VAR_1 ;
 struct rtable* FUNC_1 (int *,struct flowi4*,int *,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static struct rtable *FUNC_2(struct flowi4 *VAR_2,
          __be32 VAR_3, __be32 VAR_4,
          __be16 VAR_5, __be16 VAR_6, u8 VAR_7,
          int VAR_8)
{
 struct rtable *VAR_9;

 VAR_9 = FUNC_1(&VAR_1, VAR_2, ((void*)0), VAR_4, VAR_3,
       VAR_6, VAR_5, VAR_0, VAR_7, VAR_8);
 if (FUNC_0(VAR_9))
  return ((void*)0);

 return VAR_9;
}
