
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nls_table {int dummy; } ;
struct cifs_tcon {int treeName; int ses; } ;


 int FUNC_0 (int ,int ,int ,struct cifs_tcon*,struct nls_table const*) ;

__attribute__((used)) static inline int FUNC_1(const struct nls_table *VAR_0,
       struct cifs_tcon *VAR_1)
{
 return FUNC_0(0, VAR_1->ses, VAR_1->treeName, VAR_1, VAR_0);
}
