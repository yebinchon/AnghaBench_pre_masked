
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int magic ;
typedef int csum ;
typedef int __le16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(unsigned char *VAR_1, unsigned int VAR_2)
{
 const unsigned int VAR_3 = 128;
 const unsigned int VAR_4 = 98;
 __le16 VAR_5;
 __le16 VAR_6;

 if (VAR_2 < VAR_4 || VAR_2 > VAR_3)
  return 0;
 FUNC_1(&VAR_5, VAR_1, sizeof(VAR_5));
 if (FUNC_0(VAR_5) != VAR_0)
  return 0;

 VAR_2 -= 2;
 FUNC_1(&VAR_6, VAR_1 + VAR_2, sizeof(VAR_6));

 return (FUNC_0(VAR_6) == FUNC_2(VAR_1, VAR_2));
}
