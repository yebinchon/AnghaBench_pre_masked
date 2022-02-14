
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_string {int len; int data; } ;
struct nfs4_pathname {int ncomponents; struct nfs4_string* components; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static inline char *FUNC_2(const struct nfs4_pathname *VAR_1,
      char *VAR_2, ssize_t VAR_3)
{
 char *VAR_4 = VAR_2 + VAR_3;
 int VAR_5;

 *--VAR_4 = '\0';
 VAR_3--;

 VAR_5 = VAR_1->ncomponents;
 while (--VAR_5 >= 0) {
  const struct nfs4_string *VAR_6 = &VAR_1->components[VAR_5];
  VAR_3 -= VAR_6->len + 1;
  if (VAR_3 < 0)
   goto Elong;
  VAR_4 -= VAR_6->len;
  FUNC_1(VAR_4, VAR_6->data, VAR_6->len);
  *--VAR_4 = '/';
 }
 return VAR_4;
Elong:
 return FUNC_0(-VAR_0);
}
