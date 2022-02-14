
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(__u8 *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 int VAR_4 = 0;

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {
  for (VAR_1 = 0, VAR_3 = 0; VAR_1 < 8; VAR_1++)
   VAR_3 ^= FUNC_0(VAR_1 * 6 + VAR_2, VAR_0);

  VAR_4 |= (VAR_3 << VAR_2);
 }

 return VAR_4;
}
