
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isi_port {scalar_t__ magic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,char const*) ;

__attribute__((used)) static inline int FUNC_1(struct isi_port const *VAR_1,
 char *VAR_2, const char *VAR_3)
{
 if (!VAR_1) {
  FUNC_0("Warning: bad isicom magic for dev %s in %s\n",
   VAR_2, VAR_3);
  return 1;
 }
 if (VAR_1->magic != VAR_0) {
  FUNC_0("Warning: NULL isicom port for dev %s in %s\n",
   VAR_2, VAR_3);
  return 1;
 }

 return 0;
}
