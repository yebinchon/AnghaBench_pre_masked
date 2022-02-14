
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char const* name; int len; int hash; } ;


 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static inline void FUNC_2(struct qstr *VAR_0, const char *VAR_1)
{
 VAR_0->name = VAR_1;
 VAR_0->len = FUNC_1(VAR_1);
 VAR_0->hash = FUNC_0(VAR_0->name, VAR_0->len);
}
