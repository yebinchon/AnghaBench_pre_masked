
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef scalar_t__ (* toupper_t ) (int ) ;
struct qstr {char* name; unsigned int len; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (char*,unsigned int,int) ;

__attribute__((used)) static inline int FUNC_1(unsigned int VAR_1,
  const char *VAR_2, const struct qstr *VAR_3, toupper_t VAR_4,
  bool VAR_5)
{
 const u8 *VAR_6 = VAR_2;
 const u8 *VAR_7 = VAR_3->name;






 if (FUNC_0(VAR_3->name, VAR_3->len, VAR_5))
  return 1;





 if (VAR_1 >= VAR_0) {
  if (VAR_3->len < VAR_0)
   return 1;
  VAR_1 = VAR_0;
 } else if (VAR_1 != VAR_3->len)
  return 1;

 for (; VAR_1 > 0; VAR_1--)
  if (VAR_4(*VAR_6++) != VAR_4(*VAR_7++))
   return 1;

 return 0;
}
