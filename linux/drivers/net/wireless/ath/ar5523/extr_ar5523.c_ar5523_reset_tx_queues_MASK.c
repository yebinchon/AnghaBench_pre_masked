
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523 {int dummy; } ;
typedef int qid ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct ar5523*,int ,int *,int,int ) ;
 int FUNC_1 (struct ar5523*,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_1)
{
 __be32 VAR_2 = FUNC_2(0);

 FUNC_1(VAR_1, "resetting Tx queue\n");
 return FUNC_0(VAR_1, VAR_0,
     &VAR_2, sizeof(VAR_2), 0);
}
