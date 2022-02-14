
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dev_t ;
typedef int __be32 ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static __be32 *FUNC_4(__be32 *VAR_0, dev_t *VAR_1)
{
 unsigned int VAR_2, VAR_3;

 VAR_2 = FUNC_3(VAR_0++);
 VAR_3 = FUNC_3(VAR_0++);
 *VAR_1 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_0(*VAR_1) != VAR_2 || FUNC_1(*VAR_1) != VAR_3)
  *VAR_1 = 0;
 return VAR_0;
}
